//
// Created by jacun on 28/05/2020.
//
#include <iostream>
#include "Torre.h"
using namespace std;
void Torre::setNameT(std::string n) {
    nameT=n;

}
string Torre::getNameT() {
    return nameT;
}
void Torre::llenarTorre() {
    piso = new Piso[20];
    for(int i=0;i<20;i++){
        string nm = "Piso "+to_string(i+1);
        piso[i].setNameP(nm);
        cout << piso[i].getNameP()<<endl;
        piso[i].llenarPiso();
    }
}
int Torre::totalT() {
    int aux=0;
    for(int i=0;i<20;i++){
        aux+=piso[i].totalP();
    }
    return aux;
}
int Torre::PromHabitP() {
    int aux=0;
    for(int i=0;i<20;i++){
        aux+=piso[i].totalP();
    }
    return aux/20;
}