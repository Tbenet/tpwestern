#pragma once
#include <string>
#include "humain.h"
using namespace std;

class Dame : public humain
{
private:
	string couleurRobe;
	string etat;
public:
	Dame(const string nom = "", const string boissonfav = "lait", const string couleurRobe = "blanche");
	string getNom()const;
	string getEtat()const;
	void sePresente()const;
	void changeDeRobe(const string couleurRobe);
	void seFaitKidnapper();
	void seFaitLiberer(cowboy& cowboy);

	void hurle();
	void remercie(const cowboy& heros);
};

