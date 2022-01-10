#include "personnel.h"

    Personnel::Personnel(string nom, float indice)
        :Employe(nom , indice)
    {
        this->perso = vector<Employe*>();
    }

    void Personnel::add_perso(Employe* E) const
    {
        this->perso.push_back(E);

    }

    float Personnel::sommesal() const
    {
        float s = 0;
        for (int i = 0; i < this->perso.size(); i++)
        {
            s += this->perso[i]->calculsal();

        }
        return s;
    }
  Personnel::~Personnel() 
    {
    this->perso.clear();
}
