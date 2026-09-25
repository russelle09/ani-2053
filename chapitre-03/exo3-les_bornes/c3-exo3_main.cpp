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
    cfg.width = 176;
    cfg.height = 73;

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

            // On mémorise la nouvelle taille
            lastSize = size;
        }
    }

    return 0;
}