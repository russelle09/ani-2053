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
    cfg.width = 1600;
    cfg.height= 950;

    cfg.minHeight = 50;
    cfg.minWidth = 100;

    //cfg.minimizable = false;
    //cfg.closable = true;
    //cfg.resizable = true;
    //cfg.maximizable = true;
   
    nkentseu::NkWindow window;                      //nkentseu::NKWindow window(cfg)
    if (!window.Create(cfg)){                     // if (!window.IsValid()){
        logger.Error("Failed to create window"); // nkentseu::NKLogError("Failed to create window");
        return -1;
    }
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
