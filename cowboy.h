#pragma once
#include <string>
#include "humain.h"
using namespace std;
class Dame;
class brigand;


class cowboy : public humain
{
private:
	string adjectif;
	int popularite;
public:
	cowboy(const string nom = "", const string boissonfav = "whisky", const string adjectif = "vaillant");
	string getPopularite();
	void setPopularite(const int popilarite);
	string getAdjectif();
	void setAdjectif(const string adjectif);
	void sePresente();
	void inrementePopularite();
	void decrementePopularite();
	void tire(const brigand& brigand);
	void emprisonne(brigand& brigand);
	void libere(Dame& dame);
};

