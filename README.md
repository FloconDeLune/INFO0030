# INFO0030

/** envoyer des donnée sur ta branche */
git add --all 		(tout les fichier)
git add mon_fichier 	(un seul fichier)
git commit -am "User_name:Description du commit"
git status	
git push ma_branche 	(ou simplement git push)
git status 

et voilà :D 

//Commande git à connaitre 

/** Configure git */
git config --global user.name "Ton_user_name"
git config --global user.email "Ton_email"
git config --global user.password "Ton_mot_de_passe"

/** Clone ton répertoire */
git clone https://github.com/FloconDeLune/INFO0030

/** Aller dans le répertoire */
cd C:\Users\tim04\Desktop\ULG\INFO0030\Projet\INFO0030  (ton path biensur)

/** initialiser git */
git init

/** extraire tous les fichiers du dépôt distant qui ne sont pas actuellement dans le répertoire de travail local */
git fetch origin

/** Pour fusionner toutes les modifications présentes sur le dépôt distant dans le répertoire de travail local */
git pull

/** ajouter des fichiers à l’index. Par exemple, la commande suivante ajoutera un fichier nommé temp.txt dans le répertoire local de l’index */
git add temp.txt

/** ajouter tout les fichier à l'index */
git add --all

/** permet de valider les modifications apportées au HEAD */
git commit -am "User_name:description_du_commit"

/** affiche la liste des fichiers modifiés ainsi que les fichiers qui doivent encore être ajoutés ou validés */
git status

/** Un simple push envoie les modifications locales apportées à la branche principale */
git push origin master

/** créé une branche à partir du master */
git branch le_nom_de_la_branche
git checkout -b le_nom_de_la_branche			(l'un ou l'autre)

/** Changer de branche */
git checkout la_branche_cible

/** supprimer une branche */
git branch -d le_nom_de_la_branche

/**  fusionner une branche dans la branche active */
git merge le_nom_de_la_branche

/** permet de lister les conflits actuel */
git diff

/** afficher les conflits entre les branches à fusionner avant de les fusionner */
git diff branche-source branche-cible

/** supprimer des fichiers de l’index et du répertoire de travail */
git rm nom_fichier.txt

/**  rechercher dans les arbres de contenu des expressions et / ou des mots. Par exemple, pour rechercher www.hostinger.com dans tous les fichiers */
git grep "www.hostinger.com"
