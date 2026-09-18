# pour creer la branche, j'ai utilisee la commande "git branch nom de la branche"

J'ai créé une nouvelle branche (appelee "branche3") puis réalisé trois commits dessus (que vous verrez cidessous). J'ai mesuré la taille du dossier .git avant et après les trois commits. je constate que la taille du dépôt a augmenté après les commits, d'apres moi cela est du au fait que Git conserve dans son historique les informations nécessaires comme empreinte de toutes les modifications fait au projet. Cependant,La branche elle-même occupe un espace (très peu d'espace), car elle correspond essentiellement à une référence vers un commit.

# les commandes utilises sont :

"git switch -c branche3" pour creer une nouvelle branche et me positionner dessus pour travailler
" "{0:N2} Ko" -f ((Get-ChildItem .git -Recurse -File | Measure-Object Length -Sum).Sum / 1KB)" pour mesurer la taille en ko 

# mesurons la taille que le depot a gagner dans le disque

avant les commit la place occupee dans le disque etait de: 26.78 ko
apres les commit la place occupee est de : 29.14 ko
# toute ma demarche pour obtenir les explications precedentes

PS C:\Users\Russelle\Desktop\dossier> git switch -c branche3                                              
Switched to a new branch 'branche3'
PS C:\Users\Russelle\Desktop\dossier> git branch
PS C:\Users\Russelle\Desktop\dossier> "{0:N2} Ko" -f ((Get-ChildItem .git -Recurse -File | Measure-Object Length -Sum).Sum / 1KB)
26.78 Ko        
PS C:\Users\Russelle\Desktop\dossier> git add projet.cpp
PS C:\Users\Russelle\Desktop\dossier> git commit -m "premier texte de mon fichier projet.cpp"
[branche3 (root-commit) 560c9e6] premier texte de mon fichier projet.cpp
 1 file changed, 7 insertions(+)
 create mode 100644 projet.cpp
PS C:\Users\Russelle\Desktop\dossier> git push --set-upstream origin branche3                             
Enumerating objects: 3, done.
Counting objects: 100% (3/3), done.
Delta compression using up to 8 threads
Compressing objects: 100% (2/2), done.
Writing objects: 100% (3/3), 326 bytes | 326.00 KiB/s, done.
Total 3 (delta 0), reused 0 (delta 0), pack-reused 0 (from 0)
To https://github.com/russelle09/dossier.git
 * [new branch]      branche3 -> branche3
branch 'branche3' set up to track 'origin/branche3'.
PS C:\Users\Russelle\Desktop\dossier> git add fichier.cpp                                    
PS C:\Users\Russelle\Desktop\dossier> git commit -m "code qui affiche bonjour tant que le nombre entrer est inferieur a 5"
[branche3 6e81c71] code qui affiche bonjour tant que le nombre entrer est inferieur a 5
 1 file changed, 13 insertions(+)
 create mode 100644 fichier.cpp
PS C:\Users\Russelle\Desktop\dossier> git push --set-upstream origin branche3                             
Enumerating objects: 4, done.
Counting objects: 100% (4/4), done.
Delta compression using up to 8 threads
Compressing objects: 100% (3/3), done.
Writing objects: 100% (3/3), 464 bytes | 464.00 KiB/s, done.
Total 3 (delta 0), reused 0 (delta 0), pack-reused 0 (from 0)
To https://github.com/russelle09/dossier.git
   560c9e6..6e81c71  branche3 -> branche3
branch 'branche3' set up to track 'origin/branche3'.
PS C:\Users\Russelle\Desktop\dossier> "{0:N2} Ko" -f ((Get-ChildItem .git -Recurse -File | Measure-Object Length -Sum).Sum / 1KB)
29.14 Ko
PS C:\Users\Russelle\Desktop\dossier> 