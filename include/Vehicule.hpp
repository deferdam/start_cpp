#ifndef DEF_VEHICULE
#define DEF_VEHICULE

#include <string>
#include <iostream>
#include <vector>
#include <fstream>

class Vehicule
{
    public:
    Vehicule(int prix);           
    virtual void affiche() const;
    virtual int nbrRoues() const = 0;  //Affiche le nombre de roues du véhicule
    virtual ~Vehicule();         

    protected:
    int m_prix;
};

class Voiture : public Vehicule
{
    public:
    Voiture(int prix, int portes);
    virtual void affiche() const;
    virtual int nbrRoues() const;  //Affiche le nombre de roues de la voiture
    virtual ~Voiture();

    private:
    int m_portes;
};

class Moto : public Vehicule 
{
    public:
    Moto(int prix, double vitesseMax);
    //Construit une moto d'un prix donné et ayant une certaine vitesse maximale
    virtual void affiche() const;
    virtual ~Moto();
 
    private:
    double m_vitesse;
};

#endif