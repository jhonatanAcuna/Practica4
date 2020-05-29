#include <iostream>
//#include "Torre.h"
#include "Complejo.h"
using namespace std;

int main() {
    Complejo * complejo = new Complejo[1];
    cout << "Bienvenido al Complejo de Vivienda San Pedro" << endl;
    cout << "Ingrese la informacion del Complejo"<<endl;
    complejo[0].llenarTorre();
    cout
            << "1: Total de habitantes del Complejo\n2: Promedio de habitantes por piso de cada Torre\n3: Promedio de habitantes por Torre\n4: Salir"
            << endl;
    int opcion;
    cin >> opcion;
    while (opcion != 4) {
        if (opcion == 1) {
            cout << "El total de Habitantes del Complejo es: "<<complejo[0].totalC()<<endl;
        }else if (opcion == 2) {
            complejo[0].PromPisT();
        }
        else if (opcion == 3) {
            cout << "El Promedio de Habitantes por Torre es: "<< complejo[0].PromHabitT()<<endl;
        }
        cout
                << "1: Total de habitantes del Complejo\n2: Promedio de habitantes por piso de cada Torre\n3: Promedio de habitantes por Torre\n4: Salir"
                << endl;
        cin >> opcion;
    }





   /* Torre *torre = new Torre[2];
    for(int i=0;i<2;i++){
        cout << "Torre"<<i+1;
        torre[i].llenarTorre();
    }*/
}
