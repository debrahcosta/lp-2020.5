//
// Created by deborah on 26/06/2020.
//
#include "../include/diary.h"
#include <iostream>
#include <string>

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
    return 0;

}

int Diary:: open_diary(std::string &action) {
    std::cout<<"Insira o nome do diário: "<<std::endl;
    std::cin>>filename;
    filename+=".md";
    if(verifica_abertura(filename)&&action=="add"){
        create_diary(filename);
    };

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
    Message m;
    std::cout<<"Insira a mensagem: "<<std::endl;
    std::cin>>m.content;
    Date d;
    std::string data = d.get_current_date();
    Time t;
    std::string horario= t.get_current_time();
    write(filename,m);
    messages[messages_size] = m;
    messages_size++;

}

void Diary::add(const std::string &message)
{
    if (messages_size >= messages_capacity) {
        return;
    }
    Message m;
    m.content = message;
    Date d;
    std::string data = d.get_current_date();
    Time t;
    std::string horario= t.get_current_time();
    write(filename,m);

    messages[messages_size] = m;
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


void Diary::write(std::string &filename, Message message) {
    std::ifstream file(filename,std::ios::app);
    std::ofstream saida(filename,std::ios::app);
    if(verifica_data(file,message)==1){
    saida<<"- "<<message.time.get_current_time()<<" "<<message.content<<std::endl;
    }else{
        saida<<std::endl<<std::endl<<"# "<<message.date.get_current_date()<<std::endl<<std::endl;
        saida<<"- "<<message.time.get_current_time()<<" "<<message.content<<std::endl;
    }
    std::cout<<"Mensagem inserida com sucesso"<<std::endl;

}

