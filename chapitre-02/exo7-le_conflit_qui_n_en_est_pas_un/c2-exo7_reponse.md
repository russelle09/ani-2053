# ici il est question de montrer que qui assemble deux modifications effectuees sur deux endroit eloignees du meme fichier sans rien demander. pour cela j'ai creer une deuxieme branche appelle "bcp" j'ai effectue une premiere modification et a commiter sur cette branche puis changer de branche effectuer une modification et commiter de nouveau sur cette branche et ensuite utiliser la commande "git merge branch" pour fusionner les deux et avec les detail ci dessous vous verrez que git a assemblee sans rien demander


PS C:\Users\Russelle\Desktop\er> git branch -c bcp
fatal: no commit on branch 'main' yet
PS C:\Users\Russelle\Desktop\er> git add .
PS C:\Users\Russelle\Desktop\er> git commit -m "ma nw wido"
[main (root-commit) 7d274e6] ma nw wido
 1 file changed, 137 insertions(+)
 create mode 100644 e/THIRD_PARTY_LICENSES.md
PS C:\Users\Russelle\Desktop\er> git push                                                     
Enumerating objects: 4, done.
Counting objects: 100% (4/4), done.
Delta compression using up to 8 threads
Compressing objects: 100% (3/3), done.
Writing objects: 100% (4/4), 3.79 KiB | 1.90 MiB/s, done.
Total 4 (delta 0), reused 0 (delta 0), pack-reused 0 (from 0)
To https://github.com/russelle09/er.git
 * [new branch]      main -> main
PS C:\Users\Russelle\Desktop\er> git branch -c bcp         
PS C:\Users\Russelle\Desktop\er> git branch
  bcp
* main
PS C:\Users\Russelle\Desktop\er> git switch branch bcp
fatal: only one reference expected
PS C:\Users\Russelle\Desktop\er> git switch bcp       
Switched to branch 'bcp'
Your branch is up to date with 'origin/main'.
PS C:\Users\Russelle\Desktop\er> git add .                 
PS C:\Users\Russelle\Desktop\er> git commit -m "suppression de la ligne 20"    
[bcp a4bd487] suppression de la ligne 20
 1 file changed, 1 insertion(+), 2 deletions(-)
PS C:\Users\Russelle\Desktop\er> git switch main                           
Switched to branch 'main'
Your branch is up to date with 'origin/main'.
PS C:\Users\Russelle\Desktop\er> git add .                                 
PS C:\Users\Russelle\Desktop\er> git commit -m "suppression de la ligne 35 a 36"
[main 1fb4ff9] suppression de la ligne 35 a 36
 1 file changed, 1 insertion(+), 2 deletions(-)
PS C:\Users\Russelle\Desktop\er> git merge bcp                                  
Auto-merging e/THIRD_PARTY_LICENSES.md
Merge made by the 'ort' strategy.
 e/THIRD_PARTY_LICENSES.md | 3 +--
 1 file changed, 1 insertion(+), 2 deletions(-)

