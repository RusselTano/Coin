// Programmeur: Dylane 
// Date: 8 octobre 2024
// Bût: Classe Produit

#include "Coin.h" 

using namespace std;

int main() {
	//Coin c1;
	//time_t start;
	//time_t end;
	//int countHeads = 0;
	//int countTails = 0;

	//// Mesurer le temps pour le premier générateur aléatoire
	//start = time(nullptr);
	//for (int i = 0; i < 10000000; i++) {
	//	c1.flip(); // Utiliser le générateur aléatoire standard
	//	c1.isHeads() ? countHeads++ : countTails++;
	//}
	//end = time(nullptr);

	//cout << "Random C++ \n"
	//	<< "Apres 10 000 000 flips\n"
	//	<< "heads : " << countHeads << endl
	//	<< "tails : " << countTails << endl
	//	<< "difference : " << abs(countHeads - countTails)
	//	<< "\nTemps d'execution : " << difftime(end, start) << " secondes" << endl << endl;

	//// Réinitialiser les compteurs pour Mersenne Twister
	//countHeads = 0;
	//countTails = 0;

	//// Mesurer le temps pour Mersenne Twister
	//start = time(nullptr);
	//for (int i = 0; i < 10000000; i++) {
	//	c1.flipMT(); // Utiliser Mersenne Twister
	//	c1.isHeads() ? countHeads++ : countTails++;
	//}
	//end = time(nullptr);

	//cout << "Random Mersenne Twister \n"
	//	<< "Apres 10 000 000 flips\n"
	//	<< "heads : " << countHeads << endl
	//	<< "tails : " << countTails << endl
	//	<< "difference : " << abs(countHeads - countTails)
	//	<< "\nTemps d'execution : " << difftime(end, start) << " secondes" << endl << endl;


	//================================================================================

	cout << "*** La premiere cent à avoir 3 heads de suite (Boucle de 8 fois) ***\n";

	Coin c1;
	Coin c2;

	string winner;

	int countHeads1 = 0;
	int countHeads2 = 0;

	// Boucle qui répète 8 fois
	for (int i = 0; i < 8; i++) {
		// Faire un flip pour chaque cent
		c1.flipMT();
		c2.flipMT();

		// Afficher le résultat des flips
		cout << "cent1 : "; c1.afficher();
		cout << " \t\tcent2 : "; c2.afficher();
		cout << endl;

		// Mise à jour du compteur pour cent1
		if (c1.isHeads()) {
			countHeads1++;
		}
		else {
			countHeads1 = 0; // Réinitialiser si ce n'est pas heads
		}

		// Mise à jour du compteur pour cent2
		if (c2.isHeads()) {
			countHeads2++;
		}
		else {
			countHeads2 = 0; // Réinitialiser si ce n'est pas heads
		}

		// Vérifier si l'une des cent a eu 3 heads de suite
		if (countHeads1 == 3) {
			if (winner == "cent2") winner = "cent2";
			winner = "cent1";
		}
		else if (countHeads2 == 3) {
			if (winner == "cent1") winner = "cent1";
			winner = "cent2";
		}
	}

	if (winner == "cent1") cout << "La cent1 est la gagnante\n";
	else if(winner == "cent2") cout << "La cent2 est la gagnante\n";



	return 0;
}
