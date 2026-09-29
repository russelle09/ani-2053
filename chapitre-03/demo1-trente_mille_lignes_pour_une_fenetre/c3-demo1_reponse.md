# Dans cette demonstration, il est question pour nous de compter le nombres de fichier du module et leur nombre de lignes du module et les commandes qui m'ont servis. Ensuite, lister les backends de plateforme que je vais trouver. Enfin, choisir un appel de l'interface publique et le suivre sans deux backend

Puis répondez : qu'est-ce qui est identique entre les deux, et qu'est-ce qui change ? Ce que le module absorbe, c'est exactement la différence que vous venez de lire. Nommez-la en trois phrases.

# nombre de fichier et de ligne:

pour avoir le nombre de fichier de mon module NKwindow, j'ai utiliser la commande "find . -type f | wc -l" (sur Git Bash) et quant au nombre de ligne, j'ai fait usage de la commande "find . -type f -print0 | xargs -0 wc -l" (sur Git Bash). il en ressort donc que mon module contient 127 fichiers et 35872 lignes de code voici la sortie du terminale: 

Russelle@DESKTOP-4JBL3UT MINGW64 ~/Desktop/NKentseu/kernel/runtime/nkwindow (etude)
$ find . -type f | wc -l
127

Russelle@DESKTOP-4JBL3UT MINGW64 ~/Desktop/NKentseu/kernel/runtime/nkwindow (etude)
$ find . -type f -print0 | xargs -0 wc -l
    513 ./docs.md
    288 ./NKWindow.jenga
      5 ./pch/pch.cpp
     16 ./pch/pch.h
    462 ./ROADMAP.md
    225 ./src/NKWindow/Core/EntryAbility.ts
   1509 ./src/NKWindow/Core/NkContext.cpp
    188 ./src/NKWindow/Core/NkContext.h
    516 ./src/NKWindow/Core/NkDialogs.cpp
     89 ./src/NKWindow/Core/NkDialogs.h
    311 ./src/NKWindow/Core/NkEntry.h
     43 ./src/NKWindow/Core/NkEvent.h
    548 ./src/NKWindow/Core/NkEventSystem.h
    322 ./src/NKWindow/Core/NkLauncher.cpp
     83 ./src/NKWindow/Core/NkLauncher.h
     73 ./src/NKWindow/Core/NkMain.h
    219 ./src/NKWindow/Core/NkSurface.h
    108 ./src/NKWindow/Core/NkSurfaceHint.h
     76 ./src/NKWindow/Core/NkTypes.h
    226 ./src/NKWindow/Core/NkWESystem.cpp
    211 ./src/NKWindow/Core/NkWESystem.h
    366 ./src/NKWindow/Core/NkWindow.h
     37 ./src/NKWindow/Core/NkWindowClipboard.cpp
     52 ./src/NKWindow/Core/NkWindowClipboardImage.cpp
    134 ./src/NKWindow/Core/NkWindowConfig.h
     62 ./src/NKWindow/Core/NkWindowCursor.cpp
    131 ./src/NKWindow/EntryPoints/NkAndroid.h
     29 ./src/NKWindow/EntryPoints/NkAppleMobile.h
     74 ./src/NKWindow/EntryPoints/NkAppleMobileMain.mm
     27 ./src/NKWindow/EntryPoints/NkCocoa.h
    102 ./src/NKWindow/EntryPoints/NkCocoaMain.mm
     39 ./src/NKWindow/EntryPoints/NkEmscripten.h
    564 ./src/NKWindow/EntryPoints/NkHarmonyOS.h
    310 ./src/NKWindow/EntryPoints/NkMetalEntryPoint.mm
     39 ./src/NKWindow/EntryPoints/NkNoob.h
     92 ./src/NKWindow/EntryPoints/NkUikit.h
    178 ./src/NKWindow/EntryPoints/NkUWP.h
     83 ./src/NKWindow/EntryPoints/NkWatchOS.h
    102 ./src/NKWindow/EntryPoints/NkWayland.h
    100 ./src/NKWindow/EntryPoints/NkWindowsDesktop.h
    103 ./src/NKWindow/EntryPoints/NkXbox.h
     64 ./src/NKWindow/EntryPoints/NkXCB.h
     47 ./src/NKWindow/EntryPoints/NkXLib.h
      3 ./src/NKWindow/NKMain.h
     29 ./src/NKWindow/NKWindow.h
     48 ./src/NKWindow/Platform/Android/java/com/nkentseu/window/NkInputConnection.java
     83 ./src/NKWindow/Platform/Android/java/com/nkentseu/window/NkNativeActivity.java
     64 ./src/NKWindow/Platform/Android/java/com/nkentseu/window/NkTextInputView.java
    238 ./src/NKWindow/Platform/Android/NkAndroidDropTarget.h
    709 ./src/NKWindow/Platform/Android/NkAndroidEventSystem.cpp
     20 ./src/NKWindow/Platform/Android/NkAndroidEventSystem.h
    213 ./src/NKWindow/Platform/Android/NkAndroidGamepad.h
    154 ./src/NKWindow/Platform/Android/NkAndroidTextInputJNI.cpp
   1437 ./src/NKWindow/Platform/Android/NkAndroidWindow.cpp
     70 ./src/NKWindow/Platform/Android/NkAndroidWindow.h
     18 ./src/NKWindow/Platform/Cocoa/NkCocoaEventSystem.h
    274 ./src/NKWindow/Platform/Cocoa/NkCocoaEventSystem.mm
     64 ./src/NKWindow/Platform/Cocoa/NkCocoaGamepad.h
     42 ./src/NKWindow/Platform/Cocoa/NkCocoaWindow.h
    942 ./src/NKWindow/Platform/Cocoa/NkCocoaWindow.mm
     59 ./src/NKWindow/Platform/Common/NkSystemMemory.h
    118 ./src/NKWindow/Platform/Emscripten/NkEmscriptenCanvas.h
    245 ./src/NKWindow/Platform/Emscripten/NkEmscriptenDropTarget.h
    823 ./src/NKWindow/Platform/Emscripten/NkEmscriptenEventSystem.cpp
     18 ./src/NKWindow/Platform/Emscripten/NkEmscriptenEventSystem.h
    249 ./src/NKWindow/Platform/Emscripten/NkEmscriptenGamepad.h
    928 ./src/NKWindow/Platform/Emscripten/NkEmscriptenWindow.cpp
     43 ./src/NKWindow/Platform/Emscripten/NkEmscriptenWindow.h
    384 ./src/NKWindow/Platform/HarmonyOS/NkHarmonyBridge.ts
    111 ./src/NKWindow/Platform/HarmonyOS/NkHarmonyEventSystem.cpp
     34 ./src/NKWindow/Platform/HarmonyOS/NkHarmonyEventSystem.h
     20 ./src/NKWindow/Platform/HarmonyOS/NkHarmonyGamepad.cpp
     80 ./src/NKWindow/Platform/HarmonyOS/NkHarmonyGamepad.h
   1303 ./src/NKWindow/Platform/HarmonyOS/NkHarmonyWindow.cpp
    145 ./src/NKWindow/Platform/HarmonyOS/NkHarmonyWindow.h
    415 ./src/NKWindow/Platform/Linux/NkLinuxGamepadBackend.h
     66 ./src/NKWindow/Platform/Noop/NkNoopEventSystem.cpp
     13 ./src/NKWindow/Platform/Noop/NkNoopEventSystem.h
     48 ./src/NKWindow/Platform/Noop/NkNoopGamepad.h
    387 ./src/NKWindow/Platform/Noop/NkNoopWindow.cpp
     24 ./src/NKWindow/Platform/Noop/NkNoopWindow.h
    144 ./src/NKWindow/Platform/UIKit/NkDialogs_iOS.mm
     18 ./src/NKWindow/Platform/UIKit/NkUIKitEventSystem.h
     94 ./src/NKWindow/Platform/UIKit/NkUIKitEventSystem.mm
     64 ./src/NKWindow/Platform/UIKit/NkUIKitGamepad.h
     44 ./src/NKWindow/Platform/UIKit/NkUIKitWindow.h
    986 ./src/NKWindow/Platform/UIKit/NkUIKitWindow.mm
     68 ./src/NKWindow/Platform/UWP/NkUWPEventSystem.cpp
     18 ./src/NKWindow/Platform/UWP/NkUWPEventSystem.h
     65 ./src/NKWindow/Platform/UWP/NkUWPGamepad.h
    347 ./src/NKWindow/Platform/UWP/NkUWPWindow.cpp
     25 ./src/NKWindow/Platform/UWP/NkUWPWindow.h
    432 ./src/NKWindow/Platform/Wayland/NkWaylandDropTarget.h
    937 ./src/NKWindow/Platform/Wayland/NkWaylandEventSystem.cpp
     33 ./src/NKWindow/Platform/Wayland/NkWaylandEventSystem.h
   1810 ./src/NKWindow/Platform/Wayland/NkWaylandWindow.cpp
    189 ./src/NKWindow/Platform/Wayland/NkWaylandWindow.h
     26 ./src/NKWindow/Platform/Wayland/NkXdgDecorationProtocol.cpp
     38 ./src/NKWindow/Platform/Wayland/NkXdgShellProtocol.cpp
    370 ./src/NKWindow/Platform/Wayland/xdg-decoration-client-protocol.h
     81 ./src/NKWindow/Platform/Wayland/xdg-decoration-protocol.c
   2059 ./src/NKWindow/Platform/Wayland/xdg-shell-client-protocol.h
    187 ./src/NKWindow/Platform/Wayland/xdg-shell-protocol.c
    276 ./src/NKWindow/Platform/Win32/NkWin32DropTarget.h
    749 ./src/NKWindow/Platform/Win32/NkWin32EventSystem.cpp
     21 ./src/NKWindow/Platform/Win32/NkWin32EventSystem.h
    814 ./src/NKWindow/Platform/Win32/NkWin32Gamepad.h
   1481 ./src/NKWindow/Platform/Win32/NkWin32Window.cpp
     78 ./src/NKWindow/Platform/Win32/NkWin32Window.h
     56 ./src/NKWindow/Platform/Xbox/NkXboxEventSystem.cpp
     18 ./src/NKWindow/Platform/Xbox/NkXboxEventSystem.h
    204 ./src/NKWindow/Platform/Xbox/NkXboxGamepad.h
    499 ./src/NKWindow/Platform/Xbox/NkXboxWindow.cpp
     25 ./src/NKWindow/Platform/Xbox/NkXboxWindow.h
    399 ./src/NKWindow/Platform/XCB/NkXCBDropTarget.h
    526 ./src/NKWindow/Platform/XCB/NkXCBEventSystem.cpp
     42 ./src/NKWindow/Platform/XCB/NkXCBEventSystem.h
   1346 ./src/NKWindow/Platform/XCB/NkXCBWindow.cpp
     59 ./src/NKWindow/Platform/XCB/NkXCBWindow.h
    383 ./src/NKWindow/Platform/XLib/NkXLibDropTarget.h
    429 ./src/NKWindow/Platform/XLib/NkXLibEventSystem.cpp
     27 ./src/NKWindow/Platform/XLib/NkXLibEventSystem.h
   1247 ./src/NKWindow/Platform/XLib/NkXLibWindow.cpp
     42 ./src/NKWindow/Platform/XLib/NkXLibWindow.h
     37 ./tests/benchmark_smoke.cpp
    154 ./tests/test_bindings_text.cpp
    238 ./tests/test_smoke.cpp
  35872 total

# listons les backends de plateformes presents dans notre module 

j'ai retrouver 13 backends de plateforme qui sont : Linux, Android, Cocoa, Noop, Emscripten, HarmonyOS, UIKit, UWP, Wayland, Win32, Xbox, XCB et XLib.

# suivons l'implementation de la meme fonction sur Linux et sur Android

|        implementation du backend sous Linux             | implementation du backend sous Android                |
|---------------------------------------------------------|-------------------------------------------------------|
|                                                         |                                                       |
|   void Shutdown() override {                            |         void Shutdown() override {                    |
|				for (auto &d : mDevices)                  |           for (auto &snapshot : mSnapshots) {         |
|					CloseDevice(d);                       |           	snapshot.Clear();                         |
|				if (mInotifyFd >= 0) {                    |                               }                       |
|					close(mInotifyFd);                    |               for (auto &info : mInfos) {             |
|					mInotifyFd = -1;                      |                   info = {};                          |
|				}                                         |          mDeviceIds.fill(-1);                         |
|			}                                             |                                 }                     ||                                                         |
|                                                         |                              

# ce qui ene change pas dans les deux implementatons:

"void Shutdown() override" cette fonction sert dans les deux cas à arrêter proprement le backend du gamepad .
# sous linux
 sous linux, le backend doit gerer 
 les ressources systemes comme fermer les peripheriques avec "CloseDevice"
 fermer le descripteur avec "mInotifyFd"
 remettre mInotifyFd a -1

 # sous Android

 sous Android le systeme nettoie les snapshot, les informations des gamepads,les identifiants des périphériques.
 le module absorbe cette difference de telle sorte que quelque soit la plate forme il fonctionne normalement grace a la fonction "Shutdown". 
