//=============================================================================================================//
//===========================================SANS CAPTURE======================================================//
//=============================================================================================================//


#include "NKWindow/NKMain.h"
#include "NKWindow/NKWindow.h"
#include "NKEvent/NkMouseEvent.h"

NKENTSEU_DEFINE_APP_DATA(([]() {
    nkentseu::NkAppData d{};
    d.appName = "GOD";
    d.appVersion = "1.0.0";
    return d;
})());

int nkmain(const nkentseu::NkEntryState &state)
{
    nkentseu::NkWindowConfig cfg{};

    cfg.title = "testons les glisser sans capture et avec capture de mvmt de souris";
    cfg.width = 800;
    cfg.height = 600;
    
    nkentseu::NkWindow window;

    if (!window.Create(cfg))
    {
        logger.Error("echec lors de la création de la fenêtre");
        return -1;
    }

    bool glisser = false;

    while (true) {
        auto event = nkentseu::NkEvents().PollEvent();

        if (!event)
            continue;

        auto type = event->GetType();
        if (type == nkentseu::NkEventType::NK_MOUSE_BUTTON_PRESSED)
        {
            auto* mousePress = dynamic_cast<nkentseu::NkMouseButtonPressEvent*>(event);
            if (mousePress && mousePress->IsLeft())
            {
                glisser = true;                
            }
        }
        if (type == nkentseu::NkEventType::NK_MOUSE_MOVE)
        {
            auto* mouseMove = dynamic_cast<nkentseu::NkMouseMoveEvent*>(event);

            if (mouseMove && glisser) {
                logger.Info( "GLISSER : position ({}, {})",  mouseMove->GetX(), mouseMove->GetY());
            }
        }
        if (type == nkentseu::NkEventType::NK_MOUSE_CAPTURE_BEGIN)
        {
            logger.Info("CAPTURE SOURIS ACTIVEE");
        }

        if (type == nkentseu::NkEventType::NK_MOUSE_BUTTON_RELEASED)
        {
            auto* mouseRelease = dynamic_cast<nkentseu::NkMouseButtonReleaseEvent*>(event);

            if (mouseRelease && mouseRelease->IsLeft())
            {
                glisser = false;
                logger.Info(" FIN DU GLISSER");                 
            }
        }

        if (type == nkentseu::NkEventType::NK_MOUSE_CAPTURE_END) {
            logger.Info("CAPTURE SOURIS TERMINEE");
        }
        if (type == nkentseu::NkEventType::NK_WINDOW_CLOSE) {
            break; }
    }

    return 0;
}





//============================================================================================================//
//====================================== AVEC CAPTURE ========================================================//
//============================================================================================================//


#include "NKWindow/NKMain.h"
#include "NKWindow/NKWindow.h"
#include "NKEvent/NkMouseEvent.h"

NKENTSEU_DEFINE_APP_DATA(([]() {
    nkentseu::NkAppData d{};
    d.appName = "GOD";
    d.appVersion = "1.0.0";
    return d;
})());

int nkmain(const nkentseu::NkEntryState &state)
{
    nkentseu::NkWindowConfig cfg{};

    cfg.title = "testons les glisser avec capture de mvmt de souris";
    cfg.width = 800;
    cfg.height = 600;
    
    nkentseu::NkWindow window;

    if (!window.Create(cfg))
    {
        logger.Error("echec lors de la création de la fenêtre");
        return -1;
    }

    bool glisser = false;

    while (true) {
        auto event = nkentseu::NkEvents().PollEvent();

        if (!event)
            continue;

        auto type = event->GetType();
        if (type == nkentseu::NkEventType::NK_MOUSE_BUTTON_PRESSED)
        {
            auto* mousePress = dynamic_cast<nkentseu::NkMouseButtonPressEvent*>(event);
            if (mousePress && mousePress->IsLeft())
            {
                glisser = true;  
                window.CaptureMouse(event);              
            }
        }
        if (type == nkentseu::NkEventType::NK_MOUSE_MOVE)
        {
            auto* mouseMove = dynamic_cast<nkentseu::NkMouseMoveEvent*>(event);

            if (mouseMove && glisser) {
                logger.Info( "GLISSER : position ({}, {})",  mouseMove->GetX(), mouseMove->GetY());
            }
        }
        if (type == nkentseu::NkEventType::NK_MOUSE_CAPTURE_BEGIN)
        {
            logger.Info("CAPTURE SOURIS ACTIVEE");
        }

        if (type == nkentseu::NkEventType::NK_MOUSE_BUTTON_RELEASED)
        {
            auto* mouseRelease = dynamic_cast<nkentseu::NkMouseButtonReleaseEvent*>(event);

            if (mouseRelease && mouseRelease->IsLeft())
            {
                glisser = false;
                logger.Info(" LE GLISSER EST TERMINER"); 
                window.CaptureMouse(false);
               

                                
            }
        }

        if (type == nkentseu::NkEventType::NK_MOUSE_CAPTURE_END) {
            logger.Info("CAPTURE SOURIS TERMINEE");
        }
        if (type == nkentseu::NkEventType::NK_WINDOW_CLOSE) {
            break; }
    }

    return 0;
}













