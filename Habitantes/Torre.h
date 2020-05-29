//
// Created by jacun on 28/05/2020.
//

#ifndef HABITANTES_TORRE_H
#define HABITANTES_TORRE_H
#include "Piso.h"

class Torre {
public:
    void llenarTorre();
    Piso *piso;
    std::string nameT;
    int PromHabitP();//promedio total de Piso /20 porque son 20 pisos
    int totalT();//total de habitantes xTorre
    void setNameT(std::string n);
    std::string getNameT();

};


#endif //HABITANTES_TORRE_H
