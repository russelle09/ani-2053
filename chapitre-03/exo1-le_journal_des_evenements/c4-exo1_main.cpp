#include "NKWindow/NKMain.h"
#include "NKWindow/NKWindow.h"
#include "NKEvent/NkEvent.h"
#include "NKEvent/NkWindowEvent.h"
#include <chrono>

NKENTSEU_DEFINE_APP_DATA(([]() {
    nkentseu::NkAppData d{};
    d.appName = "GOD";
    d.appVersion = "1.0.0";
    return d;
})());

int nkmain(const nkentseu::NkEntryState &state)
{
    nkentseu::NkWindowConfig cfg{};

    cfg.title = "MK Window ";
    cfg.width = 800;
    cfg.height = 600;
    cfg.resizable = true;

    nkentseu::NkWindow window;

    if (!window.Create(cfg)) {
        logger.Error("Impossible de creer la fenetre");
        return -1;
    }

    bool running = true;
    int nombreEvenements = 0;
    auto debut = std::chrono::steady_clock::now();

    while (running)
    {
        auto event = nkentseu::NkEvents().PollEvent();

        if (event)
        {
            nombreEvenements++;
            auto categorie = event->GetCategory();
            auto type = event->GetType();
            auto categorieTexte = nkentseu::NkEventCategory::ToString(categorie);
            auto typeTexte = nkentseu::NkEventType::ToString(type);

            logger.Info( "Evenement recu : categorie = {}, type = {}", categorieTexte, typeTexte);
            if (type == nkentseu::NkEventType::NK_WINDOW_CLOSE) {
                running = false; }
        }
        auto maintenant = std::chrono::steady_clock::now();
        auto duree = std::chrono::duration_cast<std::chrono::seconds>( maintenant - debut);

        if (duree.count() >= 1) {logger.Info("Nombre d'evenements recus en 1 seconde : {}", nombreEvenements );
          nombreEvenements = 0;
            debut = maintenant;
        }
    }
    return 0;
}