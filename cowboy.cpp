#include "cowboy.h"
#include "brigand.h"
#include "Dame.h"
#include <iostream>
#include <string>
using namespace std;

cowboy::cowboy(const string nom, const string boissonfav, const string adjectif)
	: humain(nom, boissonfav), adjectif(adjectif), popularite(0)
{
}

string cowboy::getNom()
{
	return nom;
}

int cowboy::getPopularite()
{
	return popularite;
}

string cowboy::getAdjectif()
{
	return adjectif;
}

void cowboy::setAdjectif(const string adjectif_)
{
	if (!adjectif_.empty())
		adjectif = adjectif_;
}

void cowboy::setPopularite(const int popularite_)
{
	if (popularite_ >= 0)
		popularite = popularite_;
}

void cowboy::sePresente()
{
	cout << "(" << nom << ") -- " << "Bonjour, je suis le " << adjectif << " " << getNom() << " et j'aime le " << boissonFavorite << endl;
}

/*void cowboy::incrementePopularite()
{
	popularite++;  // Augmente la popularité de 1
}

void cowboy::decrementePopularite()
{
	if (popularite > 0)  // Empêche de descendre en dessous de 0
		popularite--;
}*/

void cowboy::tire(const brigand& brigand)
{
	cout << "** Le " << adjectif << " " << nom << " tire sur " << brigand.getNom() << endl;
}

void cowboy::emprisonne(brigand& brigand)
{
	cout << "(" << nom << ") -- " << "Prend ca rascal !" << endl;
	brigand.seFaitEmprisonner(*this);
}

void cowboy::libere(Dame& dame)
{
	cout << "** Le " << adjectif << " " << nom << " libere " << dame.getNom() << endl;
	dame.seFaitLiberer(*this);
}
