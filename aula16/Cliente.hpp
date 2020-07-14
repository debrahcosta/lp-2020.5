//
// Created by deborah on 10/07/2020.
//
#include <string>
#ifndef AULA16_CLIENTE_H
#define AULA16_CLIENTE_H


class Cliente {
public:
    std::string nome;
    std::string cpf;

    Cliente();
    ~Cliente();

    void setNome(std::string nome);
    std::string getNome();
    void setCpf(std::string cpf);
    int getCpf();
};


#endif //AULA16_CLIENTE_H
