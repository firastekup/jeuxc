#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char hasard() {
    // Génération aléatoire de R, P ou C
    srand(time(NULL));
    int random = rand() % 3;

    if (random == 0) {
        return 'R';
    } else if (random == 1) {
        return 'P';
    } else {
        return 'C';
    }
}

char comparaison(char joueur, char ordinateur) {
    // Logique de comparaison
    if (joueur == ordinateur) {
        return 'E';  // Égalité
    } else if ((joueur == 'R' && ordinateur == 'C') ||
               (joueur == 'P' && ordinateur == 'R') ||
               (joueur == 'C' && ordinateur == 'P')) {
        return 'G';  // Le joueur gagne
    } else {
        return 'O';  // L'ordinateur gagne
    }
}

int main() {
    char choix_joueur;
    char choix_ordinateur;

    printf("Choisissez R (Roche), P (Papier) ou C (Ciseaux) : ");
    scanf(" %c", &choix_joueur);  // Notez l'espace avant %c pour ignorer les espaces et les retours à la ligne.

    choix_ordinateur = hasard();

    printf("L'ordinateur a choisi : %c\n", choix_ordinateur);

    char resultat = comparaison(choix_joueur, choix_ordinateur);

    if (resultat == 'E') {
        printf("Égalité !\n");
    } else if (resultat == 'G') {
        printf("Vous avez gagné !\n");
    } else {
        printf("L'ordinateur a gagné !\n");
    }

    return 0;
}
