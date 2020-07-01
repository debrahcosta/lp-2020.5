//
// Created by deborah on 26/06/2020.
//

#ifndef AULA7_MESSAGE_H
#define AULA7_MESSAGE_H

#include "date.h"
#include "time.h"

#include <string>

struct Message{
    std::string content;
    Date date;
    Time time;

    void set_from_string(const std::string& msg);
};
#endif //AULA7_MESSAGE_H
