//
// Created by jacun on 27/05/2020.
//

#include "Pascal.h"
#include <iostream>
using namespace std;
void Pascal::triangPascal(int filas) {
    int *aux = new int [1];
    for(int i=1;i<=filas;i++){
        int *fil= new int [i];
        for(int j=0;j<i;j++){
            if(j==0 || j==(i-1)){
                fil[j]=1;
            }else{
                fil[j]=aux[j]+aux[j-1];
            }
            cout<< fil[j];
        }

        cout<<endl;
        aux=fil;

    }

}