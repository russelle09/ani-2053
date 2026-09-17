# il s'agit ici de modifier un fichier et afficher git status a chaque etape de modification
# le fichier modifier est "fichier1.txt"
  
  apres ajout du texte dans le fichier, j'ai lancer la commande " git status" voici le resultat:
  PS C:\Users\Russelle\Desktop\ani-2053\chapitre-02> git status
On branch main
Your branch is up to date with 'origin/main'.

Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
        modified:   exo1-le_depot_d_essai/fichier1.txt

no changes added to commit (use "git add" and/or "git commit -a")

# apres avoir lancer la commande "git add ." le resultat obtenu est:

PS C:\Users\Russelle\Desktop\ani-2053\chapitre-02> git add .
PS C:\Users\Russelle\Desktop\ani-2053\chapitre-02> git status
On branch main
Your branch is up to date with 'origin/main'.

Changes to be committed:
  (use "git restore --staged <file>..." to unstage)
        modified:   exo1-le_depot_d_essai/fichier1.txt

# apres avoir lancer la commande 'git commit -m " "' le resultat obtenu est:

PS C:\Users\Russelle\Desktop\ani-2053\chapitre-02> git commit -m "texte ajoute au fichier1"
[main ced27b0] texte ajoute au fichier1
 1 file changed, 114 insertions(+)
PS C:\Users\Russelle\Desktop\ani-2053\chapitre-02> git status
On branch main
Your branch is ahead of 'origin/main' by 1 commit.
  (use "git push" to publish your local commits)

nothing to commit, working tree clean

# ce qui change entre ces messages est: 

je constate que apres avoir tapper la commande " git add ." cela a mit les modification dans une zone d'indexation et dans le message 1 cela etait rouge ( non indexe) et mais ca passe au vert pres a etre valider. et au message trois la cela entre dans l'historique.