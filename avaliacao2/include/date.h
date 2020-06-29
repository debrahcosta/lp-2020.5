//
// Created by deborah on 26/06/2020.
//

#ifndef AULA7_DATE_H
#define AULA7_DATE_H

#include <string>
#include <ctime>
#include <fstream>

struct Date
{
    Date();

    unsigned year;
    unsigned month;
    unsigned day;

    void set_from_string(const std::string& date);
    std::string to_string();
    static std::string format_current_date(const std::string &format);
    static std::string get_current_date();

};
#endif //AULA7_DATE_H
