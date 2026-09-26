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
    nkentseu::NkString documentName = "ani-2053";

    bool documentModifie = false;

    auto lastSize = window.GetSize();
    auto mettreAJourTitre = [&]()
    {
        auto taille = window.GetSize();
        window.SetTitle(nkentseu::NkString::Fmt(
            "MK WINDOW - {0}{1} - {2} x {3}",
            documentName,
            documentModifie ? "*" : "",
            taille.x,
            taille.y
        ));
    };
    mettreAJourTitre();

    while (running)
    {
        nkentseu::NkEvent* event = nullptr;

        while ((event = nkentseu::NkEvents().PollEvent()) != nullptr)
        {
            if (event->Is<nkentseu::NkWindowCloseEvent>())
            {
                running = false;
            }
        }
        auto size = window.GetSize();

        // Si la fenêtre a été redimensionnée
        if (size.x != lastSize.x || size.y != lastSize.y)
        {
            logger.Info(
                "Nouvelle taille : {} x {}",
                size.x,
                size.y
            );
            lastSize = size;
            mettreAJourTitre();
        }
    }
    return 0;
}