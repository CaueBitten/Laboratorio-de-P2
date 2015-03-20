#include "matrix.h"


//Construtor da Matriz
Matrix::Matrix(int x, int y)
{
  /* Declaro um array de tamanho x.
   * Esse array será usado como a "largura"
   * da nossa matriz bidimensional.
   * Cada posição desse array receberá
   * outro array (esse array será a altura
   * da nossa matriz bidimensional)
   */
  matriz = new double*[x];

  for(int i = 0; i < x; i++){     //Corro por esse array da largura até o fim dele
    for(int j = 0; j < y; j++){   //Crio o array da altura em cada posição do array largura

        matriz[i] = new double[y];

    }
  }

}

Matrix::Matrix()
{

}


bool Matrix::isEmpty()
{
    /* Ando pela matriz bidimensional procurando
     * um valor que seja diferente de zero, se
     * existir, eu paro a busca e volto "false"
     * pois ela não está vazia. Caso contrário,
     * retorno "true"
     */
    for(int i = 0; i < this->x; i++){
        for(int j = 0; j < this->y; j++){
              if(this->matriz[i][j] != 0){
                 return false;
                }
          }
    }

    return true;

}

