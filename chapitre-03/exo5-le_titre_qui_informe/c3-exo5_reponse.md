# dans cet exercice il est question pour moi d'affichez dans le titre l'état de mon programme avec le nom du document, un astérisque s'il est modifié, et la taille courante de la fenêtre. pour cela , j'ai creer une une variable pour contenir le nom du document "nkentseu::NkString documentName = "document.txt";" pour recuperer la taille de depart " auto lastSize = window.GetSize();" pour mettre a jour le titre si:

la fenetre est redimensionner :if (size.x != lastSize.x || size.y != lastSize.y) {logger.Info( "Nouvelle taille : {} x {}", size.x, size.y);}

le texte est modifier :  window.SetTitle(nkentseu::NkString::Fmt( "MK WINDOW - {0}{1} - {2} x {3}", documentName, documentModifie ? "*" : "", taille.x, taille.y ));

j'ai egalement utiliser la fonction "SetTitle()" pour modifier le titre de la fenetre de facon dynamique. lorsqu'on demare, cela s'affiche: MK WINDOW - ani-2053 800*600. pour la gestion de l'etat du document j'ai utiliser : "documentModifie". cet enonce m'a eclairer sur l'utilite de SetTitle et la mise a jour dynamique.

voici la video : [Voir la vidéo de démonstration](vid/Enregistrement%20de%20l'écran%202026-09-26%20153053.mp4)