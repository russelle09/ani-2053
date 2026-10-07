#include "NKWindow/NKMain.h"
#include "NKWindow/NKWindow.h"
#include "NKLogger/NkLog.h"
#include "NKWindow/Core/NkWindow.h"
#include "NKCanvas/Renderer/Targets/NkRenderWindow.h"
#include "NKCanvas/Core/NkContextDesc.h"
#include "NKCanvas/Core/NkGraphicsApi.h"
#include "NKCanvas/App/NkCanvasApp.h"
#include "NKCanvas/Renderer/Core/NkRenderer2D.h"
#include "NKCanvas/App/NkCanvasApp.h"
#include "NKMath/NKMath.h"
#include "NKMath/NkColor.h"
#include "NKTime/NkTime.h"

NKENTSEU_DEFINE_APP_DATA(([]() {
    nkentseu::NkAppData d{};
    d.appName = "TD";
    d.appVersion = "1.0.0";
    return d;
})());

class MK : public nkentseu::renderer::NkCanvasApp{
    private:
    nkentseu::math::NkRect2f tete{100,100,50,50};
    nkentseu::float32 speed = 50;

    nkentseu::float32 xspeed = 0;
    nkentseu::float32 yspeed = 0;
    nkentseu::float32 t = 0.f;
    nkentseu::float32 deltaTime = 0.f;


    public:
     MK() {
        Config().title ="MK";
     }
     bool OnInit() override{
     return true;
     }
     void OnUpdate(nkentseu::float32 deltaTime ) override{
        this->deltaTime = deltaTime;

         if (this->deltaTime > 0.1f)
    
            this->deltaTime = 1.0f / 60.f;
            t += this->deltaTime;

     }
     void OnRender (nkentseu::renderer::NkRenderWindow &target) override {
        tete.x += xspeed;
        tete.y += yspeed;

        nkentseu::renderer::NkRenderer2D &r2d= target.GetRenderer2D();
        r2d.DrawFilledRect(tete, nkentseu::renderer::NkColor2D{52, 84 , 150 , 255});

     }
     bool OnEvent (const nkentseu::NkEvent &event) override {
        if (auto* keyEvent = event.As< nkentseu::NkKeyPressEvent>())
            {
                if (keyEvent->GetKey() == nkentseu::NkKey::NK_UP )
                {
                    tete.y -= speed * deltaTime;
                }
                if (keyEvent->GetKey() == nkentseu::NkKey::NK_DOWN )
                {
                    tete.y += speed * deltaTime;
                }
                if (keyEvent->GetKey() == nkentseu::NkKey::NK_LEFT )
                {
                    tete.x -= speed * deltaTime;
                }
                if (keyEvent->GetKey() == nkentseu::NkKey::NK_RIGHT )
                {
                    tete.x += speed * deltaTime;
                }
                
            }
            if (auto* keyEvent = event.As< nkentseu::NkKeyReleaseEvent>())
            {
                if (keyEvent->GetKey() == nkentseu::NkKey::NK_UP )
                {
                    yspeed = 0;
                }
                if (keyEvent->GetKey() == nkentseu::NkKey::NK_DOWN )
                {
                    yspeed =0;
                }
                if (keyEvent->GetKey() == nkentseu::NkKey::NK_LEFT )
                {
                    xspeed =0;
                }
                if (keyEvent->GetKey() == nkentseu::NkKey::NK_RIGHT )
                {
                    xspeed = 0;
                }
                
            }
     return 0;   
     }

};

int nkmain(const nkentseu::NkEntryState &state){
 
  return nkentseu::renderer::NkCanvasApp::Run<MK>(state);  
}


