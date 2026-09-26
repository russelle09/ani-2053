#include "NKWindow/NKMain.h"
#include "NKWindow/NKWindow.h"
#include "NKEvent/NkWindowEvent.h"

NKENTSEU_DEFINE_APP_DATA(([]() {
    nkentseu::NkAppData d{};
    d.appName = "GOD";
    d.appVersion = "1.0.0";
    return d;
})());

int nkmain(const nkentseu::NkEntryState &state)
{
    nkentseu::NkWindowConfig cfg;

    cfg.title = "MK WINDOW";
    cfg.width = 800;
    cfg.height = 600;

    cfg.minHeight = 50;
    cfg.minWidth = 100;

    cfg.resizable = true;

    nkentseu::NkWindow window;

    if (!window.Create(cfg))
    {
        logger.Error("Failed to create window");
        return -1;
    }

    bool running = true;

    // Taille de départ
    auto lastSize = window.GetSize();
    window.SetTitle(nkentseu::NkString::Fmt("MK WINDOW - {0} x {1}", lastSize.x, lastSize.y));


bool documentModifie = false;

auto mettreAJourTitre = [&]()
{
    auto taille = window.GetSize();

    window.SetTitle(nkentseu::NkString::Fmt(
        "MK WINDOW{0} - {1} x {2}",
        documentModifie ? "*" : "",
        taille.x,
        taille.y));
};

mettreAJourTitre();

    while (running)
    {
        nkentseu::NkEvent* event = nullptr;

        // Récupération des événements
        while ((event = nkentseu::NkEvents().PollEvent()) != nullptr)
        {
            if (event->Is<nkentseu::NkWindowCloseEvent>())
            {
                running = false;
            }
        }

        // Récupération de la taille actuelle
        auto size = window.GetSize();
        

        // Vérification d'un changement de taille
        if (size.x != lastSize.x || size.y != lastSize.y)
        {
            logger.Info("Nouvelle taille : {} x {}", size.x, size.y);
            window.SetTitle(nkentseu::NkString::Fmt("MK WINDOW -{0} x {1}", size.x, size.y));

            // On mémorise la nouvelle taille
            lastSize = size;
        }

        bool documentModifie = false;

auto mettreAJourTitre = [&]()
{
    auto taille = window.GetSize();
    window.SetTitle(nkentseu::NkString::Fmt(
        "MK WINDOW{0} - {1} x {2}",
        documentModifie ? "*" : "",
        taille.x,
        taille.y));
};

// À l'endroit où le document change :
documentModifie = true;
mettreAJourTitre();
    }

    return 0;
}