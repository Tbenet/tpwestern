#include "humain.h"
#include <iostream>

humain::humain(const string nom, const string boissonFavorite)
	:nom(nom), boissonFavorite(boissonFavorite)
{
	//humain lucky("Lucky Luke", "coca");
}

string humain::getBoissonFav() const
{
	return boissonFavorite;
}

void humain::setBoissonFav(const string nouvelleBoissonFav)
{
	if (!nouvelleBoissonFav.empty())
		boissonFavorite = nouvelleBoissonFav;
}

string humain::getNom()
{
	return nom ;
}

void humain::sePresente()
{
	cout << "(" << nom << ") --" << "Bonjour, je suis " << nom << " et j'aime le" << boissonFavorite << endl;
}

void humain::boit()
{
	cout << "(" << nom << ") --" << "Ah ! un bon verre de " << boissonFavorite << " ! GLOUPS" << endl;
}
