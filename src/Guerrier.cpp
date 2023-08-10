#include "../include/Guerrier.hpp"
#include <string>
#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void Guerrier::sePresenter() const
{
   Personnage::sePresenter();
    cout << "Je suis un Guerrier redoutable." << endl;
}