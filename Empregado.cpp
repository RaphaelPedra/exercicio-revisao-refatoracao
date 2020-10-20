#include "Empregado.h"
#include <string>
#include <iostream>

using namespace std;

double Empregado::setsalarioHora(double salarioHora){
    this-> salarioHora = salarioHora;
}

double Empregado::getsalarioHora(){
    return salarioHora;
}

string Empregado::setnome(string nome){
    this->nome = nome;
}

string Empregado::getnome(){
    return nome;
}

double Empregado::pagamentoMes(double horasTrabalhadas){
    if(horasTrabalhadas > horasFixas){
        double x = horasTrabalhadas - horasFixas;
        horasTrabalhadas += x/2;
    }
    return horasTrabalhadas * salarioHora;

}
