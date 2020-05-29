//
// Created by jacun on 28/05/2020.
//

#ifndef HABITANTES_PISO_H
#define HABITANTES_PISO_H
#include "Departamentos.h"

class Piso {
public:
    void llenarPiso();
    Departamentos *depas;
    std::string nameP;
    int PromHabitD();//Promedio de habitantes por Piso /6 porque son 6 depas
    void setNameP(std::string n);
    std::string getNameP();
    int totalP();//total de habitantes xPiso
};


#endif //HABITANTES_PISO_H
