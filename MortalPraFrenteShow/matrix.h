#ifndef MATRIX_H
#define MATRIX_H

#include "matrizadt.h"

#include <QDebug>

class Matrix : public MatrizADT
{

public:
  Matrix(int x, int y); // Construtor da matriz
  Matrix(); // Construtor fazio simples


  bool isEmpty(); /* Metodo que verifica se a matriz tá vazia
                    * Sou obrigado a implementá-lo, pois herdei
                    * uma classe abstrata (MatrixADT), ou seja,
                    * se o método tem virtual, sou obrigado a
                    * implementá-lo na classe filha, senão o
                    * programa não compila
                    */

};

#endif // MATRIX_H
