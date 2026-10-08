#include "NKWindow/NKMain.h"
#include "NKWindow/NKWindow.h"
#include "NKLogger/NkLog.h"

// NKCanvas
#include "NKCanvas/Core/NkContextDesc.h"
#include "NKCanvas/Core/NkGraphicsApi.h"
#include "NKCanvas/Renderer/Targets/NkRenderWindow.h"
#include "NKCanvas/Renderer/Core/NkRenderer2D.h"
#include "NKCanvas/App/NkCanvasApp.h"
#include "NKCanvas/Renderer/Resources/NkFont.h"
#include "NKCanvas/Renderer/Resources/NkSprite.h"
#include "NKCanvas/Renderer/Shapes/NkRectangleShape.h"

#include "NKFont/Embedded/NkFontEmbedded.h"
#include "NKImage/NKImage.h"

#include "NKMath/NKMath.h"
#include "NKMath/NkColor.h"
#include "NKTime/NkTime.h"
#include <filesystem>

NKENTSEU_DEFINE_APP_DATA(([]() {
    nkentseu::NkAppData d{};
    d.appName = "TD";
    d.appVersion = "1.0.0";
    return d;
})());

int nkmain(const nkentseu::NkEntryState &state) {
    nkentseu::NkWindowConfig config{};
    config.width = 1280;
    config.height = 800;
    config.title = "TD";

    nkentseu::NkWindow window;
    if (!window.Create(config)) {
        logger.Error("Failed to create window");
        return -1;
    }

    nkentseu::NkContextDesc contextDesc{};
    contextDesc.api = nkentseu::NkGraphicsApi::NK_GFX_API_OPENGL;

    nkentseu::renderer::NkRenderWindow renderWindow(window, contextDesc);
    if (!renderWindow.IsValid()) {
        logger.Error("Failed to create render window");
        return -2;
    }

    auto& eventSystem = nkentseu::NkEvents();
    bool running = true;
    
    nkentseu::NkImage img;
    nkentseu::NkImage img2;
    nkentseu::NkImage img3;
    nkentseu::NkImage img4;
    nkentseu::NkImage img5;

    std::string chemin1 = "C:/Users/Russelle/Pictures/img1.jpg";
    std::string chemin2 = "C:/Users/Russelle/Pictures/Screenshots/Capture d'écran 2026-10-07 205229.png";
    std::string chemin3 = "C:/Users/Russelle/Pictures/Screenshots/Capture d'écran 2026-10-03 160334.png";
    std::string chemin4 = "C:/Users/Russelle/Pictures/Screenshots/Capture d'écran 2026-09-28 174836.png";
    std::string chemin5 = "C:/Users/Russelle/Pictures/Screenshots/Capture d'écran 2026-10-06 133355.png";

    if (!img.Load("C:/Users/Russelle/Pictures/img1.jpg")) {
        logger.Error("Chargement de l\'image1 echoue");
    }
     if (!img2.Load("C:/Users/Russelle/Pictures/Screenshots/Capture d'écran 2026-10-07 205229.png")) {
        logger.Error("Chargement de l\'image2 echoue");
    }
     if (!img3.Load("C:/Users/Russelle/Pictures/Screenshots/Capture d'écran 2026-10-03 160334.png")) {
        logger.Error("Chargement de l\'image3 echoue");
    }
     if (!img4.Load("C:/Users/Russelle/Pictures/Screenshots/Capture d'écran 2026-09-28 174836.png")) {
        logger.Error("Chargement de l\'image4 echoue");
    }
     if (!img5.Load("C:/Users/Russelle/Pictures/Screenshots/Capture d'écran 2026-10-06 133355.png")) {
        logger.Error("Chargement de l\'image5 echoue");
    }
    std::uintmax_t tailleFichier = std::filesystem::file_size(chemin1);
    std::uintmax_t tailleFichier2 = std::filesystem::file_size(chemin2);
    std::uintmax_t tailleFichier3= std::filesystem::file_size(chemin3);
    std::uintmax_t tailleFichier4 = std::filesystem::file_size(chemin4);
    std::uintmax_t tailleFichier5 = std::filesystem::file_size(chemin5);


    logger.Info("Taille du fichier : {} octets", tailleFichier);
    logger.Info("Taille du fichier : {} octets", tailleFichier2);
    logger.Info("Taille du fichier : {} octets", tailleFichier3);
    logger.Info("Taille du fichier : {} octets", tailleFichier4);
    logger.Info("Taille du fichier : {} octets", tailleFichier5);

     int largeur = img.Width();
     int largeur2 = img2.Width();
     int largeur3 = img3.Width();
     int largeur4 = img4.Width();
     int largeur5 = img5.Width();

     int hauteur = img.Height();
     int hauteur2 = img2.Height();
     int hauteur3 = img3.Height();
     int hauteur4 = img4.Height();
     int hauteur5 = img5.Height();

    nkentseu::uint8* pixels = img.Pixels();
    nkentseu::uint8* pixels2 = img2.Pixels();
    nkentseu::uint8* pixels3 = img3.Pixels();
    nkentseu::uint8* pixels4 = img4.Pixels();
    nkentseu::uint8* pixels5 = img5.Pixels();

   std::size_t memoire = largeur * hauteur * 4;
   logger.Info("Mémoire utilisée par l'image1 : {} octets", memoire);
    std::size_t memoire2 = largeur2 * hauteur2 * 4;
    logger.Info("Mémoire utilisée par l'image2 : {} octets", memoire2);
    std::size_t memoire3 = largeur3 * hauteur3 * 4;
    logger.Info("Mémoire utilisée par l'image3 : {} octets", memoire3);
    std::size_t memoire4 = largeur4 * hauteur4 * 4;
    logger.Info("Mémoire utilisée par l'image4 : {} octets", memoire4);
    std::size_t memoire5 = largeur5 * hauteur5 * 4;
    logger.Info("Mémoire utilisée par l'image5 : {} octets", memoire5);
    //img.Save("bureau/divers/fichier.png");
    
    //nkentseu::NkImage resize = img.Resize(0, 0, nkentseu::NkResizeFilter::NK_NEAREST);
    
    nkentseu::NkImage morceau = img.Crop(0, 0, largeur, hauteur);
    nkentseu::NkImage grise = img.Convert(nkentseu::NkImagePixelFormat::NK_GRAY8);
    img.FlipVertical();
    //img.FlipHorizontal();
     //img.PremultiplyAlpha();
    
    nkentseu::renderer::NkTexture texture;
    nkentseu::renderer::NkTexture texture2;
    nkentseu::renderer::NkTexture texture3;
    nkentseu::renderer::NkTexture texture4;
    nkentseu::renderer::NkTexture texture5;


    
    if (!texture.LoadFromImage(*renderWindow.GetRenderer(), img)) {
        logger.Error("Erreur chargement de la texture");
    }
    
    if (!texture2.LoadFromImage(*renderWindow.GetRenderer(), img2)) {
        logger.Error("Erreur chargement de la texture2");
    }
    if (!texture3.LoadFromImage(*renderWindow.GetRenderer(), img3)) {
        logger.Error("Erreur chargement de la texture3");
    }
    if (!texture4.LoadFromImage(*renderWindow.GetRenderer(), img4)) {
        logger.Error("Erreur chargement de la texture4");
    }
    if (!texture5.LoadFromImage(*renderWindow.GetRenderer(), img5)) {
        logger.Error("Erreur chargement de la texture5");
    }

    nkentseu::renderer::NkRectangleShape rect(nkentseu::math::NkVec2f(img.Width(), img.Height()));
    rect.SetTexture(&texture);
    nkentseu::renderer::NkRectangleShape rect2(nkentseu::math::NkVec2f(img2.Width(), img2.Height()));
    rect2.SetTexture(&texture2);
    nkentseu::renderer::NkRectangleShape rect3(nkentseu::math::NkVec2f(img3.Width(), img3.Height()));
    rect3.SetTexture(&texture3);
    nkentseu::renderer::NkRectangleShape rect4(nkentseu::math::NkVec2f(img4.Width(), img4.Height()));
    rect4.SetTexture(&texture4);
    nkentseu::renderer::NkRectangleShape rect5(nkentseu::math::NkVec2f(img5.Width(), img5.Height()));
    rect5.SetTexture(&texture5);

    while (running) {
        nkentseu::NkEvent* event;
        while (eventSystem.PollEvent(event)) {
            if (event->Is<nkentseu::NkWindowCloseEvent>()) {
                running = false;
            }
        }
        renderWindow.Clear(nkentseu::renderer::NkColor2D::White);
        auto& r2d = renderWindow.GetRenderer2D();
        
        r2d.Draw(rect);
        r2d.Draw(rect2);
        r2d.Draw(rect3);
        r2d.Draw(rect4);
        r2d.Draw(rect5);
        // r2d.Draw(text);
        
        renderWindow.Display();
    }

    return 0;
}