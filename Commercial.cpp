#include "Commercial.h"
#include <iostream>
Commercial::Commercial(string nom, float indice)
    :Employe(nom, indice)
{
    this->ventes = 0;
    this->inter = 0;
}

void Commercial::ventesdumois(int v, int inte)
{
    this->ventes = v;
    this->inter = inte;
}


float Commercial::calculsalairecommerciaux()
{
    float sal;
    return sal = this->Employe::calcul_sal() + this->inter;


    return sal ;
}
Commercial::~Commercial() {
    std::cout<<"destructeur de la classe Commercial "<<std::endl;
}
