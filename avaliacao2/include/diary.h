//
// Created by deborah on 26/06/2020.
//

#ifndef AULA7_DIARY_H
#define AULA7_DIARY_H

#include "message.h"

#include <string>
#include <fstream>
#include <iostream>

struct Diary{
    Diary(const std::string& filename);
    ~Diary();

    std::string filename;
    Message* messages;
    size_t messages_size;
    size_t messages_capacity;
    int open_diary(std::string &action);
    int verifica_abertura(std::string &filename);
    void verifica_espaco(int &i);
    int create_diary(std::string &filename);
    void load(std::string &filename);
    void add();
    void list(std::string &filename);
    void add(const std::string &message);
    int verifica_data(std::ifstream &file, Message message);
    void write(std::string &filename);
};
#endif //AULA7_DIARY_H
