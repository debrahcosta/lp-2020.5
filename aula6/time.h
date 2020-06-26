//
// Created by deborah on 26/06/2020.
//

#ifndef DCAULA06_TIME_H
#define DCAULA06_TIME_H

#include <string>

struct Time
{
    unsigned hour;
    unsigned minute;
    unsigned second;

    void set_from_string(const std::string& time);
};
#endif
