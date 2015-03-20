#ifndef MATRIZADT_H
#define MATRIZADT_H


/* Essa não é a ADT da atividade!!!
 * Como não tinha acesso a ela no momento,
 * fiz uma simples para servir de exemplo
 * no laboratório show
 */

class MatrizADT
{
protected:

  /* Atributos "protected", pois quero
   * que eles possam ser usados nas minhas
   * classe filhas
   */

  int x;
  int y;
  double **matriz; /* "**matriz" é um ponteiro para ponteiro, ou seja,
                    * "é um array de um array", num linguajar mais chulo.
                    * E isso significa que cada posição matriz[i] está
                    * apontando para um array matriz[i][y].
                    * Olhe o contrutor da matriz no "matrix.cpp" e veja como
                    * é criada uma matrix[x][y]
                    */

public:

  virtual bool isEmpty() = 0;

};

#endif // MATRIZADT_H
