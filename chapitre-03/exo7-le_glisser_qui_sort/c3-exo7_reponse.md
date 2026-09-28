# il etait question dans cet ennonce de faire un glisser dans une fenetre une fois avec capture et une autre fois avec capture de la souris

# sans capture

pour realiser cela apres avoir creer ma fenetre, j'ai creer une propriete qui contiendra le type de l'evenenment en cour. 
si il s'agit d'un evenement de souris, determiner si c'est le clic gauche de la souris qui est presser et faire passer le glisser qui etait initialement false a true.
ensuite une autre propriete qui contiendra le type de mouvement de la souris s'il est de type glisser alors on recupere les coordonnees de la souris et l'affiche et lorsque la souris sors de la fenetre, la fenetre ne recoit plus les informations concernant la souris. [demonstration](exo7s.mp4)  

# avec capture

pour ce cas , j'ai ajouter la proprite "window.CaptureMouse(event);" pour continuer de suivre la position de la souris meme lorsque elle sors de la fenetre dans le code precedent et egalement "window.CaptureMouse(false);" arreter de suivre la position de la souris.[demonstration](exo7.mp4)

#  LA DIFFERENCE DU POINT DE VUE DE L'OBSERVATEUR EST: 

lorsque l'on fait un glisser deposer sans capture, lorsque la souris sort de la fenetre, la fenetre arrete de suivre sont mouvement et ne recoit plus les informations de la souris. et lorsqu'on fait un glisser avec capture, meme si la souris sort de la fenetre, la fenetre continue de recevoir ces informations.