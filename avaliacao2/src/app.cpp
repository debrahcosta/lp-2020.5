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
            if(!diary.open_diary(action)) {
                diary.add();
            }
        }else{
            if(!diary.open_diary(action)) {
                diary.add(argv[2]);
            }
        }
    }else if(action=="list") {
        if(!diary.open_diary(action)){
            diary.list(diary.filename);
        }
    }else if(action=="search"){
        if(!diary.open_diary(action)) {
            diary.search(diary.filename);
        }
    }else{
        return show_usage(prog_name);
    }

    return 0;
}

int App::show_usage(const std::string prog_name){
    std::cout << "Uso: " <<prog_name<< " add <mensagem> ou "<<prog_name<<" list ou " <<prog_name<<" search"<< std::endl;
    return 1;
}

