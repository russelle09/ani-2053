# la revu de branche

resultat obtenu lors du l'affichage du commit du deuxieme groupe

PS C:\Users\Russelle\Desktop\ani-2053_Demo4> git log --oneline
acc8c3b (HEAD -> feature/resolveur-equation, origin/feature/resolveur-equations) feature: Initialization du resolveur d equations quadratiques
3ecb6f2 feature: Commit initial comportant l'espace initial du travail
11bb1d5 Initialisation du dépot
200ef50 Delete regles-de-travail.md
ab3c4a8 doc: Ajoute les règles de travail du dépot

''''apres analise de ces commit, il en ressort que Globalement les commit sont lisibles, car on comprend assez rapidement l'intention grâce aux messages.comme " Ajoute les règles de travail du dépot"
est assez explicite : on comprend qu'il s'agit d'une modification de documentation.De même que "Delete regles-de-travail.md" indique clairement qu'un fichier a été supprimé.
pourtant "Commit initial comportant l'espace initial du travail" est moins précis. On ne sait pas exactement quels éléments ont été créés. aussi "Initialization du resolveur d equations quadratiques" indique le sujet, mais pourrait être formulé plus précisément. nous constatons que les commits melangent documentation, initialisation du dépôt et développement de la fonctionnalité.pour une branche consacrée au résolveur d'équations, il faut vérifier que les modifications de documentation ou de configuration ne sont pas sans rapport avec la fonctionnalité.Dans la norme les modifications sans rapport avec le résolveur d'équations devraient être placées dans des commits ou branches séparés.Les commits sont dans l'ensemble compréhensibles, mais certains messages pourraient être plus précis. La revue doit également vérifier le contenu réel des fichiers afin d'identifier les fonctionnalités manquantes et les modifications qui ne sont pas liées au sujet de la branche.

# voyons maintenant ce que fait chaque commit

PS C:\Users\Russelle\Desktop\ani-2053_Demo4> git show acc8c3b
commit acc8c3bdd5de876e3d86aa228e101dc6d1847ad3 (origin/feature/resolveur-equations)
Author: Ben-salem <emmanuel.eponse@facsciences-uy1.cm>
Date:   Mon Sep 21 22:23:39 2026 +0100

    feature: Initialization du resolveur d equations quadratiques
    
    Une nouvelle branche a ete creee pour le resolveur d equations quadratiques

diff --git a/include/header.h b/include/header.h
index 9c558e3..708520b 100644

ce commit message explique que le but est d'initialiser les répertoires et fichiers nécessaires au travail et voici ce qui se trouve reellement dans ce fichier

PS C:\Users\Russelle\Desktop\ani-2053_Demo4> git show acc8c3b -- include/header.h
commit acc8c3bdd5de876e3d86aa228e101dc6d1847ad3 (origin/feature/resolveur-equations)
Author: Ben-salem <emmanuel.eponse@facsciences-uy1.cm>
Date:   Mon Sep 21 22:23:39 2026 +0100

    feature: Initialization du resolveur d equations quadratiques
    
    Une nouvelle branche a ete creee pour le resolveur d equations quadratiques

diff --git a/include/header.h b/include/header.h
index 9c558e3..708520b 100644
PS C:\Users\Russelle\Desktop\ani-2053_Demo4> Get-Content .\include\header.h
#ifndef HEADER_H
#define HEADER_H

#endif

la branche initialise le travail consacré au résolveur d'équations quadratiques et modifie include/header.h.Il n'y a donc aucune fonction, aucune déclaration de fonction et aucun calcul lié aux équations quadratiques dans ce fichier.

PS C:\Users\Russelle\Desktop\ani-2053_Demo4> git show 3ecb6f2
commit 3ecb6f27d111f7f0098e232b3b025ac0237ca0e6
Author: Ben-salem <emmanuel.eponse@facsciences-uy1.cm>
Date:   Mon Sep 21 21:41:13 2026 +0100

    feature: Commit initial comportant l'espace initial du travail
    
    Dans le but de faciliter le travail et le rendre harmonieux, j ai initialise les repertoires et les fichiers qu on va manipuler

diff --git a/include/header.h b/include/header.h
new file mode 100644

PS C:\Users\Russelle\Desktop\ani-2053_Demo4> git ls-tree -r --name-only HEAD
README.md
include/header.h
src/header.cpp
src/main.cpp
src/math.cpp
PS C:\Users\Russelle\Desktop\ani-2053_Demo4> Get-ChildItem -Recurse -File -Include *.cpp,*.h | Select-Object FullName

FullName                                                 
--------                                                 
C:\Users\Russelle\Desktop\ani-2053_Demo4\include\header.h
C:\Users\Russelle\Desktop\ani-2053_Demo4\src\header.cpp  
C:\Users\Russelle\Desktop\ani-2053_Demo4\src\main.cpp    
C:\Users\Russelle\Desktop\ani-2053_Demo4\src\math.cpp    


PS C:\Users\Russelle\Desktop\ani-2053_Demo4> 