// Programmeur: Dylane 
// Date: 8 octobre 2024
// B�t: Classe Produit

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
	if (face)cout << "Heads\n";
	else cout << "Tails\n";
}

bool Coin::isHeads() const
{
	return face;
}

void Coin::flipMT()
{
	randMT.randInt(1);
}
