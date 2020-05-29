//
// Created by jacun on 28/05/2020.
//

#include <iostream>
#include "Piso.h"
using namespace std;
void Piso::llenarPiso() {
    depas = new Departamentos[6];
    for(int i=0;i<6;i++){
        string nm = "Departamento "+to_string(i+1);
        depas[i].setNombreD(nm);
        cout << "Habitantes del Departamento: "<<i+1<<": ";
        int h;
        cin >> h;
        depas[i].setHabitantes(h);
    }
}
int Piso::PromHabitD() {
    int aux=0;
    for(int i=0;i<6;i++){
        aux+=depas[i].gethabitantes();
    }
    return  aux/6;
}
void Piso::setNameP(std::string n) {
    nameP=n;
}

string Piso::getNameP() {

    return nameP;
}

int Piso::totalP() {
    int aux=0;
    for(int i=0;i<6;i++){
        aux+=depas[i].gethabitantes();
    }
    return aux;
}