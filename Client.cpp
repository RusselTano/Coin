// Programmeur: Dylane 
// Date: 8 octobre 2024
// Bût: Classe Coin

#include "Coin.h"

int main() {

	Coin c1;
	time_t start = 0;
	time_t end = 0;
	int countHeads = 0;
	int countTails = 0;

	for (int i = 0; i < 10000000; i++)
	{
		//c1.afficher();
		start = time(nullptr);
		c1.flip();
		end = time(nullptr); //temps apres execution
		//if (c1.isHeads()) countHeads++;
		//else countTails++;
		c1.isHeads() ? countHeads++ : countTails++;
	}

	int diff = 0;

	//diff = (countHeads > countTails) ? countHeads - countTails : countTails - countHeads;

	cout << "Random c++ \n"
		<< "Apres 100000 flips\n"
		<< "heads : " << countHeads << endl
		<< "tails : " << countTails << endl
		<< "difference : " << abs(countHeads - countTails) 
		<< "En "<< difftime(end,start)  << " secondes" << endl << endl;
		//<< "difference : " << diff << endl << endl;	cout << "Random c++ \n"

	for (int i = 0; i < 10000000; i++)
	{
		//c1.afficher();
		start = time(nullptr);
		c1.flipMT();
		end = time(nullptr); //temps apres execution
		//if (c1.isHeads()) countHeads++;
		//else countTails++;
		c1.isHeads() ? countHeads++ : countTails++;
	}
	cout << "Random Mersenne Twister \n"
		<< "Apres 100000 flips\n"
		<< "heads : " << countHeads << endl
		<< "tails : " << countTails << endl
		<< "difference : " << abs(countHeads - countTails) 
		<< "En " << difftime(end, start) << " secondes" << endl << endl;
	//<< "difference : " << diff << endl << endl;

	system("pause");

}