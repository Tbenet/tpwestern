#include "brigand.h"
#include "Dame.h"
#include "cowboy.h"
#include <iostream>
#include <string>
using namespace std;



brigand::brigand(const string nom, const string boissFavorite, const string comportement)
	:humain(nom, boissFavorite), comportement(comportement)
{
}

string brigand::getComportement() const
{
	return comportement;
}

int brigand::getNbDamesEnlevees() const
{
	return nbDamesEnlevees;
}

int brigand::getRecompense() const
{
	return recompense;
}

string brigand::getNom() const
{
	return nom;
}

void brigand::sePresente() const
{
	cout << "(" << nom << ") -- " << "Bonjour, je suis " << getNom() << "le " << getComportement() << " et j'aime le " << getBoissonFav() << "." << endl;
}

void brigand::kidnappe(Dame& dame)
{
	if (!estEnPrison()) 
	{
		dame.seFaitKidnapper();
		nbDamesEnlevees++;
		augmenteRecompense();
		cout << "(" << nom << ") -- " << "AH AH !" << dame.getNom() << ", tu es mienne désormais !" << endl;
	}
}

void brigand::seFaitEmprisonner(cowboy& cowboy)
{
	if (!estEnPrison())
	{
		enPrison = true;
		cout << "(" << nom << ") -- " << "Damned, je suis fait ! " << cowboy.getNom << ", tu m'as eu !" << endl;
	}
}

void brigand::augmenteRecompense(const int prix)
{
	if (prix > 0)
		this->recompense + prix;
}

void brigand::diminueRecompense(const int prix)
{
	if (prix > 0 && prix <= recompense)
		this->recompense -= prix; 
}

bool brigand::estEnPrison() const
{
	return enPrison;
}
