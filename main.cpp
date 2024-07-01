#include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char** argv) {

    char nome[15];
    int idade, cpf;
    
    cout << "----CADASTRO----" << endl;
    
    cout << "Ola, Informe seu primeiro nome: " << endl;
    cin >> nome;
    
    cout << "Informe sua idade: " << endl;
    cin >> idade;
    
    cout << "Informe seu CPF: " << endl;
    cin >> cpf;
   
    
    ofstream arquivo;
    arquivo.open("Ficha-Cadastral.txt");
    arquivo << nome << endl;
    arquivo << idade << endl;
    arquivo << cpf << endl;
    arquivo.close();
    
    cout << endl;
    
    cout << "FICHA CADASTRADA COM SUCESSO !!!" << endl;
    return 0;
}

