le but de cet exercice est de creer une fenetre qui s'ouvre et se ferme proprement, compter son nombre de ligne et les retrouver dans le chapitre. apres avoir compiler et executer mon code, j'ai obtenu:

PS C:\Users\Russelle\Documents\monprojet\firstwindow> jenga build

╔══════════════════════════════════════════════════════════════════╗
║                                                                  ║
║                ██╗███████╗███╗   ██╗ ██████╗  █████╗             ║
║                ██║██╔════╝████╗  ██║██╔════╝ ██╔══██╗            ║
║                ██║█████╗  ██╔██╗ ██║██║  ███╗███████║            ║
║           ██   ██║██╔══╝  ██║╚██╗██║██║   ██║██╔══██║            ║
║           ╚█████╔╝███████╗██║ ╚████║╚██████╔╝██║  ██║            ║
║            ╚════╝ ╚══════╝╚═╝  ╚═══╝ ╚═════╝ ╚═╝  ╚═╝            ║
║                                                                  ║
║             Multi-platform C/C++ Build System v2.8.1             ║
║                                                                  ║
╚══════════════════════════════════════════════════════════════════╝

Loading workspace...

Configuration: Debug
Target:        Windows x86_64
Toolchain:     clang-mingw

Build Order (1 projects):
  1. holly [CONSOLE_APP]


╔══════════════════════════════════════════════════════════════════════════════════════════════╗
║  Project: holly                                                           Kind: CONSOLE_APP  ║
╚══════════════════════════════════════════════════════════════════════════════════════════════╝

ℹ Found 1 source file(s)
✓   [1/1] Compiled: main.cpp
ℹ Linking...
✓ Built: Build\Bin\Debug-Windows\holly\holly.exe

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 2.73s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

════════════════════════════════════════════════════════════════════════════════
                                BUILD COMPLETED                                 
════════════════════════════════════════════════════════════════════════════════
Projects Built:  1/1
Time:           2.73s
Status:         ✓ SUCCESS
════════════════════════════════════════════════════════════════════════════════

PS C:\Users\Russelle\Documents\monprojet\firstwindow> jenga run  

╔══════════════════════════════════════════════════════════════════╗
║                                                                  ║
║                ██╗███████╗███╗   ██╗ ██████╗  █████╗             ║
║                ██║██╔════╝████╗  ██║██╔════╝ ██╔══██╗            ║
║                ██║█████╗  ██╔██╗ ██║██║  ███╗███████║            ║
║           ██   ██║██╔══╝  ██║╚██╗██║██║   ██║██╔══██║            ║
║           ╚█████╔╝███████╗██║ ╚████║╚██████╔╝██║  ██║            ║
║            ╚════╝ ╚══════╝╚═╝  ╚═══╝ ╚═════╝ ╚═╝  ╚═╝            ║
║                                                                  ║
║             Multi-platform C/C++ Build System v2.8.1             ║
║                                                                  ║
╚══════════════════════════════════════════════════════════════════╝


━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
  ▶  EXECUTION  —  holly.exe
     C:\Users\Russelle\Documents\monprojet\firstwindow\Build\Bin\Debug-Windows\holly\holly.exe
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━


━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
  ◀  FIN D'EXECUTION  —  termine normalement  (15.65s)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
# comptons le nombre de ligne 
📊 Counting lines of code...
🔍 Excluding: None
✔ .jenga-typings\jengaconfig.py — 4 lines
✔ holly\src\main.cpp — 34 lines

✅ Finished!
📄 Total Lines of Code: 38
 
 le code a 38 lignes

 # retrouvons chacunes d'elles dans le chapitre

 DANS LE CHAPITRE                                                    MON CODE

 #include "NKWindow/NKWindow.h"                                     #include "NKWindow/NKMain.h"

#include "NKWindow/NKMain.h"                                        #include "NKWindow/NKWindow.h"

int nkmain(const NkEntryState &state) {                            int nkmain(const nkentseu::NkEntryState &state){

NkWindowConfig cfg;                                                nkentseu::NkWindowConfig cfg;    
   
cfg.title  = "Ma fenetre";                                           cfg.title = "MK WINDOW";

cfg.width  = 1280;                                                   cfg.width = 1600;

cfg.height = 720;
                                                                     cfg.height= 950;

if (!window.IsOpen()) {                                           if (!window.Create(cfg)){                       

logger.Error("[app] creation fenetre echouee");                   logger.Error("Failed to create window");

return -1;                                                                    return -1;

while (window.IsOpen()) { }                            while((event = nkentseu::NkEvents().PollEvent()) !=nullptr)