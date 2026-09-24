#include "NKWindow/NKMain.h"
#include "NKWindow/NKWindow.h"
//#include "NKEvent/NkWindowEvent.h"

NKENTSEU_DEFINE_APP_DATA(([]() {
    nkentseu::NkAppData d{};
    d.appName = "GOD";
    d.appVersion = "1.0.0";
    return d;
})());

int nkmain(const nkentseu::NkEntryState &state){ 
    nkentseu::NkWindowConfig cfg;
    cfg.title = "MK WINDOW";
    cfg.width = 160;
    cfg.height= 90;

    cfg.minHeight = 50;
    cfg.minWidth = 100;
   
    nkentseu::NkWindow window;                      
    if (!window.Create(cfg)){                     
        logger.Error("Failed to create window"); 
        return -1;
    }

    auto size = window.GetSize();
    auto displaySize = window.GetDisplaySize();
    auto scale = window.GetDpiScale();

   logger.Info("SIZE X = {}", size.x);
   logger.Info("SIZE Y = {}", size.y);

   logger.Info("DISPLAY X = {}", displaySize.x);
   logger.Info("DISPLAY Y = {}", displaySize.y);

   logger.Info("DPI SCALE = {}", scale);

    bool running = true ; 
    while (running){
        nkentseu::NkEvent* event = nullptr;
        while((event = nkentseu::NkEvents().PollEvent()) !=nullptr){
            // process events
            if(event ->Is<nkentseu::NkWindowCloseEvent>()){
                running=false;
            } 
        }
    }
    return 0;
    }


     //cfg.minimizable = false;
    //cfg.closable = true;
    //cfg.resizable = true;
    //cfg.maximizable = true;