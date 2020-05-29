//
// Created by jacun on 27/05/2020.
//

#ifndef L_4_EJERCICIO6_H
#define L_4_EJERCICIO6_H

#pragma once
class Ejercicio6 {
public:
    static int **Transpuesta(int **matriz, int fil, int col);
    static void Print(int **matriz, int fil, int col);
    static bool Simetrica(int **matriz,int **matrizT,int fil);
    static bool TriangularS(int **matriz,int fil);
    static bool TriangularI(int **matriz,int fil);
};


#endif //L_4_EJERCICIO6_H
