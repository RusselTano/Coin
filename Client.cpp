// Programmeur: Dylane 
// Date: 8 octobre 2024
// Bût: Classe Produit

#include "Coin.h" 

using namespace std;

bool updateHeadsCount(Coin& coin, int& countHeads);

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

	Coin c1;
	Coin c2;

	int countHeads1 = 0;
	int countHeads2 = 0;
	int winner = 0; // 0: Pas de gagnant, 1: cent1, 2: cent2
	int i = 0;

	cout << "*** La premiere cent à avoir 3 heads de suite ***\n";
	while (winner == 0) {
		c1.flipMT();
		c2.flipMT();

		cout << i + 1 << "  cent1 : "; c1.afficher();
		cout << " \t\tcent2 : "; c2.afficher();
		cout << endl;

		if (updateHeadsCount(c1, countHeads1)) {
			winner = 1; // cent1 a gagné
		}
		else if (updateHeadsCount(c2, countHeads2)) {
			winner = 2; // cent2 a gagné
		}

		i++;

	}
		cout << "La " << (winner == 1 ? "cent1" : "cent2") << " est la gagnante\n"
			 << "Apres " << i << " flips\n";

	system("pause");
	return 0;
}


bool updateHeadsCount(Coin& coin, int& countHeads) {
	if (coin.isHeads()) {
		countHeads++;
	}
	else {
		countHeads = 0; // Réinitialiser si c'est tails
	}
	return countHeads == 3; // Retourne true si 3 heads consécutifs
}