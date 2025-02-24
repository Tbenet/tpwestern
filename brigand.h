#pragma once
#include <string>
#include "humain.h"
using namespace std;

class brigand: public humain
{
private:
	string comportement;
	int nbDamesEnlevees;
	int recompense;
	bool enPrison;
public:
	brigand(const string nom = "", const string boissFavorite = "tord-boyaux", const string comportement = "mechant");
	string getComportement();
	int getNbDamesEnlevees();
	int getRecompense();
	void sePresente();
	void kidnappe(Dame& dame);
	void augmenteRecompense(const int prix = 100);
	void diminueRecompense(const int prix = 100);

};

