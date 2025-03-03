#pragma once
#include <string>
#include "humain.h"
using namespace std;
class Dame;
class cowboy;

class brigand: public humain
{
private:
	string comportement;
	int nbDamesEnlevees;
	int recompense;
	bool enPrison;
public:
	brigand(const string nom = "", const string boissFavorite = "tord-boyaux", const string comportement = "mechant");
	string getComportement() const;
	int getNbDamesEnlevees() const;
	int getRecompense() const;
	string getNom()const;
	void sePresente() const;
	void kidnappe(Dame& dame);
	void seFaitEmprisonner(cowboy& cowboy);
	void augmenteRecompense(const int prix = 100);
	void diminueRecompense(const int prix = 100);
	bool estEnPrison() const;
};

