#include "Dame.h"
#include <iostream>
#include <string>
using namespace std;

Dame::Dame(const string nom, const string boissonfav, const string couleurRobe)
	:humain(nom, boissonfav), couleurRobe(couleurRobe),etat("libre")
{
}

string Dame::getNom() const
{
	return "Mise " + nom;
}

string Dame::getEtat() const
{
	return etat;
}

void Dame::sePresente() const
{
	cout << "(" << nom << ") -- " << "Bonjour, je suis " << getNom() << " et j'ai une jolie robe " << couleurRobe << endl;
}

void Dame::changeDeRobe(const string couleurRobe)
{
	this->couleurRobe = couleurRobe;
	cout << "(" << nom << ") --" << "Regarde ma nouvelle robe " << couleurRobe << " !" << endl;
}
