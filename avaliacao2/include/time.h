//
// Created by deborah on 26/06/2020.
//

#ifndef AULA7_TIME_H
#define AULA7_TIME_H
#include <string>

struct Time{
    Time();

    unsigned hours;
    unsigned minutes;
    unsigned seconds;
    std::string get_current_time();
    void set_from_string(const std::string& time);
    std::string to_string();
};

#endif //AULA7_TIME_H
