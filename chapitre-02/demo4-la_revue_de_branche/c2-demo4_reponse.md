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