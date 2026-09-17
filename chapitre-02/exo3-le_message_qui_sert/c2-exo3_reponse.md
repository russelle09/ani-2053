# pour obtenir les commits du depot moteur j'ai utiliser la commande "git log --oneline "

# commit 1:01ece77 creation du du fichier1.txt
PS C:\Users\Russelle\Desktop\ani-2053\chapitre-02\exo1-le_depot_d_essai> git commit -m "creation du du fichier1.txt " 
[main 01ece77] creation du du fichier1.txt
 1 file changed, 0 insertions(+), 0 deletions(-)
 create mode 100644 chapitre-02/exo1-le_depot_d_essai/fichier1.txt

# commit 2: adf6bf9 (HEAD -> main, origin/main, origin/HEAD) reponse a l'enonce2
PS C:\Users\Russelle\Desktop\ani-2053\chapitre-02> git commit -m "reponse a l'enonce2"
[main adf6bf9] reponse a l'enonce2
 1 file changed, 41 insertions(+)
 create mode 100644 chapitre-02/exo2-les_trois_endroits/c2-exo2_reponse.md

# commit 3: 1434032 suppression du fichier c2-exo1_reponse.md

PS C:\Users\Russelle\Desktop\ani-2053\chapitre-02\exo1-le_depot_d_essai> git commit -m "suppression du chapitre 2 "
[main 985f023] suppression du chapitre 2
 1 file changed, 114 deletions(-)
 delete mode 100644 chapitre-02/exo1-le_depot_d_essai/c2-exo1_reponse.md

 # ce que fait chaque commit

 le commit 1 Il crée un nouveau fichier nommé fichier1.txt.
 le commit 2 Il ajoute 41 lignes dans ce fichier, le fichier contient donc la réponse à l'énoncé 2.
 le commit 3 supprime le fichier c2-exo1_reponse.md qui contenait 114 ligne de code

 # pourquoi?

 pour renseigner de ce que fait le commit de telle sorte que l'on puisse remonter aux modification et se reperer facilement.

 # portent-ils sur le meme sujet?

  Non, les trois commits ne portent pas exactement sur un seul sujet. ils sont liees mais realisent des actions differentes
# selon moi le commit le plus faible est :

" 01ece77 creation du du fichier1.txt" car il n'apporte pas de changement fonctionnel au projet 

# reecrivons le :
 
 reeecriture : "Préparation du fichier pour l'exercice 1"
