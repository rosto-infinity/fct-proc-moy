Dans cet exemple, on aborde une situation où une application nécessite d'effacer l'écran et d'afficher un logo à plusieurs reprises. Bien que cela puisse sembler nécessiter une fonction, le problème se pose quant à la valeur de retour de cette fonction, car ces actions ne produisent pas de résultats stockables dans des variables.

Analyse
Actions sans valeur de retour :

Les opérations comme effacer l'écran ou afficher un logo ne retournent pas de valeur. Elles sont des actions à effectuer, et non des calculs qui produisent un résultat.
Utilisation de procédures :

Dans ce cas, il est plus approprié de créer une procédure au lieu d'une fonction. Les procédures sont conçues pour exécuter des actions sans nécessiter de valeur de retour.
Exemple d'Algorithme
Voici comment vous pourriez structurer cela en algorithme :

Copier
// Procédure pour effacer l'écran et afficher un logo
Procédure EffacerEtAfficherLogo
    EffacerLÉcran()
    AfficherLogo()
Fin Procédure

// Procédure principale
Procédure Main
    // Appels multiples à la procédure
    Pour i de 1 à 5 faire // Exemple : appeler 5 fois
        EffacerEtAfficherLogo()
    Fin Pour
Fin Procédure
Explication
Procédure EffacerEtAfficherLogo :

Effectue deux actions : effacer l'écran et afficher un logo.
Ne retourne aucune valeur, car son but est d'exécuter des commandes.
Procédure Main :

Appelle la procédure EffacerEtAfficherLogo plusieurs fois, démontrant comment réutiliser le code sans répéter les instructions.
Conclusion
Cette approche permet de garder le code propre et modulaire, tout en évitant les répétitions inutiles. Les procédures sont idéales pour des actions répétitives qui n'ont pas besoin de retourner des valeurs.