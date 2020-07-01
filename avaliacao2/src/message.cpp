//
// Created by deborah on 27/06/2020.
//
#include "../include/message.h"

#include <sstream>
#include <string>
#include <iostream>

void Message::set_from_string(const std::string& msg){
    char discard;
    std::stringstream stream(msg);
    unsigned disc;


    stream >> discard;
    stream >> disc;
    stream >> discard;
    stream >> disc;
    stream >> discard;
    stream >> disc;
    stream >> content;

}
