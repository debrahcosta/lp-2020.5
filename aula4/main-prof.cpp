#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char *argv[]){
    std::ifstream file("messages2.txt");

    if (!file.is_open()){
        std::cerr <<"Arquivo não existe ou sem permissão de leitura"<<std::endl;
        return 1;
    }

    std::string message;
    int line_number =0;

    while (!file.eof()){
        ++line_number;
        std::getline(file,message);
        std::cout<< "tamanho da mensagem: "<< message.size()<<std::endl;
        if (message.size()==0){
            continue;
        }
        std::cout<< line_number<<". "<<message <<std::endl;
    }

    file.close();

    return 0;
}
