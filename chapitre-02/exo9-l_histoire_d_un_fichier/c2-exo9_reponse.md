# ici, il est question de prendre un fichier du moteur et de le reconstruir en donnant les trois moment ou il a le plus changer, sa date de creation et ce que les messages disent des raisons. voici les reponses etape par etape

# pour trouver la date de creation, les differents commits et leur messages  j'ai utiliser la commande "git log --follow --stat -- Nkentseu.jenga" et voici le resultat du terminal:
PS C:\Users\Russelle\Desktop\NKentseu> git log --follow --stat -- Nkentseu.jenga
commit 987304dae44aee827c178ff7d5069443a6caad97 (HEAD -> etude, main)
Author: dikoume-stephane <dikoumeds@gmail.com>
Date:   Tue Sep 15 17:42:33 2026 +0100

    cation des fichier cibles pour l'exo 8

 Nkentseu.jenga | 4 ++++
 1 file changed, 4 insertions(+)

commit 8e6cf0ce2a2e64d9b1641e1dd39e0cc6516a8670
Author: dikoume-stephane <dikoumeds@gmail.com>
Date:   Mon Sep 14 20:18:48 2026 +0100

    resolution des exo avant NKRef

 Nkentseu.jenga | 3 +++
 1 file changed, 3 insertions(+)

commit 9c3fad332f0188d4e77ad6cd98fd5d87113a2633 (origin/transit, origin/main, origin/HEAD)
Author: LeTeguis <69282466+LeTeguis@users.noreply.github.com>
Date:   Sun Sep 13 07:31:25 2026 +0100

    transit : huit chantiers fusionnés, 226/226, prêt pour relecture (#89)

  * DECISIONS : le DFSPH sur GPU (540d6c3a) -- meme physique (cinq temoins, Cebron 10 %, M&M 9 %, meme image a pas fixe), cout rouge dit (50 653 a 128-136 ms), trois rouges payes (16 blocs NVIDIA, stockage remplace, piege antislash-n), leviers nommes

 * SPH GPU : listes de voisines en cache (un noyau par sous-pas, 64 indices) + residu relu une iteration sur deux
 
 # pour reconstituer sa creation j'ai utilser "git show 9c3fad332f0188d4e77ad6cd98fd5d87113a2633" le chiffre est l'id du premier commit voici le resultat du terminal:
  -- PS C:\Users\Russelle\Desktop\NKentseu> git show 9c3fad332f0188d4e77ad6cd98fd5d87113a2633
commit 9c3fad332f0188d4e77ad6cd98fd5d87113a2633 (origin/transit, origin/main, origin/HEAD)
Author: LeTeguis <69282466+LeTeguis@users.noreply.github.com>
Date:   Sun Sep 13 07:31:25 2026 +0100

    transit : huit chantiers fusionnés, 226/226, prêt pour relecture (#89)

    * DECISIONS : le DFSPH sur GPU (540d6c3a) -- meme physique (cinq temoins, Cebron 10 %, M&M 9 %, meme image a pas fixe), cout rouge dit (50 653 a 128-136 ms), trois rouges payes (16 blocs NVIDIA, stockage remplace, piege antislash-n), leviers nommes

    * SPH GPU : listes de voisines en cache (un noyau par sous-pas, 64 indices) + residu relu une iteration sur deux -- 50 653 : 128-136 -> 39-64 ms/image, 195 112 : 680-864 -> 164-254 ms, 1 000 000 : 4,9-5,3 s -> 1,24-1,64 s ; temoins inchanges ; toujours ROUGE contre 16 / 33 ms, dit

    Mesure du 05/09 (00h40) : le cout etait dans les passes de voisinage qui retraversaient les
    27 cellules, les distances et le noyau a chaque iteration, et dans une synchronisation par
    iteration. Ici : un noyau sph_neigh construit une fois par sous-pas la liste des voisines
    de chaque particule (indices ; fluide < cap, fantome >= cap ; 64 au plus, le compte brut
    est releve et le depassement est DIT une fois : « la liste en garde 64, densite fausse
    la ») ; densite, kappa, correction et non-pression lisent la liste (le noyau W/gradW est
    recalcule : moins cher que la traversee). Le residu est relu aux iterations impaires
    (divergence) et paires (densite) : au plus une iteration de plus qu'en CPU -- mesure :
    9,0 au repos contre 8,5.

    Temoins (Release, OpenGL, Ilyana a 56-97 % du GPU) : repos 10 s 1,001 / sol 1,001 / vmax
    0,016 / 2048 et 256,01 kg / 0 NaN ; dam carre Cebron 10 % (max 19), M&M 65 / 28 ; canal
    n2 = 2 M&M 9 % / 18 % -- inchanges.
    Cout (ms/image, images 30/60) : repos 2 048 : 8-11 (avant 16-28 avec pointes a 372) ;
    dam 4 096 : 10-11 (avant 26-29 ; CPU 47-54) ; canal n2 = 2 (8 192) : 15-16 ; 50 653 :
# les trois moments ou il a le plus changer

pour avoir ces trois moment je me suis basee je le resultat de "git log --follow --stat -- Nkentseu.jenga"

et je deduit que c'est :

Date	        	Message	Modification
15 sept. 2026    	987304d	cation des fichier cibles pour l'exo 8	+4 lignes
14 sept. 2026   	8e6cf0c	resolution des exo avant NKRef	+3 lignes
13 sept. 2026	    9c3fad3	transit : huit chantiers fusionnés

# ce que les messages disent de ces raison

1er commit Cela indique que la modification intervient dans le cadre du transit de plusieurs chantiers qui ont été fusionnés, prêt pour relecture.
2eme commit Cela indique que la modification est liée à la résolution des exercices avant NKRef.
3eme commit Cela indique que le fichier a été modifié pour créer/ajouter des fichiers cibles nécessaires à l'exercice 8.