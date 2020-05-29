//
// Created by jacun on 27/05/2020.
//

#ifndef MULTIPLICACION_MULTIPLICACION_H
#define MULTIPLICACION_MULTIPLICACION_H


class Multiplicacion {
public:
    static int ** CrearMatriz(int fil, int col);
    static void Print(int fil, int col, int ** matriz);
    static void MultMat(int ** m1, int ** m2, int f1, int c1, int f2,int c2);
};


#endif //MULTIPLICACION_MULTIPLICACION_H
