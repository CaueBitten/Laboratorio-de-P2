#include "conta.h"
#include "contacorrente.h"
#include "contapoupanca.h"

#include <QDebug>

int main()
{
  ContaCorrente *cc1 = new ContaCorrente("001", 1000);
  ContaPoupanca *cp1 = new ContaPoupanca("002", 1000);

  cc1->deposita(1000);
  cp1->deposita(1000);

  cc1->atualiza(0.1);
  cp1->atualiza(0.1);

  qDebug() << "Conta: " + cc1->getNumero() + "  Saldo: " + QString::number(cc1->getSaldo());
  qDebug() << "Conta: " + cp1->getNumero() + "  Saldo: " + QString::number(cp1->getSaldo());

  return 0;
}
