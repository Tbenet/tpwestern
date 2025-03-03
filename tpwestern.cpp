// tpwestern.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <string>
#include "humain.h"
#include "Dame.h"
#include "cowboy.h"
#include "brigand.h"

using namespace std;

int main()
{
	cowboy lucky("Lucky Luke", "coca cola");
	Dame jenny("Jenny");
	brigand joe("Joe");

	lucky.sePresente();
	jenny.sePresente();

	joe.sePresente();
	joe.kidnappe(jenny);

	lucky.sePresente();
	joe.sePresente();
	lucky.tire(joe);
	lucky.emprisonne(joe);
	lucky.libere(jenny);
	
	









	
	
	/*cowboy lucky("Lucky Luck");
	Dame jenny("Jenny");

	lucky.sePresente();
	jenny.sePresente();

	jenny.changeDeRobe("verte");
	lucky.boit();
	jenny.boit();
	
	return 0;





	humain lucky("Lucky Luke", "coca");

	cout << "Une histoire sur " << lucky.getName() << endl;
	lucky.sePresente();
	lucky.boit();

	humain* joe = new humain("Joe");
	cout << "Une Histoire sur " << joe->getName() << endl;
	joe->setBoissonFav("whisky");
	joe->sePresente();
	joe->boit();

	Dame jenny("Jenny");

	jenny.sePresente();

	return 0;*/
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
