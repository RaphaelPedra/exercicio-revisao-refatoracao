#ifndef EMPREGADO_H
#define EMPREGADO_H
#include <iostream>
#include <string>

using namespace std;

class Empregado {

  public:
    Empregado();
    double setsalarioHora(double salarioHora);
    double getsalarioHora();
    const static int horasFixas = 8;
    double horasTrabalhadas;
    string setnome(string nome);
    string getnome();
    double pagamentoMes(double horasTrabalhadas);


  private:
      string nome;
      double salarioHora;

};

#endif
