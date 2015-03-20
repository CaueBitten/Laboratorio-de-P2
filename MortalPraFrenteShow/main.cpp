#include "matrix.h"

#include <QDebug>

int main()
{

  Matrix *m1 = new Matrix(2,2); //Crio uma matriz 2 por 2
  qDebug() << QString::number(m1->isEmpty()); /* Verifico se ela está vazia, e de fato vai estar,
                                               * pois C++ seta os valores do array como 0, não
                                               * pegando lixo, como no C.
                                               * O "QString::number(...)" foi usado porque
                                               * "m1->isEmpty()" retorna "1"(true) ou "0"(false)
                                               * e só posso passar Strings ou QStrings no QDebug(),
                                               * ou seja, número e booleanos devem ser transformados
                                               * em String, e para isso usamos o "QString::number()"
                                               */

  return 0;
}
