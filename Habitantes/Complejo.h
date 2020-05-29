//
// Created by jacun on 28/05/2020.
//

#ifndef HABITANTES_COMPLEJO_H
#define HABITANTES_COMPLEJO_H


#include "Torre.h"

class Complejo {
public:
    Torre *torre;
    void llenarTorre();
    int totalC();
    int PromHabitT();
    void PromPisT();
};


#endif //HABITANTES_COMPLEJO_H
