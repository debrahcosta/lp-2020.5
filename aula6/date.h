//
// Created by deborah on 26/06/2020.
//

#ifndef DCAULA06_DATE_H
#define DCAULA06_DATE_H

#include <string>

struct Date
{
    unsigned year;
    unsigned month;
    unsigned day;

    void set_from_string(const std::string& date);
};
#endif