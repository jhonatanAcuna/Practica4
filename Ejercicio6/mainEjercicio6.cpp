#include <iostream>
#include "Ejercicio6.h"
using namespace std;
int main() {
    int ** matrizT;

    int fila,columna,opcion;
    cout << "Numero de Filas: ";
    cin >> fila;
    cout << "Numero de columnas: ";
    cin >> columna;
    int **matriz = new int*[fila];
    for(int i=0;i<fila;i++){
        matriz[i] = new int [columna];
    }
    for(int i=0;i<fila;i++){
        for(int j=0;j<columna;j++){
            cout << "Valor de posicion "<< i+1 << j+1<<": ";
            cin >>matriz[i][j];
        }
    }
    Ejercicio6::Print(matriz,fila,columna);
    cout << "1: Transpuesta \t2:Comprobar Simetria\t3:¿Triangular Superior?\t4:¿Triangular Inferior? \t5:Salir"<< endl;
    cin >> opcion;
    while(opcion!=5){
        if(opcion==1){
            matrizT=Ejercicio6::Transpuesta(matriz,fila,columna);
            Ejercicio6::Print(matrizT,columna,fila);
            cout << "1: Transpuesta \t2:Comprobar Simetria\t3:¿Triangular Superior?\t4:¿Triangular Inferior? \t5:Salir"<< endl;
            cin >> opcion;
        } else if(opcion==2){
            if(fila!=columna){
                cout << "No es una matriz cuadra"<<endl;
            }else{
                bool ver=Ejercicio6::Simetrica(matriz,matrizT,fila);
                if(ver == true){
                    cout<< "Simetrica"<<endl;
                } else if( ver == false){
                    cout<< "No Simetrica"<<endl;
                }

            }
            cout << "1: Transpuesta \t2:Comprobar Simetria\t3:¿Triangular Superior?\t4:¿Triangular Inferior? \t5:Salir"<< endl;
            cin >> opcion;

        }else if(opcion==3){
            if(fila!=columna){
                cout << "No es una matriz cuadra"<<endl;
            }else{
                bool ver = Ejercicio6::TriangularS(matriz,fila);
                if(ver == true){
                    cout<< "Triangular Superio"<<endl;
                } else if( ver == false){
                    cout<< "No Triangular Superior"<<endl;
                }
            }
            cout << "1: Transpuesta \t2:Comprobar Simetria\t3:¿Triangular Superior?\t4:¿Triangular Inferior? \t5:Salir"<< endl;
            cin >> opcion;
        } else if( opcion==4){
            if(fila!=columna){
                cout << "No es una matriz cuadra"<<endl;
            }else{
                bool ver = Ejercicio6::TriangularI(matriz,fila);
                if(ver == true){
                    cout<< "Triangular Inferior"<<endl;
                } else if( ver == false){
                    cout<< "No Triangular Inferior"<<endl;
                }
            }
            cout << "1: Transpuesta \t2:Comprobar Simetria\t3:¿Triangular Superior?\t4:¿Triangular Inferior? \t5:Salir"<< endl;
            cin >> opcion;
        }
    }


    return 0;
}
