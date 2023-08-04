#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include "Arme.hpp"
#include <string>
#include <iostream>
#include <vector>
#include <fstream>

class Personnage
{
    public:

    Personnage();
    Personnage(Personnage const& autre);
    Personnage(std::string nomArme, int degatsArme);
    ~Personnage();
    void afficherEtat();
    void recevoirDegats(int nbDegats);
    void attaquer(Personnage &cible);
    void boirePotionDeVie(int quantitePotion);
    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
    bool estVivant();

    private:

    int m_vie;
    int m_mana;
    Arme m_arme;
};

#endif