//
// Created by jacun on 28/05/2020.
//

#ifndef HABITANTES_DEPARTAMENTOS_H
#define HABITANTES_DEPARTAMENTOS_H


#include <string>

class Departamentos {


public:
    void setNombreD(std::string n);
    std::string name;
    int hbt;
    int gethabitantes();
    void setHabitantes(int n);
    void MostrarDepa();
    std::string getNombreD();
};


#endif //HABITANTES_DEPARTAMENTOS_H
