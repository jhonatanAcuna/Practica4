#include <iostream>
#include "Matriz.h"
using namespace std;
int main() {
    int fil,col;
    cout << "Filas: "<<endl;
    cin >> fil;
    cout << "Columnas: "<<endl;
    cin >> col;
    int **matriz = Matriz::LLenado(fil,col);
    Matriz::Print(matriz,fil,col);
    Matriz::Silla(matriz,fil,col);
    return 0;
}
