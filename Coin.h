// Programmeur: Dylane 
// Date: 8 octobre 2024
// B�t: Classe Produit

#pragma once
#include <iostream>
#include <ctime>
#include <cmath>  
#include "MersenneTwister.h"

using namespace std;

class Coin
{
private:
	bool face;
	MTRand randMT;

public:
	Coin();
	~Coin();
	void flip();
	bool getFace()const;
	void afficher()const;
	bool isHeads() const;

	void flipMT();

};

