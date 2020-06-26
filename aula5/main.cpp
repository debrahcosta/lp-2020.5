#include <ctime>
#include <fstream>
#include <iostream>
#include <string>

std::string format_current_date(const std::string &format) {
  std::time_t time = std::time(nullptr);
  char result[1024];

  std::strftime(result, sizeof(result), format.c_str(), std::localtime(&time));

  return std::string(result);
}

std::string get_current_date() { return format_current_date("%d/%m/%Y"); }

std::string get_current_time() { return format_current_date("%H:%M:%S"); }


void show_usage(const std::string &prog_name);

int main(int argc, char *argv[]){

    if(argc==1){
        show_usage(argv[0]);
        return 1;
    }

    std::string action = argv[1];

    if(action!="add" && action!="list"){
        show_usage(argv[0]);
        return 1;
    }

    std::string message;

    if(argc==2 && action=="add") {
        std::cout << "Informe a mensagem: " << std::endl;
        std::getline(std::cin, message);
    }else if (argc==2 && action=="list"){
        std::ifstream file("arquivo.md");

        if (!file.is_open()){
            std::cerr <<"Arquivo não existe ou sem permissão de leitura"<<std::endl;
            return 1;
        }

        while (!file.eof()){
            std::getline(file,message);
            std::cout<< message<<std::endl;
        }

        file.close();
        return 0;

    }else{
        message = argv[2];
    }

    std::ofstream arquivo_saida("arquivo.md",std::ios::app);

    std::ifstream file("arquivo.md",std::ios::app);
    int ocorrencia=0;
    while(!file.eof()){
        std::string line;
        std::getline(file,line);
        std::string data=get_current_date();
        if(data==line){
            ocorrencia++;
        }
    }

    if(ocorrencia==0) {
        arquivo_saida << std::endl<<get_current_date() << std::endl << std::endl << "- " << get_current_time() << " " << message << std::endl;
        if (!arquivo_saida.is_open()) {
            std::cerr << "O arquivo não pode ser criado" << std::endl;
            return 1;
        }
    } else{
        arquivo_saida << "- " << get_current_time() << " " << message<< std::endl;
    }
    arquivo_saida.close(); /*só preciso do close pra fechar em momento específico*/
    std::cout<<"Mensagem Adicionada"<<std::endl;

    return 0;
}
void show_usage(const std::string &prog_name) {
    std::cout << "Uso: " << prog_name << " add <mensagem> ou "<<prog_name<<" list" << std::endl;
}
