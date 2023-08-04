#ifndef DEF_ARME
#define DEF_ARME

#include "Personnage.hpp"
 
class Arme
{
    public:
 
    Arme();
    Arme(int degats);
    Arme(std::string nom, int degats);
    void changer(std::string nom, int degats);
    void afficher() const;
 
    private:
 
    std::string m_nom;
    int m_degats;
};
 
#endif