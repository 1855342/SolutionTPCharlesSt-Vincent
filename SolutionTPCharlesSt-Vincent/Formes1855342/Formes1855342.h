//But: Mes fonctions qui concernent Dessiner les formes, Le choix remplissage, generer un nimbre aleatoire
//Auteur: CHarles St-VIncent
//Date : 2020-10-30


#pragma once

// Fonction qui demande les dimensions de la forme et appelle les fonctions qui dessinent les formes
void traiterRectangle(int& choixRemplissage);
void traiterCarre(int& choixRemplissage);
void traiterTriangle(int& choixRemplissage);
void traiterLosange(int& choixRemplissage);

// Fonction qui dessine un rectangle ou un carré dont la hauteur, la largeur et le mode de remplissage sont passés en paramètre.
void dessinerRectangle(int& choixRemplissage, int& hauteur, int& largeur);
void dessinerCarre(int& choixRemplissage, int& hauteur);
void dessinerLosange(int& choixRemplissage, int& hauteur);   // Fonction qui dessine un losange dont la hauteur et le mode de remplissage sont passés en paramètre.


void dessinerTriangle1(int& choixRemplissage, int& hauteur); // Fonction qui dessine un triangle dans la position 1 dont la hauteur et le mode de remplissage sont passés en paramètre.
void dessinerTriangle2(int& choixRemplissage, int& hauteur); // Fonction qui dessine un triangle dans la position 2 dont la hauteur et le mode de remplissage sont passés en paramètre.
void dessinerTriangle3(int& choixRemplissage, int& hauteur); // Fonction qui dessine un triangle dans la position 3 dont la hauteur et le mode de remplissage sont passés en paramètre.
void dessinerTriangle4(int& choixRemplissage, int& hauteur); // Fonction qui dessine un triangle dans la position 4 dont la hauteur et le mode de remplissage sont passés en paramètre.

int genererNombreAleatoire(int& nbalea); // Fonction qui retourne un nombre aléatoire compris entre min et max passés en paramètre.