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
    nkentseu::NkWindowConfig cfg1;
    cfg1.title = "premiere fenetre";
    cfg1.width = 800;
    cfg1.height = 600;

    nkentseu::NkWindow window1;

    if (!window1.Create(cfg1))
    {
        logger.Error("Impossible de creer la fenetre 1");
        return -1;
    }
    nkentseu::NkWindowConfig cfg2;
    cfg2.title = "deuxieme fenetre";
    cfg2.width = 800;
    cfg2.height = 600;

    nkentseu::NkWindow window2;

    if (!window2.Create(cfg2))
    {
        logger.Error("Impossible de creer la fenetre 2");
        return -1;
    }
    bool running = true;

    while (running)
    {
        nkentseu::NkEvent *event = nullptr;

        while ((event = nkentseu::NkEvents().PollEvent()) != nullptr)
        {
         if (event->Is<nkentseu::NkWindowCloseEvent>())
            {
                running = false;
            }
            if (event->Is<nkentseu::NkMouseButtonPressEvent>())
            {
                auto *mouseEvent = static_cast<nkentseu::NkMouseButtonPressEvent *>(event);
                if (mouseEvent->IsLeft())
                {
                    auto windowId = event->GetWindowId();
                    logger.Info("le Clic est effectue dans la fenetre, ID = {0}", windowId);
                }
            }
        }
    }

    return 0;
}