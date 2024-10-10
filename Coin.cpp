// Programmeur: Dylane 
// Date: 8 octobre 2024
// Bût: Classe Produit

#include "Coin.h"

Coin::Coin()
{
	srand(time(NULL)); // Seed
	face = true;
}

Coin::~Coin()
{
}

void Coin::flip()
{
	face = rand() % 2;
}

bool Coin::getFace() const
{
	return face;
}

void Coin::afficher() const
{
	//if (face)cout << "Heads";
	//else cout << "Tails";

	cout << (face ? "Heads" : "Tails") << endl;
}

bool Coin::isHeads() const
{
	return face;
}

void Coin::flipMT()
{
	face = randMT.randInt(1);
}
