/*
 * add.cpp
 *
 * Copyright 2020 Deborah Costa <deborah@deborah-Inspiron-3542>
 *
 */


#include <iostream>
#include <cstring>

int main(int argc, char *argv[])
{
	std::string mensagem;
	if(argc==2 && !strcmp(argv[1],"add")){
		std::cout<< "Informe a mensagem: " <<std::endl;
		std::getline(std::cin, mensagem);
		std::cout<< "Mensagem Adicionada" <<std::endl;
	}else if(argc==3 && !strcmp(argv[1],"add")){
		mensagem=argv[2];
		std::cout<< "Mensagem Adicionada" <<std::endl;
	}else {
		std::cout<< "Uso: "<<argv[0]<<" add <mensagem>" <<std::endl;
		return -1;
	}
	return 0;
}
