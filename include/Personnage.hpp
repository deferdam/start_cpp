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
    Guerrier lancelot("Laucelot du lac");
    Personnage(Personnage const& autre);
    Personnage(std::string nomArme, int degatsArme);
    ~Personnage();
    void afficherEtat();
    void recevoirDegats(int nbDegats);
    void coupDePoing(Personnage &cible) const;
    void attaquer(Personnage &cible);
    void boirePotionDeVie(int quantitePotion);
    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
    bool estVivant();
    void sePresenter() const;

    protected: //Privé, mais accessible aux éléments enfants (Guerrier, Magicien)
    int m_vie;
    std::string m_nom;

    private:

    int m_mana;
    Arme m_arme;
};

#endif