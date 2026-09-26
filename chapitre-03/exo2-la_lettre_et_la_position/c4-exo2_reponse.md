# pour cet esercice il etait question pour moi d'afficher pour chaque lettre pressee son code physique et sa lettre puis changer sa disposition physique dans le systeme et recommencer. 

pour cela j'ai utiliser les evenements claviers "NKKeypressEvent pour determiner si la touche a ete pressee et recuperer le caractere associe et son code physique puis, j'ai changer la disposition des touches dans mon systeme. vici le resultat du terminale.

# avec le clavier "QWERTY"

PS C:\Users\Russelle\Desktop\ani-2053\chapitre-03\exo2-la_lettre_et_la_position>  jenga build

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
│  ✓ Build Successful                                                             Time: 3.08s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

════════════════════════════════════════════════════════════════════════════════
                                BUILD COMPLETED                                 
════════════════════════════════════════════════════════════════════════════════
Projects Built:  1/1
Time:           3.08s
Status:         ✓ SUCCESS
════════════════════════════════════════════════════════════════════════════════

PS C:\Users\Russelle\Desktop\ani-2053\chapitre-03\exo2-la_lettre_et_la_position>  jenga run  

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
     C:\Users\Russelle\Desktop\firstwindow\Build\Bin\Debug-Windows\holly\holly.exe
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

[2026-09-26 17:53:48.238] [INF] [default] [main.cpp:41 in nkmain] -> TOUCHE PRESSEE | Touche physique : NK_W | Code physique de la touche: NK_W
[2026-09-26 17:53:48.238] [INF] [default] [main.cpp:50 in nkmain] -> CARACTERE PRODUIT : w
[2026-09-26 17:54:01.260] [INF] [default] [main.cpp:41 in nkmain] -> TOUCHE PRESSEE | Touche physique : NK_R | Code physique de la touche: NK_R
[2026-09-26 17:54:01.260] [INF] [default] [main.cpp:50 in nkmain] -> CARACTERE PRODUIT : r
[2026-09-26 17:54:03.076] [INF] [default] [main.cpp:41 in nkmain] -> TOUCHE PRESSEE | Touche physique : NK_S | Code physique de la touche: NK_S
[2026-09-26 17:54:03.076] [INF] [default] [main.cpp:50 in nkmain] -> CARACTERE PRODUIT : s
[2026-09-26 17:54:06.703] [INF] [default] [main.cpp:41 in nkmain] -> TOUCHE PRESSEE | Touche physique : NK_R | Code physique de la touche: NK_R
[2026-09-26 17:54:06.703] [INF] [default] [main.cpp:50 in nkmain] -> CARACTERE PRODUIT : r

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
  ◀  FIN D'EXECUTION  —  termine normalement  (44.61s)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

# avec le clavier AZERTY

PS C:\Users\Russelle\Desktop\ani-2053\chapitre-03\exo2-la_lettre_et_la_position>  jenga build

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
✓ All files up to date

┌──────────────────────────────────────────────────────────────────────────────────────────────┐
│  ✓ Build Successful                                                             Time: 0.06s  │
└──────────────────────────────────────────────────────────────────────────────────────────────┘

════════════════════════════════════════════════════════════════════════════════
                                BUILD COMPLETED                                 
════════════════════════════════════════════════════════════════════════════════
Projects Built:  1/1
Time:           0.06s
Status:         ✓ SUCCESS
════════════════════════════════════════════════════════════════════════════════

PS C:\Users\Russelle\Desktop\ani-2053\chapitre-03\exo2-la_lettre_et_la_position>  jenga run  

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
     C:\Users\Russelle\Desktop\firstwindow\Build\Bin\Debug-Windows\holly\holly.exe
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

[2026-09-26 17:54:55.495] [INF] [default] [main.cpp:41 in nkmain] -> TOUCHE PRESSEE | Touche physique : NK_R | Code physique de la touche: NK_R
[2026-09-26 17:54:55.496] [INF] [default] [main.cpp:50 in nkmain] -> CARACTERE PRODUIT : r
[2026-09-26 17:55:30.406] [INF] [default] [main.cpp:41 in nkmain] -> TOUCHE PRESSEE | Touche physique : NK_W | Code physique de la touche: NK_W
[2026-09-26 17:55:30.406] [INF] [default] [main.cpp:50 in nkmain] -> CARACTERE PRODUIT : z
[2026-09-26 17:56:00.622] [INF] [default] [main.cpp:41 in nkmain] -> TOUCHE PRESSEE | Touche physique : NK_S | Code physique de la touche: NK_S
[2026-09-26 17:56:00.622] [INF] [default] [main.cpp:50 in nkmain] -> CARACTERE PRODUIT : s

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
  ◀  FIN D'EXECUTION  —  termine normalement  (101.17s)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

 # ce que je constate

je constate que lorsque j'appuie la touche "w " sur un clavier qwerty, son code physique est "NK_W" et sur un clavier AZERTY cette disposition physique a le meme code physique que sur un clavier qwerty. donc ce que change c'est le caractere produit et pas le code physique.