#ifndef DEF_ARME
#define DEF_ARME

#include <string>
#include <iostream>
#include <vector>
#include <fstream>

 
class Arme
{
    public:
 
    Arme();
    std::string getNom() const { return m_nom; }
    int getDegats() const { return m_degats; }
    void setDegats(int degat) { m_degats = degat; }
    void setNom(std::string nom) { m_nom = nom; }
    Arme(std::string nom, int degats);
    void changer(std::string nom, int degats);
    void afficher() const;
 
    private:
 
    std::string m_nom;
    int m_degats;

};
 
#endif