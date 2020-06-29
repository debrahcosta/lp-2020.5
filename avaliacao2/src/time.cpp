//
// Created by deborah on 26/06/2020.
//
#include "../include/time.h"
#include "../include/date.h"

#include <sstream>

Time::Time(): hours(0), minutes(0), seconds(0) {

}

void Time::set_from_string(const std::string& time)
{
    char discard;
    std::stringstream stream(time);

    stream >> hours;
    stream >> discard;
    stream >> minutes;
    stream >> discard;
    stream >> seconds;
}

std::string Time::to_string()
{
    std::stringstream stream;

    if (hours < 10) {
        stream << 0;
    }
    stream << hours;
    stream << ':';

    if (minutes < 10) {
        stream << "0";
    }
    stream << minutes << ":";

    if (seconds < 10) {
        stream << "0";
    }
    stream << seconds;

    return stream.str();
}
std::string Time::get_current_time() {
    return Date::format_current_date("%H:%M:%S");
}
