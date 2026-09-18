# pour cet exercice, il est question modifier la meme ligne du meme fichier dans des clones ou repertoire different et pousser ensuite provoquer le refus puis un conflit, le resoudre et rendre chaque message affiche.

                          

PS C:\Users\Russelle\Desktop\exo6copie\dossier> git add main.cpp                                               


PS C:\Users\Russelle\Desktop\exo6copie\dossier> git commit -m " ajout de la ligne qui affiche une phrase avant le resultat"          
[branche3 cee840a]  ajout de la ligne qui affiche une phrase avant le resultat
1 file changed, 2 insertions(+)

PS C:\Users\Russelle\Desktop\exo6copie\dossier> git push --set-upstream origin branche3                             
To https://github.com/russelle09/dossier.git
 ! [rejected]        branche3 -> branche3 (fetch first)
error: failed to push some refs to 'https://github.com/russelle09/dossier.git'
hint: Updates were rejected because the remote contains work that you do not
hint: have locally. This is usually caused by another repository pushing to
hint: the same ref. If you want to integrate the remote changes, use
hint: 'git pull' before pushing again.
hint: See the 'Note about fast-forwards' in 'git push --help' for details.

                        
   
PS C:\Users\Russelle\Desktop\exo6copie\dossier> git pull --no-rebase origin branche3
remote: Enumerating objects: 5, done.
remote: Counting objects: 100% (5/5), done.
remote: Compressing objects: 100% (2/2), done.
remote: Total 3 (delta 1), reused 3 (delta 1), pack-reused 0 (from 0)
Unpacking objects: 100% (3/3), 388 bytes | 14.00 KiB/s, done.
From https://github.com/russelle09/dossier
 * branch            branche3   -> FETCH_HEAD
   1a1e798..cabb8b4  branche3   -> origin/branche3
Auto-merging main.cpp
CONFLICT (content): Merge conflict in main.cpp
Automatic merge failed; fix conflicts and then commit the result.


PS C:\Users\Russelle\Desktop\exo6copie\dossier> git add main.cpp                                           


PS C:\Users\Russelle\Desktop\exo6copie\dossier> git commit -m " choisir le resultat a retenir"                      
[branche3 0c5938c]  choisir le resultat a retenir

PS C:\Users\Russelle\Desktop\exo6copie\dossier> git push --set-upstream origin branche3                             
Enumerating objects: 15, done.
Counting objects: 100% (15/15), done.
Delta compression using up to 8 threads
Compressing objects: 100% (9/9), done.
Writing objects: 100% (9/9), 1.21 KiB | 310.00 KiB/s, done.
Total 9 (delta 3), reused 0 (delta 0), pack-reused 0 (from 0)
remote: Resolving deltas: 100% (3/3), completed with 1 local object.
To https://github.com/russelle09/dossier.git
   cabb8b4..0c5938c  branche3 -> branche3
branch 'branche3' set up to track 'origin/branche3'.
PS C:\Users\Russelle\Desktop\exo6copie\dossier> 

# voici le resultat obtenu lorsque j'ai tappe "git pull --no-rebase origin branch"

<<<<<<< HEAD
    std::cout<<" le resultat de l'addition est : " << a+x<<std::endl;
<<<<<<< HEAD

=======
>>>>>>> 1a1e7981ef52ed837fe771915a3a5fb5c57bdf3f
=======
    std::cout<< " le resultat est : " << a+x;
>>>>>>> cabb8b48e9280059263ebabc743b3c7f25d08fa2