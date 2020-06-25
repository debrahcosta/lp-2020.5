#include <iostream>
#include <string>
#include <fstream>
/*presença da aula*/
void show_usage(const std::string &prog_name);

int main(int argc, char *argv[]){

    if(argc==1){
        show_usage(argv[0]);
        return 1;
    }

    std::string action = argv[1];

    if(action!="add"){
        show_usage(argv[0]);
        return 1;
    }

    std::string message;

    if(argc==2){
        std::cout<<"Informe a mensagem: "<< std::endl;
        std::getline(std::cin,message);

    }else{
        message = argv[2];
    }

    std::ofstream arquivo_saida("arquivo.txt",std::ios::app);
    arquivo_saida << message<<std::endl;
    if(! arquivo_saida.is_open()){
        std::cerr<<"O arquivo não pode ser criado" <<std::endl;
        return 1;
    }
    arquivo_saida.close(); /*só preciso do close pra fechar em momento específico*/
    std::cout<<"Mensagem Adicionada"<<std::endl;

    return 0;
}
void show_usage(const std::string &prog_name) {
    std::cout << "Uso: " << prog_name << " add <mensagem>" << std::endl;
}