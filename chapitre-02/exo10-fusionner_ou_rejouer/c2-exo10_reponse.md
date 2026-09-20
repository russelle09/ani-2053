# pour cet exercice il est question de faire une fois une integration par fusion, une fois en rejouant. Comparez les deux graphes, et dire celui que préfére lire, avec un argument.


# par fusion

j'ai utiliser " git merge branche " pour fusionner ma branche a la principale et " git log --gaph --all" pour afficher le graphe . voici le resultat du terminal:

PS C:\Users\Russelle\Desktop\exo9> git push origin ouf                    
Enumerating objects: 7, done.
Counting objects: 100% (7/7), done.
Delta compression using up to 8 threads
Compressing objects: 100% (2/2), done.
Writing objects: 100% (4/4), 333 bytes | 333.00 KiB/s, done.
Total 4 (delta 1), reused 0 (delta 0), pack-reused 0 (from 0)
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
To https://github.com/russelle09/exo9.git
   55560d4..b6e9b92  ouf -> ouf
PS C:\Users\Russelle\Desktop\exo9> git switch main                        
Switched to branch 'main'
Your branch is up to date with 'origin/main'.
PS C:\Users\Russelle\Desktop\exo9> git merge ouf
Auto-merging e/n
Merge made by the 'ort' strategy.
 e/n | 4 +---
 1 file changed, 1 insertion(+), 3 deletions(-)
PS C:\Users\Russelle\Desktop\exo9> git log --oneline --graph --all
*   c7ac316 (HEAD -> main) Merge branch 'ouf'
|\  
| * b6e9b92 (origin/ouf, ouf) suppression de callback
* | 3b323b1 (origin/main) suppression de return d et ajout de nkentseu harmonyos demo
:
*   c7ac316 (HEAD -> main) Merge branch 'ouf'
|\  
| * b6e9b92 (origin/ouf, ouf) suppression de callback
* | 3b323b1 (origin/main) suppression de return d et ajout de nkentseu harmonyos demo
* | 3f5579f Merge branch 'ouf'
|\| 
| * 55560d4 changement de close to opened ajout d'argument dans la fonction windows.open et supression du return0
| * b00f2a3 changement de open pour close ajout des arguments dans la meme fonction
| * 6eae3c8 suprimer la ligne de endif
* | ad14208 suppression des arguments de logger.Infof changement de NKEvent to NKCore
|/  
* 6711ee8 ajout
~
~
~
(END)
*   c7ac316 (HEAD -> main) Merge branch 'ouf'
|\  
| * b6e9b92 (origin/ouf, ouf) suppression de callback
* | 3b323b1 (origin/main) suppression de return d et ajout de nkentseu harmonyos demo
* | 3f5579f Merge branch 'ouf'
|\| 
| * 55560d4 changement de close to opened ajout d'argument dans la fonction windows.open et supression du return0
| * b00f2a3 changement de open pour close ajout des arguments dans la meme fonction
| * 6eae3c8 suprimer la ligne de endif
* | ad14208 suppression des arguments de logger.Infof changement de NKEvent to NKCore
|/  
* 6711ee8 ajout
~
~
~
~
~
~
~
(END)


# avec rebase

# revenons a la stuation avant le merge"

PS C:\Users\Russelle\Desktop\exo9> git switch main
Already on 'main'
Your branch is ahead of 'origin/main' by 2 commits.
  (use "git push" to publish your local commits)
PS C:\Users\Russelle\Desktop\exo9> git reset --hard 3b323b1
HEAD is now at 3b323b1 suppression de return d et ajout de nkentseu harmonyos demo
PS C:\Users\Russelle\Desktop\exo9> git log --oneline --graph --all
* b6e9b92 (origin/ouf, ouf) suppression de callback
| * 3b323b1 (HEAD -> main, origin/main) suppression de return d et ajout de nkentseu harmonyos demo
| *   3f5579f Merge branch 'ouf'
| |\  
| |/  
|/|   
* | 55560d4 changement de close to opened ajout d'argument dans la fonction windows.open et supression du return0
* | b00f2a3 changement de open pour close ajout des arguments dans la meme fonction
* | 6eae3c8 suprimer la ligne de endif
| * ad14208 suppression des arguments de logger.Infof changement de NKEvent to NKCore
|/  
* 6711ee8 ajout
PS C:\Users\Russelle\Desktop\exo9> git switch ouf
Switched to branch 'ouf'
Your branch and 'origin/main' have diverged,
and have 1 and 3 different commits each, respectively.
  (use "git pull" if you want to integrate the remote branch with yours)
PS C:\Users\Russelle\Desktop\exo9> git rebase main
Successfully rebased and updated refs/heads/ouf.
PS C:\Users\Russelle\Desktop\exo9> git switch main
Switched to branch 'main'
Your branch is up to date with 'origin/main'.
PS C:\Users\Russelle\Desktop\exo9> git merge ouf  
Updating 3b323b1..6333fc5
Fast-forward
 e/n | 4 +---
 1 file changed, 1 insertion(+), 3 deletions(-)
PS C:\Users\Russelle\Desktop\exo9> git log --oneline --graph --all
* 6333fc5 (HEAD -> main, ouf) suppression de callback
* 3b323b1 (origin/main) suppression de return d et ajout de nkentseu harmonyos demo
*   3f5579f Merge branch 'ouf'
|\  
* | ad14208 suppression des arguments de logger.Infof changement de NKEvent to NKCore
| | * b6e9b92 (origin/ouf) suppression de callback
| |/  
| * 55560d4 changement de close to opened ajout d'argument dans la fonction windows.open et supression du return0
| * b00f2a3 changement de open pour close ajout des arguments dans la meme fonction
| * 6eae3c8 suprimer la ligne de endif
|/  
* 6711ee8 ajout
PS C:\Users\Russelle\Desktop\exo9> 

# le graphe que je prefere lire

je constate apres cet exercice que "mer" Réunit deux historiques alors que "rebase" Rejoue les commits sur une nouvelle base. Je préfère lire le graphe obtenu avec le merge, car il conserve clairement le moment où les deux branches ont été réunies.