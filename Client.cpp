// Programmeur: Dylane 
// Date: 8 octobre 2024
// B�t: Classe Produit

#include "Coin.h" 

using namespace std;

int main() {
	Coin c1;
	time_t start;
	time_t end;
	int countHeads = 0;
	int countTails = 0;

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

	//// R�initialiser les compteurs
	//countHeads = 0;
	//countTails = 0;

	cout << "*** La premiere cent a avoir 3 heads de suite (Boucle de 8 fois) ***\n";

	// Boucle qui r�p�te 8 fois
	for (int i = 0; i < 8; i++) {
		//cout << "Iteration " << (i + 1) << ":\n";
		countHeads = 0; // R�initialiser le compteur pour chaque boucle

		// Chercher 3 "heads" cons�cutifs dans chaque it�ration
	
			c1.flip(); // Utiliser Mersenne Twister
			c1.afficher();

			if (c1.isHeads()) {
				countHeads++; // Augmenter le compteur de heads
			}
			else {
				countHeads = 0; // R�initialiser si c'est tails
			}
		
	}
			if(countHeads == 3) cout << "La cent1 est la gagnante avec 3 heads de suite � l'iteration \n";
	return 0;
}
