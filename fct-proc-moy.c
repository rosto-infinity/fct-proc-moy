// Fonction pour calculer la moyenne d'un tableau
Fonction CalculerMoyenne(tableau: Tableau de Réels, taille: Entier) -> Réel
    Somme <- 0
    Pour i de 0 à taille - 1 faire
        Somme <- Somme + tableau[i]
    Fin Pour
    Si taille > 0 alors
        Retourner Somme / taille
    Sinon
        Retourner 0 // Éviter la division par zéro
    Fin Si
Fin Fonction

// Procédure principale
Procédure Main
    Déclarer Riri[43] de Réels
    Déclarer Fifi[5] de Réels
    Déclarer Loulou[k] de Réels
    Déclarer M1, M2, M3 de Réels

    // Initialiser les tableaux avec des valeurs (exemple)
    // Remplir Riri, Fifi, et Loulou avec des valeurs appropriées

    M1 <- CalculerMoyenne(Riri, 43)
    M2 <- CalculerMoyenne(Fifi, 5)
    M3 <- CalculerMoyenne(Loulou, k)

    // Afficher les résultats
    Afficher "Moyenne de Riri : ", M1
    Afficher "Moyenne de Fifi : ", M2
    Afficher "Moyenne de Loulou : ", M3
Fin Procédure
