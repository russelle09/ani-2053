
#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
#include <limits>

using namespace std;

struct Glyphe
{
    int avance;
    int x0, y0, x1, y1;
};

struct Rectangle
{
    int minx, miny, maxx, maxy;
};

int main()
{
    int G;
    cin >> G;

    unordered_map<char, Glyphe> glyphes;

    for (int i = 0; i < G; i++)
    {
        char c;
        Glyphe g;

        cin >> c >> g.avance
            >> g.x0 >> g.y0
            >> g.x1 >> g.y1;

        glyphes[c] = g;
    }

    int K;
    cin >> K;

    unordered_map<string, int> crenages;

    for (int i = 0; i < K; i++)
    {
        string couple;
        int k;

        cin >> couple >> k;
        crenages[couple] = k;
    }

    string texte;
    int ox, oy;

    cin >> texte >> ox >> oy;

    int x = ox;
    int absents = 0;
    bool premierRectangle = true;

   // Rectangle boite{0, 0, 0, 0};

    int minx = numeric_limits<int>::max();
    int miny = numeric_limits<int>::max();
    int maxx = numeric_limits<int>::lowest();
    int maxy = numeric_limits<int>::lowest();

    for (size_t i = 0; i < texte.size(); i++)
    {
        char c = texte[i];
        auto it = glyphes.find(c);

        if (it == glyphes.end())
        {
            cout << c << " ABSENT\n";
            absents++;
            continue;
        }

        const Glyphe& g = it->second;
        cout << c << " " << x << '\n';
        if (g.x1 > g.x0 && g.y1 > g.y0)
        {
            int gauche = x + g.x0;
            int haut = oy + g.y0;
            int droite = x + g.x1;
            int bas = oy + g.y1;

            minx = min(minx, gauche);
            miny = min(miny, haut);
            maxx = max(maxx, droite);
            maxy = max(maxy, bas);

            premierRectangle = false;
        }

        x += g.avance;
        if (i + 1 < texte.size())
        {
            char suivant = texte[i + 1];
            if (glyphes.find(suivant) != glyphes.end())
            {
                string couple;
                couple += c;
                couple += suivant;
                auto kc = crenages.find(couple);
                if (kc != crenages.end())
                {
                    x += kc->second;
                }
            }
        }
    }
    cout << "CURSEUR " << x << '\n';
    if (premierRectangle)
    {
        cout << "BOITE AUCUNE\n";
        cout << "MONTE 0\n";
        cout << "DESCEND 0\n";
        cout << "ECRAN RIEN\n";
    }
    else
    {
        cout << "BOITE "
             << minx << " "
             << miny << " "
             << maxx << " "
             << maxy << '\n';
        int monte = (miny < oy) ? oy - miny : 0;
        int descend = (maxy > oy) ? maxy - oy : 0;
        cout << "MONTE " << monte << '\n';
        cout << "DESCEND " << descend << '\n';

        if (maxy <= 0)
        {
            cout << "ECRAN HORS\n";
        }
        else if (miny < 0)
        {
            cout << "ECRAN COUPE\n";
        }
        else
        {
            cout << "ECRAN VISIBLE\n";
        }
    }

    cout << "ABSENTS " << absents << '\n';

    return 0;
}
