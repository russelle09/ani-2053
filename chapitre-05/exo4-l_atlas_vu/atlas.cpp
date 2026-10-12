#include "NKFont/NkFont.h"
#include "NKImage/NKImage.h"

#include <cstdint>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

struct ResultatAtlas
{
    int taille;
    int glyphes;
    int largeur;
    int hauteur;
    double perdu;
};

ResultatAtlas construireAtlas(float taille, bool enregistrer)
{
    nkentseu::NkFontAtlas atlas;

    nkentseu::NkFont* font = atlas.AddFontFromFile("C:/Windows/Fonts/arial.ttf", taille);

    if (font == nullptr)
    {
        cerr << "Impossible de charger la police." << endl;
        return {static_cast<int>(taille), 0, 0, 0, 0.0};
    }
    atlas.Build();

    unsigned char* pixels = nullptr;
    int largeur = 0;
    int hauteur = 0;

    atlas.GetTexDataAsRGBA32(&pixels, &largeur, &hauteur);

    if (pixels == nullptr || largeur <= 0 || hauteur <= 0)
    {
        cerr << "Impossible de recuperer la texture." << endl;
        return {static_cast<int>(taille), 0, 0, 0, 0.0};
    }

    // Estime la surface transparente de la texture.
    // Chaque pixel RGBA occupe quatre octets.
    long long total = 1LL * largeur * hauteur;
    long long transparents = 0;

    for (long long i = 0; i < total; ++i)
    {
        unsigned char alpha = pixels[i * 4 + 3];

        if (alpha == 0)
            ++transparents;
    }

    double perdu = 100.0 * transparents / total;

    if (enregistrer)
    {
        auto image = nkentseu::NkImage::Wrap( pixels, largeur, hauteur, nkentseu::NkImagePixelFormat::NK_RGBA32 );

        image.SavePNG("atlas.png");
    }

    cout << "Taille : " << taille << '\n';
    cout << "Glyphes : " << font->glyphCount << '\n';
    cout << "Texture : " << largeur << " x " << hauteur << '\n';
    cout << "Surface transparente estimee : "
         << perdu << " %\n\n";

    return {
        static_cast<int>(taille),
        static_cast<int>(font->glyphCount),
        largeur,
        hauteur,
        perdu
    };
}

int main()
{
    ofstream compte("compte.txt");

    if (!compte)
    {
        cerr << "Impossible de creer compte.txt." << endl;
        return 1;
    }

    ResultatAtlas a18 = construireAtlas(18.f, true);

    ResultatAtlas a48 = construireAtlas(48.f, false);

    compte << "taille : " << a18.taille
           << ", glyphes : " << a18.glyphes
           << ", texture : " << a18.largeur << " " << a18.hauteur
           << ", perdu : " << static_cast<int>(a18.perdu + 0.5)
           << '\n';

    compte << "taille : " << a48.taille
           << ", glyphes : " << a48.glyphes
           << ", texture : " << a48.largeur << " " << a48.hauteur
           << ", perdu : " << static_cast<int>(a48.perdu + 0.5)
           << '\n';

    cout << "Fichiers atlas.png et compte.txt generes." << endl;

    return 0;
}