#include "../include/Personnage.hpp"
#include "../include/Arme.hpp"
#include "../include/Duree.hpp"
#include "../include/Guerrier.hpp"
#include "../include/Magicien.hpp"
#include "../include/Vehicule.hpp"

using namespace std;

void presenter(Vehicule const& v)  //Présente le véhicule passé en argument
{
    v.affiche();
}

int main()
{
    Vehicule *v(0);
    v = new Voiture;
    //On crée une Voiture et on met son adresse dans un pointeur de Vehicule

    v->affiche();  //On affiche "Ceci est une voiture."

    delete v;      //Et on détruit la voiture

    return 0;
}

// int main(int ac, const char *av[])
// {
//     //Création des personnages
//     Personnage david, goliath("Epee aiguisee", 20);
    
//     david.sePresenter();
 
//     //Au combat !
//     goliath.attaquer(david);
//     david.boirePotionDeVie(20);
//     goliath.attaquer(david);
//     david.attaquer(goliath);
//     goliath.changerArme("Double hache tranchante veneneuse de la mort", 40);
//     goliath.attaquer(david);
 
//     //Temps mort ! Voyons voir la vie de chacun…
//     cout << "David" << endl;
//     david.afficherEtat();
//     cout << endl << "Goliath" << endl;
//     goliath.afficherEtat();
//     Duree duree1(0, 10, 28), duree2(0, 10, 29);

//     if (duree1 < duree2)
//         cout << "le 1 plus petit que le 2";
//     else
//         cout << "le 2 plus petit que le 1";
 
//     return 0;
// }
