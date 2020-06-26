//
// Created by deborah on 26/06/2020.
//

#ifndef AULA7_TIME_H
#define AULA7_TIME_H
#include <string>

struct Time{
    unsigned hours;
    unsigned minutes;
    unsigned seconds;

    void set_from_string(const std::string& time);
};

#endif //AULA7_TIME_H
