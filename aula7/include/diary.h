//
// Created by deborah on 26/06/2020.
//

#ifndef AULA7_DIARY_H
#define AULA7_DIARY_H

#include "message.h"

#include <string>

struct Diary{
    Diary(const std::string& filename);
    std::string filename;
    Message* messages;
    size_t messages_size;
    size_t messages_capacity;

    void add(const std::string& message);
    void write();
};
#endif //AULA7_DIARY_H
