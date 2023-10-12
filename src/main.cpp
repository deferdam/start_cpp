// #include "../include/Personnage.hpp"
// #include "../include/Arme.hpp"
// #include "../include/Duree.hpp"
// #include "../include/Guerrier.hpp"
// #include "../include/Magicien.hpp"
// #include "../include/Vehicule.hpp"

// using namespace std;

// void presenter(Vehicule const& v)  //Présente le véhicule passé en argument
// {
//     v.affiche();
// }

// int main()
// {
//     Vehicule *v(0);
//     v = new Voiture;
//     //On crée une Voiture et on met son adresse dans un pointeur de Vehicule

//     v->affiche();  //On affiche "Ceci est une voiture."

//     delete v;      //Et on détruit la voiture

//     return 0;
// }

// int main(int ac, const char *av[])
// {
    // vector<Vehicule*> listeVehicules;

    // listeVehicules.push_back(new Voiture(15000, 5));
    // listeVehicules.push_back(new Voiture(12000, 3));
    // listeVehicules.push_back(new Moto(2000, 212.5));  

    // listeVehicules[0]->affiche();
    // //On affiche les informations de la première voiture
    
    // listeVehicules[2]->affiche();
    // //Et celles de la moto
   
    // for(int i(0); i<listeVehicules.size(); ++i)
    // {
    //     delete listeVehicules[i];  //On libère la i-ème case mémoire allouée
    //     listeVehicules[i] = 0;  //On met le pointeur à 0 pour éviter les soucis
    // }

    // return 0;

    
    //Création des personnages
    // Personnage david, goliath("Epee aiguisee", 20);
    
    // david.sePresenter();
 
    // //Au combat !
    // goliath.attaquer(david);
    // david.boirePotionDeVie(20);
    // goliath.attaquer(david);
    // david.attaquer(goliath);
    // goliath.changerArme("Double hache tranchante veneneuse de la mort", 40);
    // goliath.attaquer(david);
 
    // //Temps mort ! Voyons voir la vie de chacun…
    // cout << "David" << endl;
    // david.afficherEtat();
    // cout << endl << "Goliath" << endl;
    // goliath.afficherEtat();
    // Duree duree1(0, 10, 28), duree2(0, 10, 29);

    // if (duree1 < duree2)
    //     cout << "le 1 plus petit que le 2";
    // else
    //     cout << "le 2 plus petit que le 1";
 
    // return 0;
// }

// #include <iostream>
// #include <cctype>
// #include <string>
// using namespace std;

// int main()
// {
//     cout << "Entrez une phrase : " << endl;
//     string phrase;
//     getline(cin, phrase);

//     //On parcourt la chaîne pour la convertir en majuscules
//     for(int i(0); i<phrase.size(); ++i)
//     {
//          phrase[i] = toupper(phrase[i]);
//     }

//     cout << "Votre phrase en majuscules est : " << phrase << endl;
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> tab(5,4); //Un tableau contenant 5 entiers dont la valeur est 4
//     tab.pop_back();      //On supprime la dernière case du tableau.
//     tab.push_back(6);    //On ajoute un 6 à la fin du tableau.
     
//     for(int i(0); i<tab.size(); ++i) //On utilise size() pour connaître le nombre d'éléments dans le vector
//         cout << tab[i] << endl;      //On utilise les crochets [] pour accéder  aux éléments

//     return 0;
// }