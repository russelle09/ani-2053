#include "NKWindow/NKMain.h"
#include "NKWindow/NKWindow.h"
#include "NKLogger/NkLog.h"
#include "NKWindow/Core/NkWindow.h"
#include "NKCanvas/Renderer/Targets/NkRenderWindow.h"
#include "NKCanvas/Core/NkContextDesc.h"
#include "NKCanvas/Core/NkGraphicsApi.h"
#include "NKCanvas/App/NkCanvasApp.h"
#include "NKCanvas/Renderer/Core/NkRenderer2D.h"
#include "NKMath/NkMath.h"
#include "NKMath/NkColor.h"
#include "NKTime/NkTime.h"

NKENTSEU_DEFINE_APP_DATA(([]() {
    nkentseu::NkAppData d{};
    d.appName = "TD";
    d.appVersion = "1.0.0";
    return d;
})());

int nkmain(const nkentseu::NkEntryState &state){
    nkentseu::NkWindowConfig config{};
    config.title= state.appName;
    config.width=800;
    config.height=600;

    nkentseu::NkWindow window;
    if (!window.Create(config))
    {
        logger.Error("failed to create window");
        return 1;
    }
    nkentseu::NkContextDesc contextDesc;
    contextDesc.api= nkentseu::NkGraphicsApi::NK_GFX_API_OPENGL;
    nkentseu::renderer::NkRenderWindow renderWindow(window, contextDesc);

    if(!renderWindow.IsValid())
    {
        logger.Error("failed to create render window");
        return 2;
    }

    bool running = true;
    auto &eventSystem = nkentseu::NkEvents();
    nkentseu::NkClock clock;
    nkentseu::float32 t = 0.f;
    nkentseu::math::NkRect2f tete{100, 100 , 50, 50};
    nkentseu::float32 speed = 50 ;


    while (running)
    {
        nkentseu::float32 dt = clock.Tick().delta;
        if (dt > 0.1f)
        {
            dt = 1.0f / 60.f;
            t += dt;
        }
        
        nkentseu::NkEvent *event;
        while (eventSystem.PollEvent(event))
        {
            if (event->Is<nkentseu::NkWindowCloseEvent>())
            {
                running = false;
            }
            if (auto* keyEvent = event->As< nkentseu::NkKeyPressEvent>())
            {
               // const nkentseu::NkKeyPressEvent &keyEvent = event->As< nkentseu::NkKeyPressEvent();
                if (keyEvent->GetKey() == nkentseu::NkKey::NK_UP )
                {
                    tete.y -= speed * dt;
                }
                if (keyEvent->GetKey() == nkentseu::NkKey::NK_DOWN )
                {
                    tete.y += speed * dt;
                }
                if (keyEvent->GetKey() == nkentseu::NkKey::NK_LEFT )
                {
                    tete.x -= speed * dt;
                }
                if (keyEvent->GetKey() == nkentseu::NkKey::NK_RIGHT )
                {
                    tete.x += speed * dt;
                }
                
            }
            
        }
        renderWindow.Clear(nkentseu::renderer::NkColor2D(50, 50, 50, 255));
        nkentseu::renderer::NkRenderer2D &r2d= renderWindow.GetRenderer2D();
        r2d.DrawFilledRect(tete, nkentseu::renderer::NkColor2D{52, 84 , 150 , 255});
        renderWindow.Display();
    }
    
    
  return 0;  
}