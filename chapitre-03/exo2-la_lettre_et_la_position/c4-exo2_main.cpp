#include "NKWindow/NKMain.h"
#include "NKWindow/NKWindow.h"
#include "NKEvent/NkWindowEvent.h"
#include "NKEvent/NkKeyboardEvent.h"

NKENTSEU_DEFINE_APP_DATA(([]() {
    nkentseu::NkAppData d{};
    d.appName = "GOD";
    d.appVersion = "1.0.0";
    return d;
})());

int nkmain(const nkentseu::NkEntryState &state)
{
    nkentseu::NkWindowConfig cfg{};

   cfg.title = "GOD_Clavier";
    cfg.width = 600;
    cfg.height = 400;

    nkentseu::NkWindow window;

    if (!window.Create(cfg))
    {
        logger.Error("echec lors de la  creation de la fenetre.");
        return -1;
   }

   bool running = true;

    while (running)
    {
        auto event = nkentseu::NkEvents().PollEvent();

        if (event)
        {
            if (event->Is<nkentseu::NkKeyPressEvent>())
            {
                auto &keyEvent = static_cast<nkentseu::NkKeyPressEvent &>(*event);

                logger.Info("TOUCHE PRESSEE | Touche physique : {} | Code physique de la touche: {}",
 nkentseu::NkKeyToString(keyEvent.GetKey()),static_cast<int>(keyEvent.GetScancode())  );
            }
            if (event->Is<nkentseu::NkTextInputEvent>())
            {
                auto &textEvent = static_cast<nkentseu::NkTextInputEvent &>(*event);

                if (textEvent.IsPrintable())
                {
                    logger.Info("CARACTERE PRODUIT : {}", textEvent.GetUtf8() );
                }
            }
            if (event->Is<nkentseu::NkWindowCloseEvent>())
            {
                running = false;
            }
        }
    }

    return 0;
}