//
// Created by jacun on 27/05/2020.
//
#include <iostream>
#include "Ahorcado.h"
using namespace std;
void Ahorcado::Juego(std::string palabra) {
    int cont=0;
    char * aux = new char (palabra.size());
    char intento;
    for(int i=0;i<palabra.size();i++){
        aux[i] = '_';
    }
    for(int i=0;i<palabra.size();i++){
        cout << aux[i];
    }
    int vidas=7;
    int opci;
    while (true){

        cout << "\n1: Caracter \t2:Palabra"<<endl;
        cin >> opci;
        if(opci ==1){
            string a;
            cout << "\nIngrese Caracter: ";
            cin >>intento;
            for(int i=0;i<palabra.size();i++){
                if(intento == palabra[i]){
                    aux[i]=intento;
                }
            }
            for(int i=0;i<palabra.size();i++){
                cout << aux[i]<<" ";
            }
            for(int i=0;i<palabra.size();i++){
                a+=aux[i];
            }
            if(palabra.compare(a)==0){
                cout << "Ganaste";
                break;
            }else{

                vidas--;
            }


        }else if( opci ==2){
            string pal;
            cout << "Palabra"<<endl;
            cin >> pal;
            if(palabra.compare(pal)==0){
                cout << "Ganaste";
                break;
            }else{
                vidas--;
            }

        }
        if(vidas==0){
            cout << "Perdiste";
            break;
        }
    }

}