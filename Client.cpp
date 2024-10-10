// Programmeur: Dylane
// Date: 8 octobre 2024
// Bût: Classe Coin

#include "Coin.h"
#include <iostream>
#include <ctime>

using namespace std;

int main() {

    Coin c1;
    time_t start = 0;
    time_t end = 0;
    int countHeads = 0;
    int countTails = 0;

    // Test avec générateur aléatoire standard
    start = time(nullptr); // Début de la mesure de temps
    for (int i = 0; i < 10000000; i++) {
        c1.flip(); // Utiliser le générateur aléatoire standard
        c1.isHeads() ? countHeads++ : countTails++;
    }
    end = time(nullptr); // Fin de la mesure de temps

    cout << "Random C++ \n"
        << "Après 10 000 000 flips\n"
        << "heads : " << countHeads << endl
        << "tails : " << countTails << endl
        << "difference : " << abs(countHeads - countTails) << endl
        << "Temps d'exécution : " << difftime(end, start) << " secondes" << endl << endl;

    // Réinitialisation des compteurs pour Mersenne Twister
    countHeads = 0;
    countTails = 0;

    // Test avec Mersenne Twister
    start = time(nullptr); // Début de la mesure de temps
    for (int i = 0; i < 10000000; i++) {
        c1.flipMT(); // Utiliser Mersenne Twister
        c1.isHeads() ? countHeads++ : countTails++;
    }
    end = time(nullptr); // Fin de la mesure de temps

    cout << "Random Mersenne Twister \n"
        << "Après 10 000 000 flips\n"
        << "heads : " << countHeads << endl
        << "tails : " << countTails << endl
        << "difference : " << abs(countHeads - countTails) << endl
        << "Temps d'exécution : " << difftime(end, start) << " secondes" << endl << endl;

    return 0;
}
