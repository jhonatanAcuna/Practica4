#include <iostream>
#include "Ahorcado.h"
using namespace std;
int main() {
    string palabra;
    cout << "Palabra Secreta: "<<endl;
    cin >> palabra;
    Ahorcado::Juego(palabra);
    return 0;
}
