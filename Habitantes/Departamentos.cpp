//
// Created by jacun on 28/05/2020.
//

#include "Departamentos.h"
#include <iostream>
using namespace std;
int Departamentos::gethabitantes() {
    return hbt;
}
void Departamentos::setNombreD(std::string n) {
    name = n;
}
std::string Departamentos::getNombreD() {
    return name;
}
void Departamentos::setHabitantes(int n) {
    hbt=n;
}
void Departamentos::MostrarDepa() {
    cout << name <<"\tHabitantes: "<<hbt<<endl;
}