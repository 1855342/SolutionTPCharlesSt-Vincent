// But :	   Programme qui dessine des formes aux dimensions diverses, pleines ou vides, selon les choix que l'utilisateur fait dans les menus	   
// Auteur :	   Karine Moreau
// Modifi� par : Charles St-Vincent
// Date :      6 Octobre 2020
// Note : mon menu ne fonctionne pas, je ne comprend vraiment pas comment r�soudre se probl�me, j'esp�re qu'� la correction je vais voir plus clair.

#include <iostream>		// Biblioth�que qui fournit des fonctions pour permettre la communication entre le programme et l'utilisateur
#include <time.h>		// Biblioth�que qui fournit des fonctions bas�es sur les dates et heures
#include "Menus1855342.h"		// Biblioth�que du programmeur rassemblant les fonctions permettant la gestion des menus et la validation des choix fait dans ces menus
#include "Formes1855342.h"		// Biblioth�que du programmeur offrant des fonctions permettant de dessiner diff�rentes formes, pleines ou vides
using namespace std;

int main()
{
   // D�finition des constantes 
   const int QUITTER   = 5;     // Le choix maximum dans le menu 1. Pourrait changer si le programmeur ajoute une forme supppl�mentaire
   const int RETOUR	   = 3;     // Le choix maximum dans le menu 2. Pourrait changer si le programmeur ajoute une option supppl�mentaire

   const int RECTANGLE = 1;     // Pour faciliter la lecture du code dans le switch
   const int TRIANGLE  = 2;
   const int CARRE     = 3;
   const int LOSANGE   = 4;

	// D�finition des variables	
	int choixForme;
	int choixRemplissage;
	int nbalea;				//nombre al�atoire
	int MenuChoix;

	//srand(time(NULL));	            // Permet d'initialiser le random seed
	setlocale(LC_ALL,"");            // Permet de g�rer les caract�res accentu�s

   // Afficher le menu des formes et lire un choix valide 
	choixForme = validerMenu(1 /* choix du menu des formes */, QUITTER /* Nombres d'options au menu */);
	
   // Tant que l'utilisateur ne veut pas quitter
	choixForme = 0;
	while (choixForme != QUITTER)
	{
		afficherMenu1(choixForme);
	  // Afficher le menu du remplissage et lire un choix valide
      choixRemplissage = validerMenu(2 /* Menu du remplissage */, RETOUR/* Nombres d'options au menu */);
	 
		choixRemplissage = 0;
		afficherMenu2(choixRemplissage);


		// Si l'utilisateur n'est pas revenu au menu principal
      if (choixRemplissage != RETOUR)
	   {
			// Ici, l'utilisateur a fait le choix d'une forme et du remplissage, il nous reste � traiter et dessiner la forme
		  
		  //On initialise la variable dans le main on lui donnant la valeur qui �tre g�n�rer al�atoirement entre 1 � 4
		  
		 

			switch (choixForme)
			{
				case RECTANGLE :
               // Traiter forme demande les dimensions de la forme, affiche la phrase de pr�sentation de la forme et appelle la fonction
               // dessinant la forme
					traiterRectangle (choixRemplissage);
               break;
			    case TRIANGLE :
					traiterTriangle (choixRemplissage);
					break;
				case CARRE :
					traiterCarre(choixRemplissage);
					break;

				case LOSANGE :
					traiterLosange (choixRemplissage);
				
					break;
			} // Fin du switch
	   }// fin du if

      // On pr�sente de nouveau le menu principal des choix des formes et on lit le choix de l'utilisateur
	  choixForme = validerMenu(1 /* Menu des formes*/,  QUITTER/* Nombres d'options au menu*/);
	  
	} // Fin du while (choixForme != iQUITTER)
	return 0;

}


