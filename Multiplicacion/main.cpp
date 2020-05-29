#include <iostream>
#include "Multiplicacion.h"
using namespace std;
int main() {
    int f1,c1,f2,c2;
    cout << "Matriz 1 \nFilas: ";
    cin >> f1;
    cout << "Columnas: ";
    cin >> c1;
    int ** m1 = Multiplicacion::CrearMatriz(f1,c1);
    Multiplicacion::Print(f1,c1,m1);
    cout << "Matriz 2 \nFilas: ";
    cin >> f2;
    cout << "Columnas: ";
    cin >> c2;
    int ** m2 = Multiplicacion::CrearMatriz(f2,c2);
    Multiplicacion::Print(f2,c2,m2);

    Multiplicacion::MultMat(m1,m2,f1,c1,f2,c2);

    return 0;
}
