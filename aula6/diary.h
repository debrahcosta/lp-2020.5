//
// Created by deborah on 26/06/2020.
//

#ifndef DCAULA06_DIARY_H
#define DCAULA06_DIARY_H

#include "Message.h"

#include <string>

struct Diary
{
    Diary(const std::string& filename);

    std::string filename;
    Message* messages;
    size_t messages_size;
    size_t messages_capacity;

    void add(const std::string& message);
    void write();
};
#endif