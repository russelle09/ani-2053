# il est question de detruire un travail par resrt --hard puis le retrouver avec "git --reflog"

PS C:\Users\Russelle\Desktop\exercice8> git add fichier.txt                                      
PS C:\Users\Russelle\Desktop\exercice8> git commit -m "ajout du travail"                                      
[main e849066] ajout du travail                      
 1 file changed, 0 insertions(+), 0 deletions(-)
 create mode 100644 fichier.txt
PS C:\Users\Russelle\Desktop\exercice8> git log --oneline
e849066 (HEAD -> main) ajout du travail
f23be38 (autre) Revert "ajout du return a la fin du code"
703a5d3 (origin/main) ajout du return a la fin du code j'avais omis return 0 en terminant mon programme
720fc8d ajout du return a la fin du code j'avais omis return 0 en terminant mon programme
483d559 ajout du return 0 a la fin du code
76c1197 ajout du return 0 a la fin du code
b4b1b23 ajout du return 0 a la fin du code
7c857ea supression de la condion if en fin de code
721a3ff stup
PS C:\Users\Russelle\Desktop\exercice8> git reset --hard HEAD~1
HEAD is now at f23be38 Revert "ajout du return a la fin du code"
PS C:\Users\Russelle\Desktop\exercice8> git reflog
f23be38 (HEAD -> main, autre) HEAD@{0}: reset: moving to HEAD~1
e849066 HEAD@{1}: commit: ajout du travail
f23be38 (HEAD -> main, autre) HEAD@{2}: reset: moving to HEAD~1
a7fc0cc HEAD@{3}: commit: ajout du travail
f23be38 (HEAD -> main, autre) HEAD@{4}: reset: moving to HEAD~1
f5fbfc2 HEAD@{5}: commit: suppressin de logger
f23be38 (HEAD -> main, autre) HEAD@{6}: checkout: moving from autre to main
f23be38 (HEAD -> main, autre) HEAD@{7}: checkout: moving from main to autre
f23be38 (HEAD -> main, autre) HEAD@{8}: reset: moving to HEAD
f23be38 (HEAD -> main, autre) HEAD@{9}: revert: Revert "ajout du return a la fin du code"
PS C:\Users\Russelle\Desktop\exercice8> git reset --hard e849066
HEAD is now at e849066 ajout du travail
PS C:\Users\Russelle\Desktop\exercice8> 