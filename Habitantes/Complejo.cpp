//
// Created by jacun on 28/05/2020.
//
#include <iostream>
#include "Complejo.h"
using namespace std;
void Complejo::llenarTorre() {
    torre = new Torre[7];
    for(int i=0;i<7;i++){
        cout << "Torre"<<i+1<<endl;
        torre[i].llenarTorre();
    }
}
int Complejo::totalC() {
    int aux=0;
    for(int i=0;i<7;i++){
        aux+=torre[i].totalT();
    }
    return aux;
}
int Complejo::PromHabitT() {
    int aux=0;
    for(int i=0;i<7;i++){
        aux+=torre[i].totalT();
    }
    return aux/7;
}
void Complejo::PromPisT() {
    for(int i=0;i<7;i++){
        cout <<"Torre "<<i+1 <<torre[i].PromHabitP()<<endl;
    }
}