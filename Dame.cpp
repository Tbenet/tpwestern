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

void Dame::seFaitKidnapper()
{
	hurle;
	cout << "(" << nom << ") --" << "Au secours, je me fait kidnapper !" << endl;
}

void Dame::seFaitLiberer(cowboy& cowboy)
{
	cout << "(" << nom << ") --" << "Merci " << cowboy.getNom << ", je suis enfin libre !" << endl;
}

void Dame::hurle()
{
	cout << "** " << nom << " hurle" << endl;
}

/*void Dame::remercie(const cowboy& heros)
{

}*/
