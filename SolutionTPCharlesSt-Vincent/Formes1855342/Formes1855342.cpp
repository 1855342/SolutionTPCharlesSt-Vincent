//But : .CPP pour les Formes et generateur aléatoire
//Auteur :Charles	St-Vincent
#include "Formes1855342.h"
#include "Menus1855342.h"
#include <iostream>
#include <string>

using namespace std;


void traiterRectangle(int& choixRemplissage)
{
    using namespace std;
    
    int hauteur;
    int largeur;


    //Demander le choix de remplissage
    afficherMenu2;

    //Demander à l'utillisateur les dimensions de la forme géométrique
    cout << "Entrez la hauteur du rectangle : ";
    cin >> hauteur;
    cout << endl;
    cout << "Entrez la largeur du rectangle : ";
    cin >> largeur;

    //On envoie la fonction qui dessine
    dessinerRectangle(choixRemplissage,hauteur, largeur );

  
}


void traiterCarre(int& choixRemplissage)
{
    using namespace std;

    int hauteur;
    //Demander le choix de remplissage
    afficherMenu2;

    //Demander à l'utillisateur l'hauteur de la forme géométrique
    cout << "Entrez la hauteur du Carre : ";
    cin >> hauteur;
    cout << endl;

    //On envoie la fonction qui dessine le carre avec le remplissage adéquat
    dessinerCarre(choixRemplissage, hauteur);
    
}

void traiterTriangle(int& choixRemplissage)
{
    using namespace std;
    int hauteur;
    //Demander le choix de remplissage
    afficherMenu2;

    //Demander à l'utillisateur l'hauteur de la forme géométrique
    cout << "Entrez la hauteur du triangle : ";
    cin >> hauteur;
    cout << endl;
    int nbalea = 0;
    nbalea = genererNombreAleatoire(nbalea);

    //La fonction genere un nombre aléatoire
    genererNombreAleatoire;

    if (nbalea == 1)
    {//On envoie la fonction qui dessine le triangle 1 avec le remplissage adéquat
        dessinerTriangle1(choixRemplissage, hauteur);
    }
    if (nbalea == 2)
    {//On envoie la fonction qui dessine le triangle 2 avec le remplissage adéquat
        dessinerTriangle2(choixRemplissage, hauteur);
    }
    if (nbalea == 3)
    {//On envoie la fonction qui dessine le triangle 3 avec le remplissage adéquat
        dessinerTriangle3(choixRemplissage, hauteur);
    }
    if (nbalea == 4)
    {//On envoie la fonction qui dessine le triangle 4 avec le remplissage adéquat
        dessinerTriangle4(choixRemplissage, hauteur);
    }
   
}

void traiterLosange(int& choixRemplissage)
{
    using namespace std;
    int hauteur;
    //Demander le choix de remplissage
    afficherMenu2;

    //Demander à l'utillisateur l'hauteur de la forme géométrique
    cout << "Entrez la hauteur du losange : ";
    cin >> hauteur;
    cout << endl;
    dessinerLosange(choixRemplissage, hauteur);

   
}




//les Fonctions ci dessous servent à dessiner les formes

void dessinerRectangle(int& choixRemplissage, int& hauteur,int& largeur) //Les fonctions sont de type void, car la fonction ne retourne pas des valeurs
{
    using namespace std;

    //on leur donne la valeur pour les mêmes variable avec le même nom dans une autre variable
    
    traiterRectangle(choixRemplissage);
    choixRemplissage = afficherMenu2(choixRemplissage);
 
    //imprime le choix plein
    if (afficherMenu2(choixRemplissage) == 1 )
    {
        for (int x = 0; x < hauteur; x++)                   //Imprime les lignes (l'axe des x)
        {
            for (int y = 0; y < largeur; y++)               //imprime les colonnes (l'axe des y)
            {
                if (x != 0 && x != (hauteur - 1))           //s'il ne s'agit pas de le premier x et non plus le premier y le programme rentre
                {
                    if (y == 0 || y == (largeur - 1))       
                        cout << "*";
                    else
                        cout << "#";
                }
                else                                         //s'il s'agit de le premier x et non plus la premier y le programme rentre
                    cout << "*";                           
            }
            cout << endl;
        }
        cout << endl;


    }
    //imprime le choix vide
    if (afficherMenu2(choixRemplissage) == 2)
    {
        for (int x = 0; x < hauteur; x++)                   //Imprime les lignes (l'axe des x)
        {
            for (int y = 0; y < largeur; y++)               //imprime les colonnes (l'axe des y)
            {
                if (x != 0 && x != (hauteur - 1))           //s'il ne s'agit pas de la premiere ligne et non plus la premiere colonne le programme rentre
                {
                    if (y == 0 || y == (largeur - 1))
                        cout << "*";
                    else
                        cout << " ";
                }
                else                                         //s'il s'agit de la premiere ligne et non plus la premiere colonne le programme rentre
                    cout << "*";
            }
            cout << endl;
        }
        cout << endl;

    }
    



    
}

void dessinerCarre(int& choixRemplissage, int& hauteur)
{
    using namespace std;
    

    //Ici on initialise les variables et on leur donne la valeur pour les mêmes variable avec le même nom dans une autre variable
    
    choixRemplissage = afficherMenu2(choixRemplissage);
    traiterCarre(choixRemplissage);
    choixRemplissage = afficherMenu2(choixRemplissage);
   

    //imprime le choix plein
    if (afficherMenu2(choixRemplissage) == 1)
    {
        for (int x = 0; x < hauteur; x++) {                  //Imprime les lignes (l'axe des x)

            for (int y = 0; y < hauteur; y++)                 //imprime les colonnes (l'axe des y)
            {
                if (x != 0 && x != (hauteur - 1))                            //s'il ne s'agit pas de la premiere ligne et non plus la premiere colonne le programme rentre
                {
                    if (y == 0 || y == (hauteur - 1))                       //s'il s'agit de la premiere ligne et non plus la premiere colonne le programme rentre
                        cout << "*";
                    else
                        cout << "#";
                }
                else
                    cout << "*";
            }
            cout << endl;
        }
        cout << endl;
    }
    //imprime le choix vide
    if (afficherMenu2(choixRemplissage) == 2)
    {
        for (int x = 0; x < hauteur; x++) {

            for (int y = 0; y < hauteur; y++)
            {
                if (x != 0 && x != (hauteur - 1))
                {
                    if (y == 0 || y == (hauteur - 1))
                        cout << "*";
                    else
                        cout << " ";
                }
                else
                    cout << '*';
            }
            cout << endl;
        }
        cout << endl;
    }
}

void dessinerLosange(int& choixRemplissage, int& hauteur)
{
    using namespace std;

    //Ici on initialise les variables et on leur donne la valeur pour les mêmes variable avec le même nom dans une autre variable
   
    traiterLosange(choixRemplissage);
    hauteur =  hauteur / 2;
    choixRemplissage = afficherMenu2(choixRemplissage);

    //imprime le choix plein
    if (afficherMenu2(choixRemplissage) == 1)
    {

        //LE Losange, a été créé en collant les 4 triangles en fesant des petites modifications
        for (int y = 0; y <= hauteur - 1; y++)                              //imprime les colonnes (l'axe des y)
        {
            for (int x = 0; x < hauteur; x++)                               //Imprime les lignes (l'axe des x)
            {
                if (x < hauteur - y)
                {
                    cout << " ";
                }
                else
                {
                    if (y == 1 || x == hauteur - y - 1 || hauteur - x == y) //
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << "#";
                    }

                }

            }for (int x = 0; x < y - 1; x++)                                //Imprime les lignes (l'axe des x)
            {
                if (y == hauteur / 2 + x - 3)
                {
                    cout << "*";
                }
                else
                {
                    cout << "#";
                }

            }
            cout << endl;
                
        }for (int y = hauteur; y >= 1; y--)                                 //imprime les colonnes (l'axe des y)
        {
            for (int x = 0; x < hauteur; x++)                               //Imprime les lignes (l'axe des x)
            {
                if (x < hauteur - y)                                        //
                {
                    cout << " ";
                }
                else
                {
                    if (hauteur - y == x)                                   //
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << "#";
                    }
                }


            } for (int x = 0; x < y - 1; x++)                               //Imprime les lignes (l'axe des x)
            {
                if (y == hauteur / 2 - (-x) - 3)                            
                {
                    cout << "*";
                }
                else
                {
                    cout << "#";
                }

            }cout << endl;
        }

    }
    //imprime le choix vide
    if (afficherMenu2(choixRemplissage) == 2)
    {
        for (int y = 0; y <= hauteur - 1; y++)                             //imprime les colonnes (l'axe des y)
        {
            for (int x = 0; x < hauteur; x++)                              //Imprime les lignes (l'axe des x)
            {
                if (x < hauteur - y)
                {
                    cout << " ";
                }
                else
                {
                    if (y == 1 || x == hauteur - y - 1 || hauteur - x == y)//
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }

                }

            }for (int x = 0; x < y - 1; x++)                                //Imprime les lignes (l'axe des x)
            {
                if (y == hauteur / 2 + x - 3)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }

            }
            cout << endl;

        }for (int y = hauteur; y >= 1; y--)                                     //imprime les colonnes (l'axe des y)
        {
            for (int x = 0; x < hauteur; x++)                                   //Imprime les lignes (l'axe des x)
            {
                if (x < hauteur - y)                                               //L'intérieur 
                {
                    cout << " ";
                }
                else
                {
                    if (hauteur - y == x)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }


            } for (int x = 0; x < y - 1; x++)                                    //Imprime les lignes (l'axe des x)                         
            {
                if (y == hauteur / 2 - (-x) - 3)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }

            }cout << endl;
        }
    }
    
}


void dessinerTriangle1(int& choixRemplissage, int& hauteur)
{
    using namespace std;

    //Ici on initialise les variables et on leur donne la valeur pour les mêmes variable avec le même nom dans une autre variable
 
    traiterTriangle(choixRemplissage);
    choixRemplissage = afficherMenu2(choixRemplissage);
    
    //imprime le choix plein
    if (afficherMenu2(choixRemplissage) == 1)
    {
        for (int y = 0; y <= hauteur; y++)
        {
            for (int x = 0; x <= y; x++)                //Imprime les lignes (l'axe des x)
            {
                if (y == 1 || x == y || x == hauteur || y == hauteur || x == 0)
                {
                    cout << "*";
                }
                else
                {
                    cout << "#";
                }

            }

            cout << endl;
        }
    }
    //imprime le choix vide
    if (afficherMenu2(choixRemplissage) == 2)
    {
        for (int y = 0; y <= hauteur; y++)
        {
            for (int x = 0; x <= y; x++)                //Imprime les lignes (l'axe des x)
            {
                if (y == 1 || x == y || x == hauteur || y == hauteur || x == 0)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }

            }

            cout << endl;
        }

    }

}





void dessinerTriangle2(int& choixRemplissage, int& hauteur)
{
    using namespace std;

    //Ici on initialise les variables et on leur donne la valeur pour les mêmes variable avec le même nom dans une autre variable
    
    traiterTriangle(choixRemplissage);
    choixRemplissage = afficherMenu2(choixRemplissage);
   
    if (afficherMenu2(choixRemplissage) == 1)
    {
        for (int y = 0; y < hauteur; y++)
        {
            for (int x = 0; x < hauteur - y; x++)               //Imprime les lignes (l'axe des x)
            {
                if (y == 0 || x == 0 || x == hauteur - y - 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << "#";
                }

            }
            cout << endl;
        }
    }
    if (afficherMenu2(choixRemplissage) == 2)
    {
        for (int y = 0; y < hauteur; y++)
        {
            for (int x = 0; x < hauteur - y; x++)               //Imprime les lignes (l'axe des x)
            {
                if (y == 0 || x == 0 || x == hauteur - y - 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }

            }
            cout << endl;
        }
    }
    


}

void dessinerTriangle3(int& choixRemplissage, int& hauteur)
{
    using namespace std;

    //Ici on initialise les variables et on leur donne la valeur pour les mêmes variable avec le même nom dans une autre variable
 
  
    traiterTriangle(choixRemplissage);
    choixRemplissage = afficherMenu2(choixRemplissage);
   
    if (afficherMenu2(choixRemplissage) == 1)   
    {
        for (int x = 0; x < hauteur; x++)                       //Imprime les lignes (l'axe des x)
        {
            for (int y = 0; y < hauteur; y++)
            {
                if (x < hauteur - y)                    //Ici la figure commence pas 0 à l'axe des y
                {
                    cout << " ";
                }
                else
                {
                    if (x == hauteur - 1 || y == hauteur - 1 || hauteur == y + x)       //ici les conditions détermine le centre de la formes afin de pouvoir mettre que le contour ou 
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << "#";
                    }
                }

            }
            cout << endl;
        }
    }
    if (afficherMenu2(choixRemplissage) == 1)
    {
        for (int x = 0; x < hauteur; x++)
        {
            for (int y = 0; y < hauteur; y++)
            {
                if (x < hauteur - y)
                {
                    cout << " ";
                }
                else
                {
                    if (x == hauteur - 1 || y == hauteur - 1 || hauteur == y + x)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }

            }
            cout << endl;
        }
    }
}

void dessinerTriangle4(int& choixRemplissage, int& hauteur)
{
    using namespace std;

    //Ici on initialise les variables et on leur donne la valeur pour les mêmes variable avec le même nom dans une autre variable
   
   
    traiterTriangle(choixRemplissage);
  
    choixRemplissage = afficherMenu2(choixRemplissage);
    if (afficherMenu2(choixRemplissage) == 1)
    {
        for (int y = hauteur; y >= 0; y--)
        {
            for (int x = 0; x < hauteur; x++)
            {
                if (x < hauteur - y)
                {
                    cout << " ";
                }
                else
                {
                    if (y == hauteur || x == hauteur - 1 || hauteur - y == x)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << "#";
                    }
                }
            } cout << endl;
        }
    }
    if (afficherMenu2(choixRemplissage) == 2)
    {
        for (int y = hauteur; y >= 0; y--)
        {
            for (int x = 0; x < hauteur; x++)
            {
                if (x < hauteur - y)
                {
                    cout << " ";
                }
                else
                {
                    if (y == hauteur || x == hauteur - 1 || hauteur - y == x)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
            } cout << endl;
        }
    }
    
    
}




//Fonction pour generer un nombre de 1 à 4
int genererNombreAleatoire(int& nbalea)      
{
    using namespace std;
        nbalea = rand() % 4 + 1; //la variable nbalea a une chance sur 4 d'avoir la valeur 1, 2, 3, 4,
      
    
    return nbalea;
}
