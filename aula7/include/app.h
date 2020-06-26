//
// Created by deborah on 26/06/2020.
//

#ifndef AULA7_APP_H
#define AULA7_APP_H

#include "diary.h"

#include <string>

struct App{
    App(const std::string& filename);
    std::string prog_name;
    Diary diary;
    int run(int argc, char* argv[]);
    int show_usage(const std::string prog_name);
    void add();
    void add(const std::string message);
    void list_messages();

};
#endif //AULA7_APP_H
