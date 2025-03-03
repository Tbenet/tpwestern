#include "Dame.h"
#include "brigand.h"
#include "cowboy.h"
#include <iostream>
#include <string>
using namespace std;

Dame::Dame(const string nom, const string boissonfav, const string couleurRobe)
	:humain(nom, boissonfav), couleurRobe(couleurRobe),etat("libre")
{
}

string Dame::getNom() const
{
	return "Miss " + nom;
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

void Dame::seFaitKidnapper()
{
	hurle();
	cout << "(" << nom << ") --" << "Au secours, je me fait kidnapper !" << endl;
}

void Dame::seFaitLiberer(cowboy& cowboy)
{
	remercie(cowboy);
}

void Dame::hurle()
{
	cout << "** " << getNom() << " hurle" << endl;
}

void Dame::remercie(cowboy& heros)
{
	cout << "(" << nom << ") --" << "Merci " << heros.getNom() << ", je suis enfin libre !" << endl;
}
