#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

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
    void recevoirDegats(int nbDegats);
    void attaquer(Personnage &cible);
    void boirePotionDeVie(int quantitePotion);
    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
    bool estVivant();

    private:

    int m_vie;
    int m_mana;
    std::string m_nomArme; //Pas de using namespace std, il faut donc mettre std:: devant string
    int m_degatsArme;
};

#endif