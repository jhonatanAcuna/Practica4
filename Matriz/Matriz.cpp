//
// Created by jacun on 27/05/2020.
//

#include "Matriz.h"
#include <iostream>
using namespace std;
int ** Matriz::LLenado(int fil, int col) {
    int **matriz= new int*[fil];
    for(int i=0;i<fil;i++){
        matriz[i] = new int [col];
    }
    for(int i=0;i<fil;i++){
        for(int j=0;j<col;j++){
            cout << "Valor de posicion "<< i+1 << j+1<<": ";
            cin >>matriz[i][j];
        }
    }
    return matriz;
}
void Matriz::Print(int **matriz, int fil, int col) {
    for(int i=0;i<fil;i++) {
        for (int j = 0; j < col; j++) {
            cout << matriz[i][j]<<" ";
        }
        cout <<endl;
    }
}
void Matriz::Silla(int **matriz, int fil, int col) {
    int contador=0;
    double mayorColumna;
    int posMenorF,menorF,mayorC,posMayorC,cont=0;
    for(int i=0;i<col;i++){
        if(MenorFila(matriz,i,posMenorF,menorF,col)){
            if(MayorCol(matriz,posMenorF,menorF,mayorC,i,fil)){
                cout << "El punto de silla es: " << mayorC << " en la posicion:" << "( " << i+1 << "," << posMenorF+1 << " )" << endl;
                contador++;
            }
        }
    }
    if(contador==0){
        cout << "No hay punto silla"<<endl;
    }
}
bool Matriz::MenorFila(int **matriz, int fil, int &posMenor, int &menorF,int col) {
    menorF= matriz[0][fil];
    posMenor=0;
    for(int i=1;i<col;i++){
        if(matriz[i][fil]<menorF){
            menorF = matriz[i][fil];
            posMenor=i;
        }
    }
    for(int j=0;j<col;j++){
        if((menorF==matriz[j][fil]) && (j!=posMenor)){
            return false;
        }
    }
    return true;
}
bool Matriz::MayorCol(int **matriz, int col, int &menorF, int &mayorC,int filActual,int fil) {
    int contador = 0;
    mayorC=menorF;
    for(int i=0;i<fil;i++){
        if(i!=filActual){
            if(matriz[col][i]<mayorC){
            }else if(matriz[col][i]==mayorC){
                contador++;
            }else{
                contador++;
            }
        }
    }
    if(contador>0){
        return false;
    } else{
        return true;
    }
}
