#include <iostream>
#include <fstream>
#include <string>
*/codigo demo da aula3 */
void show_usage(const std::string &prog_name);

int main(int argc, char *argv[]){
    std::ifstream arquivo_entrada("nomearquivo.txt");
    std::ofstream arquivo_saida("arquivo.txt",std::ios::app);
    /*parametro std::ios::app insere conteudo sem apagar o arquivo*/

    if(arquivo_entrada.fail()){
        std::cout <<"Arquivo não encontrado!"<<std::endl;
        return 1;
    }

    arquivo_saida << "Debs"<<std::endl;
}
void show_usage(const std::string &prog_name){
    std::cout << "Uso: "<<prog_name<< " add <mensagem>" << std::endl;
}
