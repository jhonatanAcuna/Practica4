//
// Created by jacun on 27/05/2020.
//

#ifndef MATRIZ_MATRIZ_H
#define MATRIZ_MATRIZ_H


class Matriz {
public:
    static int **LLenado(int fil, int col);
    static void Print(int **matriz, int fil, int col);
    static void Silla(int **matriz, int fil, int col);
    static bool MenorFila(int **matriz, int fil, int &posMenor, int &menorF,int col);
    static bool MayorCol(int **matriz, int col, int &menorF, int &mayorC,int filActual,int fil);
};


#endif //MATRIZ_MATRIZ_H
