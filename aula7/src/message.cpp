//
// Created by deborah on 27/06/2020.
//
#include "../include/message.h"

#include <sstream>

int Message::verifica_data(std::ifstream file, Message message, Date date){
    int ocorrencia=0;
    while(!file.eof()){
        std::string line;
        std::getline(file,line);
        std::string data;
        data="# ";
        data+=date.to_string();
        if(data==line){
            ocorrencia++;
        }
    }
    return ocorrencia;
}

