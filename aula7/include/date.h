//
// Created by deborah on 26/06/2020.
//

#ifndef AULA7_DATE_H
#define AULA7_DATE_H

#include <string>

struct Date{
    unsigned year;
    unsigned month;
    unsigned day;

    void set_from_string(const std::string& date);
};
#endif //AULA7_DATE_H
