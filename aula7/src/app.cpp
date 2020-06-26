//
// Created by deborah on 26/06/2020.
//
#include "../include/app.h"

#include <iostream>

App::App(const std::string& filename): diary(filename){

}

int App::run(int argc, char* argv[]) {

    std::string prog_name= argv[0];
    if (argc==1){
        return show_usage(prog_name);
    }
    std::string action = argv[1];

    if (action=="add"){
        if (argc==2){
            add();
        }else{
            add(argv[2]);
        }
    }else if(action=="list"){
        list_messages();
    }else{
        return show_usage(prog_name);
    }

    return 0;
}

void App::add() {
    std::string message;
    std::cout<<"Insira a mensagem: "<<std::endl;
    std::getline(std::cin, message);

    add(message);
}

void App::add(const std::string message) {
    diary.add(message);
    diary.write();
}

void App::list_messages(){
    for(size_t i=0;i<diary.messages_size; i++){
        const Message& message = diary.messages[i];
        std::cout<<"- "<<message.content<<std::endl;
    }
}

int App::show_usage(const std::string prog_name) {
    std::cout << "Uso: " <<prog_name<< " add <mensagem> ou "<<prog_name<<" list" << std::endl;
    return 1;
}

