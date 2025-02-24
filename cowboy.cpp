#include "cowboy.h"
#include <iostream>
#include <string>
using namespace std;

cowboy::cowboy(const string nom, const string boissonfav, const string adjectif)
	:humain(nom, boissonfav), adjectif(adjectif), popularite("0")
{
}

string cowboy::getNom()
{
	return nom;
}

string cowboy::getAdjectif()
{
	return adjectif;
}

string cowboy::getPopularite()
{
	return popularite;
}

void cowboy::sePresente()
{
	cout << "(" << nom << ") -- " << "Bonjour, je suis le " << adjectif << " " << getNom() << " et j'aime le " << boissonFavorite << endl;
}
