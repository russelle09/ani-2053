# pour cet exercice il etait question de Fixez une taille minimale, puis essayez de réduire la fenêtre en dessous. Retirez-la, recommencez, et notez la plus petite taille que le système accepte.


j'ai tester la les dimensions cfg.minHeight=300 et cfg.minWeight=200
                              cfg.minHeight=150 et cfg.minWeight=100 
                              cfg.minHeight=75 et cfg.minWeight=50
# des cet instant je me suis rendu compte que a minWeight=100 et a minWeight=50 la hauteur etait la meme d'ou je retiens minWeight=100 pour hauteur minimale. continuons avec minHeight
                              cfg.minHeight=60 et cfg.minWeight=100
                              cfg.minHeight=40 et cfg.minWeight=100
# d'ou la hauteur et largeur maximale sont : cfg.minHeight=40 et cfg.minWeight=100 car a cette taille la les valeurs en dessous que je testais me donnaient une fenetre de meme dimension que cfg.minHeight=40 et cfg.minWeight=100