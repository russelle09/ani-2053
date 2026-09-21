# pour cet exercice il etait question de compiler un fichier de 10Mo et ensuite le retirer et le compiler egalement puis, mesurer sa taille avant la premiere compilation et apres la seconde compilation et conclure. pour cela, j'ai utiliser "powershell" et "Git Bash" pour en etre sur les details se trouvent dans les lignes suivantes:

# avec Git Bash
j'ai utiliser la commande "head -c 10M /dev/urandom > gros.bin" pour creer un fichier de 10Mo
              la commande "du -sb .git" pour mesurer la taille
voici le resultat:              


Russelle@DESKTOP-4JBL3UT MINGW64 ~/Desktop/exo10
$ cd /c/Users/Russelle/Desktop/exo11

Russelle@DESKTOP-4JBL3UT MINGW64 ~/Desktop/exo11 (main)
$ head -c 10M /dev/urandom > gros.bin

Russelle@DESKTOP-4JBL3UT MINGW64 ~/Desktop/exo11 (main)
$ ls -lh gros.bin
-rw-r--r-- 1 Russelle 197121 10M Sep 21 07:06 gros.bin

Russelle@DESKTOP-4JBL3UT MINGW64 ~/Desktop/exo11 (main)
$ du -sb .git
27420   .git

Russelle@DESKTOP-4JBL3UT MINGW64 ~/Desktop/exo11 (main)
$ git add gros.bin

Russelle@DESKTOP-4JBL3UT MINGW64 ~/Desktop/exo11 (main)
$ git commit -m "Ajout d'un fichier de 10 Mo"
[main (root-commit) 7fc7e0c] Ajout d'un fichier de 10 Mo
 1 file changed, 0 insertions(+), 0 deletions(-)
 create mode 100644 gros.bin

Russelle@DESKTOP-4JBL3UT MINGW64 ~/Desktop/exo11 (main)
$ git rm gros.bin
rm 'gros.bin'

Russelle@DESKTOP-4JBL3UT MINGW64 ~/Desktop/exo11 (main)
$ git commit -m "Retrait du fichier de 10 Mo"
[main cf97781] Retrait du fichier de 10 Mo
 1 file changed, 0 insertions(+), 0 deletions(-)
 delete mode 100644 gros.bin

Russelle@DESKTOP-4JBL3UT MINGW64 ~/Desktop/exo11 (main)
$ du -sb .git
10517715        .git

# avec powershell

PS C:\Users\Russelle\Desktop\exo11c> $f = [System.IO.File]::Create("gros.bin") 
>> $f.SetLength(10MB)
>> $f.Close()
PS C:\Users\Russelle\Desktop\exo11c> Get-Item .\gros.bin                       
                     
             
    Répertoire : C:\Users\Russelle\Desktop\exo11c


Mode                 LastWriteTime         Length Name                        
----                 -------------         ------ ----                        
-a----         9/21/2026   7:07 AM       10485760 gros.bin                    


PS C:\Users\Russelle\Desktop\exo11c> (Get-ChildItem .git -Recurse -File | Measure-Object Length -Sum).Sum                           
27421                                                                      
PS C:\Users\Russelle\Desktop\exo11c> git add gros.bin
PS C:\Users\Russelle\Desktop\exo11c> git commit -m "Ajout d'un fichier de 10 Mo"
[main (root-commit) cac1346] Ajout d'un fichier de 10 Mo
 1 file changed, 0 insertions(+), 0 deletions(-)
 create mode 100644 gros.bin
PS C:\Users\Russelle\Desktop\exo11c> git rm gros.bin
rm 'gros.bin'
PS C:\Users\Russelle\Desktop\exo11c> git commit -m "Retrait du fichier de 10 Mo"
[main 7f6af26] Retrait du fichier de 10 Mo
 1 file changed, 0 insertions(+), 0 deletions(-)
 delete mode 100644 gros.bin
PS C:\Users\Russelle\Desktop\exo11c> (Get-ChildItem .git -Recurse -File | Measure-Object Length -Sum).Sum
74537

# conclusion 

en utilisant "Gish Bash" au depart la taille etait de .git etait de "27420Mo" apres avoir retirer le fichier et recompiler le poid est devenu "10517715".je constate que le poid a tellement augmanter. cependant, en utilisant "powershell" au depart le poids etait de "27421 Mo" et apres supression et recompilation, elle est devenu "74537Mo". les deux resultats sont totalement different et la difference est tres remarquable.

la methode la plus approprie est celle avec git bash car il a cree un fichier contenant des donnee pas tres compressible. Supprimer gros.bin du répertoire de travail ne supprime donc pas automatiquement les données du premier commit.