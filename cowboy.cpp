#include "cowboy.h"
#include "brigand.h"
#include "Dame.h"
#include <iostream>
#include <string>
using namespace std;

cowboy::cowboy(const string nom, const string boissonfav, const string adjectif)
	:humain(nom, boissonfav), adjectif(adjectif), popularite(0)
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

/*void cowboy::inrementePopularite()
{
	
}

void cowboy::decrementePopularite()
{

}*/

void cowboy::tire(const brigand& brigand)
{
	cout << "** Le " << adjectif << " " << nom << " tire sur " << brigand.getNom() << endl;
}

void cowboy::emprisonne(brigand& brigand)
{
	cout << "(" << nom << ") -- " << "Prend ça rascal !" << endl;
	brigand.seFaitEmprisonner();
}

void cowboy::libere(Dame& dame)
{
	cout << "** Le " << adjectif << " " << nom << " libère " << dame.getNom() << endl;
	dame.seFaitLiberer();
}
