// Programmeur: Dylane 
// Date: 8 octobre 2024
// B�t: Classe Produit

#include "Coin.h" 

using namespace std;

int main() {
	//Coin c1;
	//time_t start;
	//time_t end;
	//int countHeads = 0;
	//int countTails = 0;

	//// Mesurer le temps pour le premier g�n�rateur al�atoire
	//start = time(nullptr);
	//for (int i = 0; i < 10000000; i++) {
	//	c1.flip(); // Utiliser le g�n�rateur al�atoire standard
	//	c1.isHeads() ? countHeads++ : countTails++;
	//}
	//end = time(nullptr);

	//cout << "Random C++ \n"
	//	<< "Apres 10 000 000 flips\n"
	//	<< "heads : " << countHeads << endl
	//	<< "tails : " << countTails << endl
	//	<< "difference : " << abs(countHeads - countTails)
	//	<< "\nTemps d'execution : " << difftime(end, start) << " secondes" << endl << endl;

	//// R�initialiser les compteurs pour Mersenne Twister
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

	cout << "*** La premiere cent � avoir 3 heads de suite (Boucle de 8 fois) ***\n";

	Coin c1;
	Coin c2;

	string winner;

	int countHeads1 = 0;
	int countHeads2 = 0;

	// Boucle qui r�p�te 8 fois
	for (int i = 0; i < 8; i++) {
		// Faire un flip pour chaque cent
		c1.flipMT();
		c2.flipMT();

		// Afficher le r�sultat des flips
		cout << "cent1 : "; c1.afficher();
		cout << " \t\tcent2 : "; c2.afficher();
		cout << endl;

		// Mise � jour du compteur pour cent1
		if (c1.isHeads()) {
			countHeads1++;
		}
		else {
			countHeads1 = 0; // R�initialiser si ce n'est pas heads
		}

		// Mise � jour du compteur pour cent2
		if (c2.isHeads()) {
			countHeads2++;
		}
		else {
			countHeads2 = 0; // R�initialiser si ce n'est pas heads
		}

		// V�rifier si l'une des cent a eu 3 heads de suite
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
