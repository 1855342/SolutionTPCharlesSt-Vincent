//But : .CPP pour les Menus
//Auteur :Charles	St-Vincent



#include "Menus1855342.h"
#include "Formes1855342.h"
#include <iostream>
#include <string>




int afficherMenu1(int& choixForme)
{
	using namespace std;

	
	//Initialisation des constantes

	const int QUITTER = 5;     // Le choix maximum dans le menu 1. Pourrait changer si le programmeur ajoute une forme suppplémentaire
		// Le choix maximum dans le menu 2. Pourrait changer si le programmeur ajoute une option suppplémentaire

	const int RECTANGLE = 1;     // Pour faciliter la lecture du code dans le switch
	const int TRIANGLE = 2;
	const int CARRE = 3;
	const int LOSANGE = 4;

	//Affichage du menu avec les choix possibles
	cout << "Choisisez une forme géométrique : " << endl;
	cout << "1. Rectangle " << endl;
	cout << "2. Triangle " << endl;
	cout << "3. Carre " << endl;
	cout << "4. Losange " << endl;
	cout << "5. QUITTER " << endl;
	cout << "Votre choix ---> " ;
	cin >> choixForme;
	return choixForme;
}

int afficherMenu2(int& choixRemplissage)
{
	using namespace std;

	//Initialisation des constantes
	const int Plein = 1;
	const int Vide = 2;
	const int RETOUR = 3;

	
	//Affichage du menu avec les choix possibles
	cout << "Choisissez le remplissage : " << endl;
	cout << "1. Plein" << endl;
	cout << "2. Vide" << endl;
	cout << "3. RETOUR" << endl;
	cout << "Votre choix ---> " << choixRemplissage << endl;
	//Clear la console
	system("cls");
	return choixRemplissage;
}

int validerMenu(int MenuChoix, int quitterRetour)
{
	//Je ne sais pas si j'ai fait les directives adéquates, je me suis basé sur la fonction validerMEnu du main
	using namespace std;


	//On entre dans le if si l'utilisateur est rendu au menu1
	if (MenuChoix ==1)
	{
		int choixForme;
		afficherMenu1(choixForme);
		//system("pause");
		//La fonction verifierEntier vérifie s'il s'agit d'un entier
		choixForme = VerifierEntier();
		
		//Boucle pour la possibilité que l'utilisateur entre un chiffre qui n'est pas un choix
		while (choixForme < 1 || choixForme > quitterRetour)
		{
			//on avertit que l'utillisateur a entrer un nombre débordant 1 à Quitter
			cout << "Erreur: Votre choix doit être entre 1 et " << quitterRetour << endl;
			system("pause");
			//Le programme Affiche le menu pour que l'utillisateur réessai d'entrer 
			afficherMenu1;
			//La fonction verifierEntier vérifie s'il s'agit d'un entier
			
			//Clear la console
			system("cls");
		}

	}
	//On entre dans le if si l'utilisateur est rendu au menu2
	if (MenuChoix ==2)
	{
		int choixRemplissage;
		afficherMenu2;
		//La fonction verifierEntier vérifie s'il s'agit d'un entier
		choixRemplissage = VerifierEntier();

		//Boucle pour la possibilité que l'utilisateur entre un chiffre qui n'est pas un choix
		while (choixRemplissage < 1)
		{
			//on avertit que l'utillisateur a entrer un nombre débordant 1 à Retour
			cout << "Erreur: Votre choix doit être entre 1 et " << quitterRetour << endl;
			system("pause");
			//Le programme Affiche le menu pour que l'utillisateur réessai d'entrer 
			afficherMenu1;
			//La fonction verifierEntier vérifie s'il s'agit d'un entier
			choixRemplissage = VerifierEntier();
			//Clear la console
			system("cls");
		}
	}
	//Clear la console
	system("cls");
	return MenuChoix, quitterRetour;
}

int VerifierEntier()
{
	using namespace std;

	string clavier;

	getline(cin, clavier, '\n');		// getline permet de lire et nettoyer toute la mémoire du clavier





	//La boucle while s'assure qu'il s'agit d'un entier et non une lettre 
	while ((clavier.empty() || ((clavier.front() < '0' || clavier.front() > '9')
		&& (clavier.length() <= 1 || clavier.front() != '-' || clavier.at(1) < '0' || clavier.at(1) > '9'))))
	{
		cout << "Erreur : Vous devez taper des chiffres pour entrer un nombre entier." << endl;
		cout << "Veuillez entrer un nombre entier : ";
		getline(cin, clavier, '\n');
	}


	// Ici, quand on sort de la boucle, on sait que clavier contient des chiffres, on peut convertir
	return stoi(clavier);
	
}
