#include "brigand.h"
#include <iostream>
#include <string>
using namespace std;

brigand::brigand(const string nom, const string boissFavorite, const string comportement)
	:humain(nom, boissFavorite), comportement(comportement)
{
}
