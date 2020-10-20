#include <string>
#include "Vendedor.h"


Vendedor::Vendedor(){
}

double Vendedor::setquotaMensalVendas(double quotaMensalVendas){
    this->quotaMensalVendas = quotaMensalVendas;
}

double Vendedor::getquotaMensalVendas(){
    return quotaMensalVendas;
}

double Vendedor::quotaTotalAnual() {
	  return quotaMensalVendas*mesesDoAno;
}

