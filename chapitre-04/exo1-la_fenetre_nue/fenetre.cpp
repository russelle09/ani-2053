#include "NKWindow/NKMain.h"
#include "NKCanvas/App/NkCanvasApp.h"

using namespace nkentseu::renderer;

class MK_russelle : public NkCanvasApp{
    public:
     MK_russelle(){
        Config().title = "fenetre_nue" ;
        Config().width = 800;
        Config().height = 600;
        Config().clearColor=nkentseu::renderer::NkColor2D(100, 200, 25, 0);
    }
    bool OnInit () override{
        return 1;
    }
};
int nkmain(const nkentseu::NkEntryState &state){
    return NkCanvasApp::Run<MK_russelle>(state);
}