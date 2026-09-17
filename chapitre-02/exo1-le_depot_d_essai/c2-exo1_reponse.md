

# commit du premier fichier

PS C:\Users\Russelle\Desktop\ani-2053\chapitre-02\exo1-le_depot_d_essai> git commit -m "creation du fichier1.txt"
[main 7c7720a] creation le fichier1.txt
 1 file changed, 0 insertions(+), 0 deletions(-)
 create mode 100644 chapitre-02/exo1-le_depot_d_essai/fichier1.txt
PS C:\Users\Russelle\Desktop\ani-2053\chapitre-02\exo1-le_depot_d_essai> git push -u origin main            
fatal: unable to access 'https://github.com/MKRUSSELLE-e-golden/ani-2053.git/': Could not resolve host: github.com
PS C:\Users\Russelle\Desktop\ani-2053\chapitre-02\exo1-le_depot_d_essai> git push -u origin main
Enumerating objects: 7, done.
Counting objects: 100% (7/7), done.
Delta compression using up to 8 threads
Compressing objects: 100% (3/3), done.
Writing objects: 100% (4/4), 403 bytes | 403.00 KiB/s, done.
Total 4 (delta 1), reused 0 (delta 0), pack-reused 0 (from 0)
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
To https://github.com/MKRUSSELLE-e-golden/ani-2053.git
   9beb91f..7c7720a  main -> main
branch 'main' set up to track 'origin/main'.
                                                    
# commit du deuxieme fichier

PS C:\Users\Russelle\Desktop\ani-2053\chapitre-02\exo1-le_depot_d_essai> git commit -m "creation du du fichier2.txt"
[main 2ab1ea7] creation du du fichier2
 1 file changed, 0 insertions(+), 0 deletions(-)
 create mode 100644 chapitre-02/exo1-le_depot_d_essai/fichier2.txt
PS C:\Users\Russelle\Desktop\ani-2053\chapitre-02\exo1-le_depot_d_essai> git push -u origin main            
Enumerating objects: 7, done.
Counting objects: 100% (7/7), done.
Delta compression using up to 8 threads
Compressing objects: 100% (3/3), done.
Writing objects: 100% (4/4), 369 bytes | 369.00 KiB/s, done.
Total 4 (delta 2), reused 0 (delta 0), pack-reused 0 (from 0)
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
To https://github.com/MKRUSSELLE-e-golden/ani-2053.git
   7c7720a..2ab1ea7  main -> main
branch 'main' set up to track 'origin/main'.                                                     

# commit du troisieme fichier

PS C:\Users\Russelle\Desktop\ani-2053\chapitre-02\exo1-le_depot_d_essai> git commit -m "creation du du fichier3.txt"
[main 9074cbd] creation du du fichier3.txt
 1 file changed, 0 insertions(+), 0 deletions(-)
 create mode 100644 chapitre-02/exo1-le_depot_d_essai/fichier3.txt
PS C:\Users\Russelle\Desktop\ani-2053\chapitre-02\exo1-le_depot_d_essai> git push -u origin main            
Enumerating objects: 7, done.
Counting objects: 100% (7/7), done.
Delta compression using up to 8 threads
Compressing objects: 100% (3/3), done.
Writing objects: 100% (4/4), 369 bytes | 369.00 KiB/s, done.
Total 4 (delta 2), reused 0 (delta 0), pack-reused 0 (from 0)
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
To https://github.com/MKRUSSELLE-e-golden/ani-2053.git
   2ab1ea7..9074cbd  main -> main
branch 'main' set up to track 'origin/main'.

# affichons l'historique en une ligne par commit

* avec la commande : git log --oneline * j'obtiens:

9074cbd (HEAD -> main, origin/main, origin/HEAD) creation du du fichier3.txt
2ab1ea7 creation du du fichier2
7c7720a creation du du fichier1
9beb91f ajout
54a0e0e ajout
d20d042 ajout
d6388c1 Initial commit

# affichons le graphe

 ** avec la commande :git log --oneline --graph **  j'obtiens :

* 9074cbd (HEAD -> main, origin/main, origin/HEAD) creation du du du fichier3.txt
* 2ab1ea7 creation du du du fichier2.txt
* 7c7720a creation du du fichier1.txt
* 9beb91f ajout
* 54a0e0e ajout
* d20d042 ajout
* d6388c1 Initial commit

on obtient :
 git inial
    |
    |
    creation du depot vide
    |
    |
    fichier1.txt
    |
    |
    git add
    |
    |
    git commit 1
    |
    |
    fichier2.txt
    |
    |
    git add
    |
    |
    git commit 2
    |
    |
    fichier2.txt
    |
    |
    git add
    |
    |
    git comit 3

