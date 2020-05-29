#include <iostream>
#include "Pascal.h"
using namespace std;
int main() {
    int fil;
    cout<<"Cuantas Filas desea Mostrar: "<<endl;
    cin >> fil;
    Pascal::triangPascal(fil);
    return 0;
}
