#ifndef VENDEDOR_H
#define VENDEDOR_H
#include "Empregado.h"

class Vendedor : public Empregado {

  public:
    Vendedor();
    double setquotaMensalVendas(double quotaMensalVendas);
    double getquotaMensalVendas();
    double quotaTotalAnual();
    const static int mesesDoAno = 12;

  private:
    double quotaMensalVendas;

};



#endif // VENDEDOR_H
