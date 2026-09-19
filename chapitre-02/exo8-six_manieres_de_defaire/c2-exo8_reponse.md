# pour cet exercice il est question de provoquer et resoudre ces six situations :

# une modification non voulu
apres avoir modifier et enregistrer mon fichier, j'ai lancee la commande "git status" pour que Git indique que le fichier a ete modifier et ensuite , "git restore non du fichier" pour restorer. voici le resultat du terminale:

PS C:\Users\Russelle\Desktop\exercice8\p> git status
On branch main

No commits yet

Changes to be committed:
  (use "git rm --cached <file>..." to unstage)
        new file:   w

Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
        modified:   w

PS C:\Users\Russelle\Desktop\exercice8\p> git restore w

# un git add de trop

pour provoquer cette situation j'ai fait un "git add fichier" et ensuite un "git restore --staged w" pour la defere voici le resultat du terminal :

PS C:\Users\Russelle\Desktop\exercice8\p> git add w             
PS C:\Users\Russelle\Desktop\exercice8\p> git restore --staged w
PS C:\Users\Russelle\Desktop\exercice8\p> git status            
On branch main
Your branch is up to date with 'origin/main'.

Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
        modified:   w

no changes added to commit (use "git add" and/or "git commit -a")
PS C:\Users\Russelle\Desktop\exercice8\p> 

# un commit de trop

apres avoir ajouter les modifications du fichier, j'ai effectuer un commit. et utiliser la commande "git reset --soft HEAD~1" pour annuler le commit effectuer. voici les details du terminal:

PS C:\Users\Russelle\Desktop\exercice8\p> git add .
PS C:\Users\Russelle\Desktop\exercice8\p> git commit -m "ajout de la ligne logger.flush"
[main f33202f] ajout de la ligne logger.flush
 1 file changed, 2 insertions(+), 1 deletion(-)
PS C:\Users\Russelle\Desktop\exercice8\p> git reset --soft HEAD~1
PS C:\Users\Russelle\Desktop\exercice8\p> git status
On branch main
Your branch is up to date with 'origin/main'.

Changes to be committed:
  (use "git restore --staged <file>..." to unstage)
        modified:   w

#  un commit pousse qu'il faut annuler

pour cet question j'ai effectuer un commit puis un push qu'il me fallait par la suite annuler avec "git revert HEAD". les details du terminale sont dans les lignes suivantes:

                                      
PS C:\Users\Russelle\Desktop\exercice8> git commit -m "ajout du return a la fin du code
>> j'avais omis return 0 en terminant mon programme"
[main 703a5d3] ajout du return a la fin du code j'avais omis return 0 en terminant mon programme
 1 file changed, 1 deletion(-)
PS C:\Users\Russelle\Desktop\exercice8> git push                                       
Enumerating objects: 7, done.                       
Counting objects: 100% (7/7), done.
Delta compression using up to 8 threads
Compressing objects: 100% (2/2), done.
Writing objects: 100% (4/4), 368 bytes | 184.00 KiB/s, done.
Total 4 (delta 1), reused 0 (delta 0), pack-reused 0 (from 0)
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
To https://github.com/russelle09/exercice8.git
   720fc8d..703a5d3  main -> main
PS C:\Users\Russelle\Desktop\exercice8> git revert HEAD                                
[main f23be38] Revert "ajout du return a la fin du code"
 1 file changed, 1 insertion(+)

 # un travail en cour qu'il faut mettre de cote

 pour cette question j'ai utiliser "git stash" pour mettre de cote mes modifications, ensuie j'ai changer de branche et je suis revenue par la suite a ma branche d'origine et enfin j'ai recuperer mon travail avec " git stash pop"

 PS C:\Users\Russelle\Desktop\exercice8> git stash
Saved working directory and index state WIP on main: f23be38 Revert "ajout du return a la fin du code"
PS C:\Users\Russelle\Desktop\exercice8> git branch -c autre
PS C:\Users\Russelle\Desktop\exercice8> git branch
  autre
* main
PS C:\Users\Russelle\Desktop\exercice8> git switch autre
Switched to branch 'autre'
Your branch is ahead of 'origin/main' by 1 commit.
  (use "git push" to publish your local commits)
PS C:\Users\Russelle\Desktop\exercice8> git switch main 
Switched to branch 'main'
Your branch is ahead of 'origin/main' by 1 commit.
  (use "git push" to publish your local commits)
PS C:\Users\Russelle\Desktop\exercice8> git stash pop
On branch main
Your branch is ahead of 'origin/main' by 1 commit.
  (use "git push" to publish your local commits)

Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
        modified:   p/w

no changes added to commit (use "git add" and/or "git commit -a")
Dropped refs/stash@{0} (5ac4efd8b3a2a7129040c2951eeb4abfd139a275)
PS C:\Users\Russelle\Desktop\exercice8> 

# un commit perdu a retrouver avec "git --reflog"

pour cette question j'ai simuler la perte de mon commit avec " git reset --hard HEAD~1" et ensuite j'ai etrouver avec " git reflog"

PS C:\Users\Russelle\Desktop\exercice8> git reset --hard HEAD~1            
HEAD is now at f23be38 Revert "ajout du return a la fin du code"
PS C:\Users\Russelle\Desktop\exercice8> git reflog
f23be38 (HEAD -> main, autre) HEAD@{0}: reset: moving to HEAD~1
f5fbfc2 HEAD@{1}: commit: suppressin de logger
f23be38 (HEAD -> main, autre) HEAD@{2}: checkout: moving from autre to main
f23be38 (HEAD -> main, autre) HEAD@{3}: checkout: moving from main to autre
f23be38 (HEAD -> main, autre) HEAD@{4}: reset: moving to HEAD
f23be38 (HEAD -> main, autre) HEAD@{5}: revert: Revert "ajout du return a la fin du code"
703a5d3 (origin/main) HEAD@{6}: commit: ajout du return a la fin du code
720fc8d HEAD@{7}: commit: ajout du return a la fin du code
483d559 HEAD@{8}: commit: ajout du return 0 a la fin du code
76c1197 HEAD@{9}: commit: ajout du return 0 a la fin du code
: