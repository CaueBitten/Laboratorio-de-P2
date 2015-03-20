#ifndef CONTA
#define CONTA
#include <QString>

class Conta{

private:


protected:

  QString m_numero;  // Numero da conta (protected pois quero que somente minhas subclasses acessem isso)
  double m_saldo;  // Saldo da conta (protected pois quero que somente minhas subclasses acessem isso)

public:

  Conta(){}

  Conta(QString numero, double saldo){
    m_numero = numero; m_saldo = saldo;
  }

  QString getNumero(){ // Retorna o número da conta
    return m_numero;
  }

  double getSaldo(){ // Retorna o saldo atual da conta
    return m_saldo;
  }


 /* Saca o valor passado como parametro da conta, repare que retorna um bool verificando
  * que o saque foi realizado com sucesso, ou seja, m_saldo >= valor.
  * Repare ainda que essa verificação terá que ser refeita fora da classe (será feita na main)
  * o que não é o ideal, pois a outra pessoa não sabe como o nosso código funcional, sabe somente
  * o que ele faz! Veremos adiante como resolver isso dentro do próprio método.
  */
  bool saca(double valor){
    if(m_saldo >= valor){
        m_saldo -= valor;
        return true;
      }

    return false;
  }

  /* Método que deposita dinheiro na conta
  * Repare que ele retorna um bool para verificar se o valor a ser depositado é positivo
  */
  bool deposita(double valor){
    if(valor > 0){
        m_saldo += valor;
        return true;
      }

    return false;
  }


  virtual void atualiza(double taxa) = 0;  /* Metodo que atualiza a conta de acordo com uma taxa percentual fornecida
                                            * Forço a quem herdar essa classe a implementar esse método, pois cada tipo
                                            * de conta tem algum valor diferente que multiplica a taxa que vai atualizar
                                            * o que torna inútil implementar esse método aqui.
                                            */


};

#endif // CONTA

