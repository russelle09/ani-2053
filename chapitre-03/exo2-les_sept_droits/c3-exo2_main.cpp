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

    {
        nkentseu::NkWindowConfig cfg;
        cfg.title = "Fenetre 1 - Minimizable FALSE";
        cfg.width = 800;
        cfg.height = 600;
        cfg.minimizable = false;
       
        nkentseu::NkWindow window;

        if (!window.Create(cfg)) {
            logger.Error("Impossible de creer la fenetre 1");
            return -1;
        }

        bool running = true;

        while (running) {
            nkentseu::NkEvent* event = nullptr;

            while ((event = nkentseu::NkEvents().PollEvent()) != nullptr) {
                if (event->Is<nkentseu::NkWindowCloseEvent>()) {
                    running = false;
                }
            }
        }
    }

    {
        nkentseu::NkWindowConfig cfg;
        cfg.title = "Fenetre 2 - Resizable FALSE";
        cfg.width = 800;
        cfg.height = 600;
        cfg.resizable = false;
       
        nkentseu::NkWindow window;

        if (!window.Create(cfg)) {
            logger.Error("Impossible de creer la fenetre 2");
            return -1;
        }

        bool running = true;

        while (running) {
            nkentseu::NkEvent* event = nullptr;

            while ((event = nkentseu::NkEvents().PollEvent()) != nullptr) {
                if (event->Is<nkentseu::NkWindowCloseEvent>()) {
                    running = false;
                }
            }
        }
    }

    {
        nkentseu::NkWindowConfig cfg;
        cfg.title = "Fenetre 3 - Movable FALSE";
        cfg.width = 800;
        cfg.height = 600;
        cfg.movable = false;
        
        nkentseu::NkWindow window;

        if (!window.Create(cfg)) {
            logger.Error("Impossible de creer la fenetre 3");
            return -1;
        }

        bool running = true;

        while (running) {
            nkentseu::NkEvent* event = nullptr;

            while ((event = nkentseu::NkEvents().PollEvent()) != nullptr) {
                if (event->Is<nkentseu::NkWindowCloseEvent>()) {
                    running = false;
                }
            }
        }
    }

    {
        nkentseu::NkWindowConfig cfg;
        cfg.title = "Fenetre 4 - Closable FALSE";
        cfg.width = 800;
        cfg.height = 600;
        cfg.closable = false;
       
        nkentseu::NkWindow window;

        if (!window.Create(cfg)) {
            logger.Error("Impossible de creer la fenetre 4");
            return -1;
        }

        bool running = true;

        while (running) {
            nkentseu::NkEvent* event = nullptr;

            while ((event = nkentseu::NkEvents().PollEvent()) != nullptr) {
                if (event->Is<nkentseu::NkWindowCloseEvent>()) {
                    running = false;
                }
            }
        }
    }

     {
        nkentseu::NkWindowConfig cfg;
        cfg.title = "Fenetre 5 - MAXIMIZABLE FALSE";
        cfg.width = 800;
        cfg.height = 600;
        cfg.maximizable = false;
       
        nkentseu::NkWindow window;

        if (!window.Create(cfg)) {
            logger.Error("Impossible de creer la fenetre 5");
            return -1;
        }

        bool running = true;

        while (running) {
            nkentseu::NkEvent* event = nullptr;

            while ((event = nkentseu::NkEvents().PollEvent()) != nullptr) {
                if (event->Is<nkentseu::NkWindowCloseEvent>()) {
                    running = false;
                }
            }
        }
    }

     {
        nkentseu::NkWindowConfig cfg;
        cfg.title = "Fenetre 6 - centered FALSE";
        cfg.width = 800;
        cfg.height = 600;
        cfg.centered = false;
        
        nkentseu::NkWindow window;

        if (!window.Create(cfg)) {
            logger.Error("Impossible de creer la fenetre 6");
            return -1;
        }

        bool running = true;

        while (running) {
            nkentseu::NkEvent* event = nullptr;

            while ((event = nkentseu::NkEvents().PollEvent()) != nullptr) {
                if (event->Is<nkentseu::NkWindowCloseEvent>()) {
                    running = false;
                }
            }
        }
    }

    {
        nkentseu::NkWindowConfig cfg;
        cfg.title = "Fenetre 7 - FRAME FALSE";
        cfg.width = 800;
        cfg.height = 600;
        cfg.frame = false;

        nkentseu::NkWindow window;

        if (!window.Create(cfg)) {
            logger.Error("Impossible de creer la fenetre 7");
            return -1;
        }

        bool running = true;

        while (running) {
            nkentseu::NkEvent* event = nullptr;

            while ((event = nkentseu::NkEvents().PollEvent()) != nullptr) {
                if (event->Is<nkentseu::NkWindowCloseEvent>()) {
                    running = false;
                }
            }
        }
    }

    return 0;
}


