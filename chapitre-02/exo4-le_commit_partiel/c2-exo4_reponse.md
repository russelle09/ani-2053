# il s'agit ici d'effectuer deux modifications indepandantes dans un meme fichier et effectuer deux commits different avec "git add -p" et verifier si cela affiche dans l'historique

# NB: tout ce qui est entre les cotes suivantes c'est le resultat du terminale ne pas s'embrouiller avec les commentaires



"
PS C:\Users\Russelle\Desktop\ani-2053\chapitre-02> git add -p
diff --git a/chapitre-02/exo2-les_trois_endroits/c2-exo2_reponse.md b/chapitre-02/exo2-les_trois_endroits/c2-exo2_reponse.md
index cf96390..5045de3 100644
--- a/chapitre-02/exo2-les_trois_endroits/c2-exo2_reponse.md
+++ b/chapitre-02/exo2-les_trois_endroits/c2-exo2_reponse.md
@@ -1,7 +1,7 @@
  # il s'agit ici de modifier un fichier et afficher git status a chaque etape de modification
  # le fichier modifier est "fichier1.txt"
   
-  apres ajout du texte dans le fichier, j'ai lancer la commande " git status" voici le resultat:
+apres ajout du texte dans le fichier, j'ai lancer la commande " git status" voici le resultat:
   PS C:\Users\Russelle\Desktop\ani-2053\chapitre-02> git status
 On branch main
 Your branch is up to date with 'origin/main'.
(1/3) Stage this hunk [y,n,q,a,d,k,K,j,J,g,/,e,p,P,?]? y   
@@ -15,7 +15,7 @@ no changes added to commit (use "git add" and/or "git commit -a")
 
 # apres avoir lancer la commande "git add ." le resultat obtenu est:
 
-PS C:\Users\Russelle\Desktop\ani-2053\chapitre-02> git add .
+
 PS C:\Users\Russelle\Desktop\ani-2053\chapitre-02> git status
 On branch main
 Your branch is up to date with 'origin/main'.

 (1/1) Stage this hunk [y,n,q,a,d,e,p,P,?]? y

PS C:\Users\Russelle\Desktop\ani-2053\chapitre-02> git commit -m "deuxieme supression inutile"        
[main b3866d9] deuxieme supression inutile
 1 file changed, 1 insertion(+), 1 deletion(-)

 "