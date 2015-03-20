#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H
#include "conta.h"

class ContaCorrente : public Conta
{
public:

  ContaCorrente(){
   m_saldo = 0;
  }

  ContaCorrente(QString numero, double saldo){
    m_numero = numero;
    m_saldo = saldo;
  }

  ~ContaCorrente(){

  }

  void atualiza(double taxa){
    m_saldo += m_saldo*taxa*2;
  }

  bool deposita(double valor){
    if(Conta::deposita(valor)){
      m_saldo -= 0.10;
      return true;
    }
    return false;
  }
};

#endif // CONTACORRENTE_H
