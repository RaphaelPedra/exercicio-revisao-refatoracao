#include "Empregado.h"
#include <string>
#include <iostream>

Empregado::Empregado(){
}

double Empregado::setsalarioHora(double salarioHora){
    this-> salarioHora = salarioHora;
}

double Empregado::getsalarioHora(){
    return salarioHora;
}

std::string Empregado::setnome(string nome){
    this->nome = nome;
}

std::string Empregado::getnome(){
    return nome;
}

double Empregado::pagamentoMes(double horasTrabalhadas){
    if(horasTrabalhadas > horasFixas){
        double x = horasTrabalhadas - horasFixas;
        horasTrabalhadas += x/2;
    }
    return horasTrabalhadas * salarioHora;

}
