//
// Created by deborah on 10/07/2020.
//
#include "Cliente.hpp"
#ifndef AULA16_CONTA_H
#define AULA16_CONTA_H


class Conta {
public:
    int numero;
    double saldo;
    Cliente titular;

    Conta(Cliente titular);
    Conta();
    ~Conta();
    int saca(double valor);
    int deposita(double valor);
    int transfere(double valor, Cliente titular);
};


#endif //AULA16_CONTA_H
