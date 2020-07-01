//
// Created by deborah on 26/06/2020.
//
#include "../include/diary.h"
#include <iostream>
#include <string>
#include <sstream>

Diary::Diary(const std::string& name) : filename(name), messages(nullptr), messages_size(0), messages_capacity(10)
{
    messages = new Message[messages_capacity];
}

Diary::~Diary()
{
    delete[] messages;
}

int Diary::verifica_abertura(std::string &filename){
    std::ifstream file(filename);
    if (!file.is_open()){
        std::cerr <<"Arquivo não existe ou sem permissão de leitura"<<std::endl;
        return 1;
    }
    load(filename);
    return 0;

}

int Diary:: open_diary(std::string &action) {
    std::cout<<"Insira o nome do diário: "<<std::endl;
    std::cin>>filename;
    filename+=".md";
    if(verifica_abertura(filename)&&action=="add"){
        if (create_diary(filename)){
            return 1;
        }else{
            return 0;
        }
    };
}

void Diary::verifica_espaco(int &i) {
    if(i==(messages_capacity)) {
        size_t capacity = messages_capacity*2;
        Message* new_messages = new Message[capacity];
        for (int j = 0; j < messages_size; ++j) {
            new_messages[j]=messages[j];
        }
        delete [] messages;
        messages_capacity=capacity;
        messages = new Message[messages_capacity];
        for (int j = 0; j < messages_size; ++j) {
            messages[j]=new_messages[j];
        }
        load(filename);

    }
}

void Diary:: load(std::string &filename) {
    std::ifstream file(filename,std::ios::app);
    int i=0;
    while (!file.eof()&&(i<messages_capacity)){
        std::string line;
        std::getline(file, line);

        if(line[0]=='#'){
            messages[i].date.set_from_string(line);
        }
        if(line[0]=='-'){
            messages[i].set_from_string(line);
            messages[i].time.set_from_string(line);
            if (messages[i].date.day==0){
                messages[i].date=messages[i-1].date;
            }
            i++;
        }
        verifica_espaco(i);
        messages_size=i;
    }
}

int Diary::create_diary(std::string &filename){
    std::cout<<"Deseja criar um novo? s/n"<<std::endl;
    char answer;
    std::cin>>answer;

    while (answer!='s'&&answer!='n'){
        std::cout<<"Por favor insira 's' ou 'n'"<<std::endl;
        std::cin>>answer;
    }

    if(answer=='s'){
        std::ofstream file(filename,std::ios::app);

        if (!file.is_open()){
            std::cerr<<"Erro ao criar o arquivo!"<<std::endl;
        }else{
            std::cout<<"'"<<filename<<"' criado com sucesso!\n"<<std::endl;
        }
    }else{
        return 1;
    }
    return 0;
}

void Diary::add() {
    std::cout<<"Insira a mensagem:"<<std::endl;
    std::cin.ignore();
    std::getline(std::cin, messages[messages_size].content);
    messages[messages_size].date.get_current_date();
    messages[messages_size].time.get_current_time();
    write(filename);
    messages_size++;

}

void Diary::add(const std::string &message)
{
    if (messages_size >= messages_capacity) {
        return;
    }

    messages[messages_size].content = message;
    messages[messages_size].date.get_current_date();
    messages[messages_size].time.get_current_time();
    write(filename);
    messages_size++;
}

void Diary:: list(std::string &filename) {
    std::ifstream file(filename,std::ios::app);
    while (!file.eof()){
        std::string line;
        std::getline(file,line);
        std::cout<<line<<std::endl;
    }
}

int Diary::verifica_data(std::ifstream &file, Message message){
    int ocorrencia=0;
    while(!file.eof()){
        std::string line;
        std::getline(file,line);
        std::string data;
        data="# ";
        data+=message.date.get_current_date();
        if(data==line){
            ocorrencia=1;
        }
    }
    return ocorrencia;
}


void Diary::write(std::string &filename) {
    std::ifstream file(filename,std::ios::app);
    std::ofstream saida(filename,std::ios::app);
    if(verifica_data(file,messages[messages_size])==1){
        saida<<"- "<<messages[messages_size].time.get_current_time()<<" "<<messages[messages_size].content<<std::endl;
    }else{
        saida<<std::endl<<std::endl<<"# "<<messages[messages_size].date.get_current_date()<<std::endl<<std::endl;
        saida<<"- "<<messages[messages_size].time.get_current_time()<<" "<<messages[messages_size].content<<std::endl;
    }

    std::cout<<"Mensagem inserida com sucesso"<<std::endl;

}

