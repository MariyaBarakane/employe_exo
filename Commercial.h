#pragma once
#include "EMPLOYE.h"
class Commercial :
    public Employe
{
private:
    int ventes;
    int inter;

public:
    Commercial(string nom, float indice);
    void ventesdumois(int v, int inte);
    float calculsalairecommerciaux();
    ~Commercial() 

}
