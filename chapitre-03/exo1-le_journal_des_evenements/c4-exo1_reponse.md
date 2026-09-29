# dans cet enonce il est question de creer un journal qui affiche la famille et le types d'evennement recu et le nombre d'evenement reu en 1 seconde.
 pour ela, j'ai initialiser un compteur d'evenement a zero, 
 creer une propriete qui recuperera la categorie"GetCategorie()" 
 une autre pour recuperer le type "GetType()" et 
 une autre pour transformer le type et la categorie recue en caractere lisible par l'utilisateur. ensuite, si un evenement se produit, le compteur s'incremente et le message s'affiche avec "logger.Info" et 
 si l'evenement recu est celui de fermeture, alors la fenetre se ferme. 
 ajouter une autre condition selon la quelle si le temps est superieur  ou egal a 1 alors le message sur le nombre d'evennement par seconde s'affiche et le compte recommence. 

 avant d'afficher le resultat du terminal je tiens a rapeller que c'est extremement long car lorsqu'on bouge juste un peu le curceur cela produit plusieurs mais alors ennormement d'evennement et je tiens egalement a faire part de mon constat: je constate que tout ce que l'on fait produit un evennement que ce soit bouger le curceur, ecrire du texte ou fermer une fenetre et que le nombre d'evenement produit en une seconde n'est pas fixe il varie.comme dans mon cas j'ai eu : [2026-09-27 13:09:19.328] [INF] [default] [main.cpp:53 in nkmain] -> Nombre d'evenements recus en 1 seconde : 7 ,                                                             
 [2026-09-27 13:09:16.328] [INF] [default] [main.cpp:53 in nkmain] -> Nombre d'evenements recus en 1 seconde : 34
 voici le resultat du terminaL:


 [2026-09-27 13:09:14.327] [INF] [default] [main.cpp:46 in nkmain] -> Evenement recu : categorie = INPUT|MOUSE, type = INPUT|MOUSE
[2026-09-27 13:09:14.328] [INF] [default] [main.cpp:46 in nkmain] -> Evenement recu : categorie = INPUT|MOUSE, type = INPUT|MOUSE
[2026-09-27 13:09:14.343] [INF] [default] [main.cpp:46 in nkmain] -> Evenement recu : categorie = INPUT|MOUSE, type = INPUT|MOUSE
[2026-09-27 13:09:14.343] [INF] [default] [main.cpp:46 in nkmain] -> Evenement recu : categorie = INPUT|MOUSE, type = INPUT|MOUSE
[2026-09-27 13:09:14.379] [INF] [default] [main.cpp:46 in nkmain] -> Evenement recu : categorie = INPUT|MOUSE, type = INPUT|MOUSE
[2026-09-27 13:09:14.380] [INF] [default] [main.cpp:46 in nkmain] -> Evenement recu : categorie = INPUT|MOUSE, type = INPUT|MOUSE
[2026-09-27 13:09:16.392] [INF] [default] [main.cpp:46 in nkmain] -> Evenement recu : categorie = WINDOW, type = WINDOW
[2026-09-27 13:09:16.392] [INF] [default] [main.cpp:46 in nkmain] -> Evenement recu : categorie = WINDOW, type = WINDOW
[2026-09-27 13:09:16.394] [INF] [default] [main.cpp:46 in nkmain] -> Evenement recu : categorie = WINDOW, type = WINDOW
[2026-09-27 13:09:16.395] [INF] [default] [main.cpp:46 in nkmain] -> Evenement recu : categorie = WINDOW, type = WINDOW
[2026-09-27 13:09:16.395] [INF] [default] [main.cpp:46 in nkmain] -> Evenement recu : categorie = WINDOW, type = WINDOW
[2026-09-27 13:09:16.396] [INF] [default] [main.cpp:46 in nkmain] -> Evenement recu : categorie = WINDOW, type = WINDOW
[2026-09-27 13:09:16.396] [INF] [default] [main.cpp:46 in nkmain] -> Evenement recu : categorie = WINDOW, type = WINDOW
[2026-09-27 13:09:16.397] [INF] [default] [main.cpp:46 in nkmain] -> Evenement recu : categorie = INPUT|MOUSE, type = INPUT|MOUSE
[2026-09-27 13:09:16.397] [INF] [default] [main.cpp:46 in nkmain] -> Evenement recu : categorie = WINDOW, type = WINDOW
[2026-09-27 13:09:16.398] [INF] [default] [main.cpp:46 in nkmain] -> Evenement recu : categorie = WINDOW, type = WINDOW
[2026-09-27 13:09:16.398] [INF] [default] [main.cpp:46 in nkmain] -> Evenement recu : categorie = INPUT|MOUSE, type = INPUT|MOUSE
[2026-09-27 13:09:16.399] [INF] [default] [main.cpp:46 in nkmain] -> Evenement recu : categorie = WINDOW, type = WINDOW
[2026-09-27 13:09:16.400] [INF] [default] [main.cpp:46 in nkmain] -> Evenement recu : categorie = WINDOW, type = WINDOW
[2026-09-27 13:09:16.400] [INF] [default] [main.cpp:46 in nkmain] -> Evenement recu : categorie = WINDOW, type = WINDOW
[2026-09-27 13:09:16.401] [INF] [default] [main.cpp:46 in nkmain] -> Evenement recu : categorie = WINDOW, type = WINDOW
[2026-09-27 13:09:16.401] [INF] [default] [main.cpp:46 in nkmain] -> Evenement recu : categorie = WINDOW, type = WINDOW
[2026-09-27 13:09:16.402] [INF] [default] [main.cpp:46 in nkmain] -> Evenement recu : categorie = INPUT|MOUSE, type = INPUT|MOUSE
[2026-09-27 13:09:16.402] [INF] [default] [main.cpp:46 in nkmain] -> Evenement recu : categorie = WINDOW, type = WINDOW
[2026-09-27 13:09:16.403] [INF] [default] [main.cpp:46 in nkmain] -> Evenement recu : categorie = WINDOW, type = WINDOW
[2026-09-27 13:09:16.404] [INF] [default] [main.cpp:46 in nkmain] -> Evenement recu : categorie = WINDOW, type = WINDOW
[2026-09-27 13:09:16.404] [INF] [default] [main.cpp:46 in nkmain] -> Evenement recu : categorie = WINDOW, type = WINDOW
[2026-09-27 13:09:16.404] [INF] [default] [main.cpp:46 in nkmain] -> Evenement recu : categorie = WINDOW, type = WINDOW
[2026-09-27 13:09:16.405] [INF] [default] [main.cpp:46 in nkmain] -> Evenement recu : categorie = INPUT|MOUSE, type = INPUT|MOUSE
[2026-09-27 13:09:16.835] [INF] [default] [main.cpp:46 in nkmain] -> Evenement recu : categorie = WINDOW, type = WINDOW
[2026-09-27 13:09:16.835] [INF] [default] [main.cpp:46 in nkmain] -> Evenement recu : categorie = WINDOW, type = WINDOW
[2026-09-27 13:09:16.835] [INF] [default] [main.cpp:46 in nkmain] -> Evenement recu : categorie = WINDOW, type = WINDOW
[2026-09-27 13:09:16.835] [INF] [default] [main.cpp:46 in nkmain] -> Evenement recu : categorie = INPUT|MOUSE, type = INPUT|MOUSE
[2026-09-27 13:09:16.836] [INF] [default] [main.cpp:46 in nkmain] -> Evenement recu : categorie = INPUT|MOUSE, type = INPUT|MOUSE
[2026-09-27 13:09:16.836] [INF] [default] [main.cpp:46 in nkmain] -> Evenement recu : categorie = WINDOW, type = WINDOW
[2026-09-27 13:09:16.836] [INF] [default] [main.cpp:46 in nkmain] -> Evenement recu : categorie = WINDOW, type = WINDOW
[2026-09-27 13:09:16.836] [INF] [default] [main.cpp:46 in nkmain] -> Evenement recu : categorie = WINDOW, type = WINDOW
[2026-09-27 13:09:16.837] [INF] [default] [main.cpp:46 in nkmain] -> Evenement recu : categorie = WINDOW, type = WINDOW
[2026-09-27 13:09:16.837] [INF] [default] [main.cpp:46 in nkmain] -> Evenement recu : categorie = WINDOW, type = WINDOW
[2026-09-27 13:09:16.837] [INF] [default] [main.cpp:46 in nkmain] -> Evenement recu : categorie = INPUT|MOUSE, type = INPUT|MOUSE
[2026-09-27 13:09:16.848] [INF] [default] [main.cpp:46 in nkmain] -> Evenement recu : categorie = WINDOW, type = WINDOW
[2026-09-27 13:09:17.328] [INF] [default] [main.cpp:53 in nkmain] -> Nombre d'evenements recus en 1 seconde : 544
[2026-09-27 13:09:18.112] [INF] [default] [main.cpp:46 in nkmain] -> Evenement recu : categorie = INPUT|KEYBOARD, type = INPUT|KEYBOARD
[2026-09-27 13:09:18.112] [INF] [default] [main.cpp:46 in nkmain] -> Evenement recu : categorie = INPUT|KEYBOARD, type = INPUT|KEYBOARD
[2026-09-27 13:09:18.328] [INF] [default] [main.cpp:53 in nkmain] -> Nombre d'evenements recus en 1 seconde : 2
[2026-09-27 13:09:18.378] [INF] [default] [main.cpp:46 in nkmain] -> Evenement recu : categorie = INPUT|KEYBOARD, type = INPUT|KEYBOARD
[2026-09-27 13:09:18.522] [INF] [default] [main.cpp:46 in nkmain] -> Evenement recu : categorie = INPUT|KEYBOARD, type = INPUT|KEYBOARD
[2026-09-27 13:09:18.522] [INF] [default] [main.cpp:46 in nkmain] -> Evenement recu : categorie = INPUT|KEYBOARD, type = INPUT|KEYBOARD
[2026-09-27 13:09:18.717] [INF] [default] [main.cpp:46 in nkmain] -> Evenement recu : categorie = INPUT|KEYBOARD, type = INPUT|KEYBOARD
[2026-09-27 13:09:18.850] [INF] [default] [main.cpp:46 in nkmain] -> Evenement recu : categorie = INPUT|KEYBOARD, type = INPUT|KEYBOARD
[2026-09-27 13:09:18.850] [INF] [default] [main.cpp:46 in nkmain] -> Evenement recu : categorie = INPUT|KEYBOARD, type = INPUT|KEYBOARD
[2026-09-27 13:09:20.770] [INF] [default] [main.cpp:46 in nkmain] -> Evenement recu : categorie = INPUT|MOUSE, type = INPUT|MOUSE
[2026-09-27 13:09:20.784] [INF] [default] [main.cpp:46 in nkmain] -> Evenement recu : categorie = INPUT|MOUSE, type = INPUT|MOUSE
[2026-09-27 13:09:20.799] [INF] [default] [main.cpp:46 in nkmain] -> Evenement recu : categorie = INPUT|MOUSE, type = INPUT|MOUSE
[2026-09-27 13:09:21.212] [INF] [default] [main.cpp:46 in nkmain] -> Evenement recu : categorie = WINDOW, type = WINDOW

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
  ◀  FIN D'EXECUTION  —  termine normalement  (10.07s)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
