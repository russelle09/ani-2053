#include "NKWindow/NKMain.h"
#include "NKWindow/NKWindow.h"
#include "NKEvent/NkWindowEvent.h"
#include "NKEvent/NkMouseEvent.h"

NKENTSEU_DEFINE_APP_DATA(([]() {
    nkentseu::NkAppData d{};
    d.appName = "GOD";
    d.appVersion = "1.0.0";
    return d;
})());

int nkmain(const nkentseu::NkEntryState &state)
{
    nkentseu::NkWindowConfig cfg;

    cfg.title = "MK WINDOW, etape 02";
    cfg.width = 1280;
    cfg.height = 720;

    nkentseu::NkWindow window;

    if (!window.Create(cfg))
    {
        logger.Error("Failed to create window");
        return -1;
    }
    struct Zone
    {
        int x;  int y;  int largeur; int hauteur;
    };
    Zone zone1{0,   0,   1280, 100};
    Zone zone2{0,   100, 640, 150};
    Zone zone3{640, 100, 640, 150};
    Zone zone4{0,   250, 640, 150};
    Zone zone5{640, 250, 640, 150};
    Zone zone6{0,   400, 1280, 150};
    Zone zone7{0,   550, 1280, 170};

    bool running = true;

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
    }

    return 0;
}