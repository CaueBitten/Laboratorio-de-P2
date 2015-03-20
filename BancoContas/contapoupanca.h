#ifndef CONTAPOUPANCA_H
#define CONTAPOUPANCA_H
#include "conta.h"

class ContaPoupanca : public Conta
{
public:



  ContaPoupanca(QString numero, double saldo){
    m_numero = numero;
    m_saldo = saldo;
  }

  ~ContaPoupanca(){

  }

  void atualiza(double taxa){
    m_saldo += m_saldo*taxa*3;
  }

};

#endif // CONTAPOUPANCA_H
