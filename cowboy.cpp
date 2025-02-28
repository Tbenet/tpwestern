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

void cowboy::setAdjectif(const string adjectif)
{

}


void cowboy::setPopularite(const int popilarite)
{

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
	cout << "** Le " << adjectif << " " << nom << " tire sur " << brigand.getNom << endl;
}

void cowboy::emprisonne(brigand& brigand)
{
	cout << "(" << nom << ") -- " << "Prend ça rascal !" << endl;
	cout << brigand.seFaitEmprisonner << endl;
}

void cowboy::libere(Dame& dame)
{
	cout << "** Le " << adjectif << " " << nom << " libère " << dame.getNom << endl;
	cout << dame.seFaitLiberer << endl;
}
