#pragma once
#include <string>

using namespace std;
class humain
{
protected:
	string nom;
	string boissonFavorite;

public:
	humain(const string nom="", const string boissonFavorite="eau");
	string getBoissonFav() const;
	string getNom();
	void sePresente();
	void boit();
	void setBoissonFav(const string nouvelleBoissonFav);
};

