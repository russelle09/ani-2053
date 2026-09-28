# dans cet exercice il etait question d'ouvrir deux fenêtres et affichez, pour chaque clic, laquelle de ces fenetre a recu le clic. et de dire ce qui manque pour dessiner dans les deux.

pour cela j'ai commencer par :

'creer mes deux fenetres, et ensuite dans la boucle d'evenement identifier si un evenement a lieu. si c'est le cas, alors on identifie s'il s'agit d'un evenement de souris et si c'est le cas , il faut determiner par la suite s'il s'agit d'un clic gauche. dans le cas ou il s'agit d'un clique gauche, creer une proprietes qui recupere l'identifiant de la fenetre concerner et affiche avec logger.Info et s'il s'agit d'un clic droit, rien ne se passe.
maintenant Pour pouvoir dessiner dans les deux fenêtres, il me faut avoir un contexte de rendu associé à chacune d'elles et pouvoir sélectionner la fenêtre concerner lors du rendu.voici la demonstration : [Voir la vidéo de démonstration](exo11.mp4)