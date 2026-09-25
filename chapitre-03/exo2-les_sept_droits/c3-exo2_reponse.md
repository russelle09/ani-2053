# il etait question pour cet exercice d'ouvrir sept fenetres successives chacune avec un droit desactive. pour cela, j'ai utilse la structure de base d'une creation de fenetre donne dans le chapitre et a desactive un droit dans chacune des fenetres crees afin d'observer comment la fenetre se comportera.

* dans le premier cas

cfg.minimizable=false 
c'est a dire qu'il sera impossible de reduire la fenetre. cependant, notons qu'il n'est pas oblige de mettre les autres droits a true car de base ils le sont deja dans NkWindowConfig. 

* dans le second cas

cfg.resizable=false
il sera impossible de redimensionner la fenetre

* dans le troisieme cas

cfg.movable=false
il sera impossible de deplacer la fenetre

* dans le quatrieme  cas

cfg.closable=false
il sera impossible de fermer la fenetre

* dans le cinquieme cas

cfg.maximizable=false
il sera impossible d'agrandir la fenetre

* dans le sixieme cas

cfg.fullscreen=false
la fenetre ne pourra plus s'ouvrir en plein ecran

* dans le septieme cas

cfg.vsyn=false
