# il s'agit ici d'effectuer deux modifications indepandantes dans un meme fichier et effectuer deux commits different avec "git add -p" et verifier si cela affiche dans l'historique


# apres les deux modifications, lancon la commande "git add -p" voici en detail le resultat

PS C:\Users\Russelle\Desktop\appli3\m> git add -p                                                           
diff --git a/fichier.cpp b/fichier.cpp          
index 2f971ec..923a37e 100644
--- a/fichier.cpp
+++ b/fichier.cpp
@@ -3,7 +3,7 @@
 #include <ctime>
 int main() { 
    
-    int b = 10;
+    const int PI = 3.14;
     int nombre;
    srand(time(NULL));
 
(1/2) Stage this hunk [y,n,q,a,d,k,K,j,J,g,/,e,p,P,?]? y
@@ -16,12 +16,12 @@ int main() {
    int main(){
 
     int x,a,b;
-    std::cout<<"donner un nombre entre 1 et 100 :";
+    std::cout<<"donner un nombre entre 1 et 100 :"<<std::endl;
     std::cin>>x;
     std::cout<<"le resultat de l'addition est :"<<x+a;
     std::cout<<"le resultat de la soustraction est :"<<x-b;
     std::cout<<"le resultat de la multiplication est :"<<x*a;
     std::cout<<"le resultat de la division est :"<<x/b;
-    std::cout<<"votre programme se termine avec succes:felicitation"
+    std::cout<<"votre programme se termine avec succes:felicitation";
     return 0;
    }
(2/2) Stage this hunk [y,n,q,a,d,K,J,g,/,s,e,p,P,?]? n

PS C:\Users\Russelle\Desktop\appli3\m> git commit -m "redeclarer ma variable"
[main 67733a4] redeclarer ma variable
 1 file changed, 1 insertion(+), 1 deletion(-)

 # deuxieme commande "git add -p"

PS C:\Users\Russelle\Desktop\appli3\m> git add -p                            
diff --git a/fichier.cpp b/fichier.cpp
index caab323..923a37e 100644
--- a/fichier.cpp
+++ b/fichier.cpp
@@ -16,12 +16,12 @@ int main() {
    int main(){
 
     int x,a,b;
-    std::cout<<"donner un nombre entre 1 et 100 :";
+    std::cout<<"donner un nombre entre 1 et 100 :"<<std::endl;
     std::cin>>x;
     std::cout<<"le resultat de l'addition est :"<<x+a;
     std::cout<<"le resultat de la soustraction est :"<<x-b;
     std::cout<<"le resultat de la multiplication est :"<<x*a;
     std::cout<<"le resultat de la division est :"<<x/b;
-    std::cout<<"votre programme se termine avec succes:felicitation"
+    std::cout<<"votre programme se termine avec succes:felicitation";
     return 0;
    }
(1/1) Stage this hunk [y,n,q,a,d,s,e,p,P,?]? y

PS C:\Users\Russelle\Desktop\appli3\m> git commit -m "ajout de std::endl pour aller a la ligne"
[main 62c10c9] ajout de std::endl pour aller a la ligne
 1 file changed, 2 insertions(+), 2 deletions(-)
PS C:\Users\Russelle\Desktop\appli3\m> 


PS C:\Users\Russelle\Desktop\appli3\m>  git log -2 --stat
commit 62c10c9aac80e8b3dd0905c95cd69e30cb065a5b (HEAD -> main)
Author: MKRUSSELLE-e <ngamaleumonkamrussellevire@gmail.com>
Date:   Fri Sep 18 22:32:26 2026 +0100

    ajout de std::endl pour aller a la ligne

 fichier.cpp | 4 ++--
 1 file changed, 2 insertions(+), 2 deletions(-)

commit 67733a4f58e0c75f9d742380aa8c6f6c8a523121
:
# lancons la commande "git show <commit> pour afficher

PS C:\Users\Russelle\Desktop\appli3\m> git show 62c10c9aac80e8b3dd0905c95cd69e30cb065a5b
commit 62c10c9aac80e8b3dd0905c95cd69e30cb065a5b (HEAD -> main)
Author: russelle09 <ngamaleurusselle@gmail.com>
Date:   Fri Sep 18 22:32:26 2026 +0100

    ajout de std::endl pour aller a la ligne

diff --git a/fichier.cpp b/fichier.cpp
index caab323..923a37e 100644
--- a/fichier.cpp
+++ b/fichier.cpp
@@ -16,12 +16,12 @@ int main() {
:


PS C:\Users\Russelle\Desktop\appli3> git show 67733a4f58e0c75f9d742380aa8c6f6c8a523121
commit 67733a4f58e0c75f9d742380aa8c6f6c8a523121
Author: russelle09 <ngamaleurusselle@gmail.com>
Date:   Fri Sep 18 22:31:08 2026 +0100

    redeclarer ma variable

diff --git a/fichier.cpp b/fichier.cpp
index 2f971ec..caab323 100644
--- a/fichier.cpp
+++ b/fichier.cpp
@@ -3,7 +3,7 @@
:"