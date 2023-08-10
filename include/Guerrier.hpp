#ifndef DEF_GUERRIER
#define DEF_GUERRIER
 
#include <iostream>
#include <string>
#include "Personnage.hpp"
//Ne pas oublier d'inclure Personnage.hpp pour pouvoir en hériter !
 
class Guerrier : public Personnage
//Signifie : créer une classe Guerrier qui hérite de la classe Personnage
{
    public:
        void frapperAvecUnMarteau() const;
        void sePresenter() const;
        //Méthode qui ne concerne que les guerriers
 
};
 
#endif