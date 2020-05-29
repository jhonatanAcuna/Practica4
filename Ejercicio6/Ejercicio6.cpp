//
// Created by jacun on 27/05/2020.
//
#include <iostream>
#include "Ejercicio6.h"
using namespace std;
int ** Ejercicio6::Transpuesta(int **matriz, int fil,int col){
    int **matrizT = new int*[col];
    for(int i=0;i<col;i++){
        matrizT[i] = new int [fil];
    }
    for(int i=0;i<col;i++){
        for(int j=0;j<fil;j++){
            matrizT[i][j]=matriz[j][i];
        }
    }

return  matrizT;
}
bool Ejercicio6::Simetrica(int **matriz, int **matrizT, int fil) {
    int cont=0;
    for(int i=0;i<fil;i++){
        for(int j=0;j<fil;j++){
            if(matriz[i][j]!=matrizT[i][j]){
                cont++;
            }
        }
    }
    if(cont==0){
        return true;
    }else{
        return false;
    }
}
bool Ejercicio6::TriangularS(int **matriz, int fil) {
    int cont=0;
    for(int i=1;i<fil;i++){
        for(int j=0;j<i;j++){
            if(matriz[i][j]!=0){
                cont++;
            }
        }
    }
    if(cont==0){
        return true;
    }else{
        return false;
    }
}
bool Ejercicio6::TriangularI(int **matriz, int fil) {
    int cont=0;
    for(int i=1;i<fil;i++){
        for(int j=0;j<i;j++){
            if(matriz[j][i]!=0){
                cont++;
            }
        }
    }
    if(cont==0){
        return true;
    }else{
        return false;
    }
}
void Ejercicio6::Print(int **matriz, int fil, int col) {
    for(int i=0;i<fil;i++) {
        for (int j = 0; j < col; j++) {
            cout << matriz[i][j]<<" ";
        }
        cout <<endl;
    }
}
