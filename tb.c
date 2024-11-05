Résumé
Dans ce deuxième exemple, l'application nécessite de saisir plusieurs tableaux d'entiers, chacun étant différent. Bien qu'il soit tentant de créer une seule fonction pour gérer toutes ces saisies, le problème réside dans le fait qu'une fonction ne peut renvoyer qu'une seule valeur, ce qui complique le retour d'un tableau, qui est une collection de valeurs.

Analyse
Saisie de plusieurs tableaux :

Chaque tableau d'entiers doit être saisi séparément, et il peut être nécessaire de retourner ce tableau à la procédure appelante.
Retourner un tableau :

Les fonctions peuvent être conçues pour retourner des tableaux, mais cela nécessite souvent des structures de données spéciales ou des références, en fonction du langage de programmation utilisé.
Exemple d'Algorithme
Voici comment structurer cela en algorithme :

Copier
// Fonction pour saisir un tableau d'entiers
Fonction SaisirTableau(taille: Entier) -> Tableau d'Entiers
    Déclarer tableau[taille] de Entiers
    Pour i de 0 à taille - 1 faire
        Afficher "Saisir l'élément ", i + 1, ": "
        Lire tableau[i]
    Fin Pour
    Retourner tableau
Fin Fonction

// Procédure principale
Procédure Main
    Déclarer T1, T2, T3 de Tableau d'Entiers

    T1 <- SaisirTableau(5) // Saisie du premier tableau de 5 éléments
    T2 <- SaisirTableau(3) // Saisie du deuxième tableau de 3 éléments
    T3 <- SaisirTableau(4) // Saisie du troisième tableau de 4 éléments

    // Afficher les tableaux saisis
    Afficher "Tableau 1 : ", T1
    Afficher "Tableau 2 : ", T2
    Afficher "Tableau 3 : ", T3
Fin Procédure
Explication
Fonction SaisirTableau :

Prend en paramètre la taille du tableau.
Saisit les éléments du tableau d'entiers et les stocke dans une structure de données.
Retourne le tableau rempli à la procédure appelante.
Procédure Main :

Déclare plusieurs tableaux (T1, T2, T3).
Appelle la fonction SaisirTableau pour chaque tableau avec des tailles différentes.
Affiche les tableaux saisis.
Conclusion
Cette approche permet de gérer la saisie de plusieurs tableaux d'entiers de manière efficace. En utilisant une fonction pour retourner un tableau, on peut facilement récupérer et manipuler les données saisies tout en maintenant le code clair et organisé.