#pragma once
#include "EMPLOYE.h"
class Personnel :
    public Employe
{
private:
    vector<Employe*> perso;

public:
        Personnel(string nom, float indice);
        void add_perso(Employe* E) const ;
        float sommesal() const ;
        ~Personnel() ;
      
};

