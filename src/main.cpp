#include "../include/Personnage.hpp"
#include "../include/Arme.hpp"
#include "../include/Duree.hpp"

using namespace std;

int main(int ac, const char *av[])
{
    //Création des personnages
    Personnage david, goliath("Epee aiguisee", 20);
 
    //Au combat !
    goliath.attaquer(david);
    david.boirePotionDeVie(20);
    goliath.attaquer(david);
    david.attaquer(goliath);
    goliath.changerArme("Double hache tranchante veneneuse de la mort", 40);
    goliath.attaquer(david);
 
    //Temps mort ! Voyons voir la vie de chacun…
    cout << "David" << endl;
    david.afficherEtat();
    cout << endl << "Goliath" << endl;
    goliath.afficherEtat();
    Duree duree1(0, 10, 28), duree2(0, 10, 29);

    if (duree1 < duree2)
        cout << "le 1 plus petit que le 2";
    else
        cout << "le 2 plus petit que le 1";
 
    return 0;
}
