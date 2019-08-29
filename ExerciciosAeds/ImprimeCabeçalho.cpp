#include <iostream>
#include <locale.h>
//Matheus Felipe De Castro Martins
//Exercicio2

using namespace std;

void ImprimeCabecalho(string nome) //Função para imprimir o cabeçalho
{

    setlocale(LC_ALL, "Portuguese");
    cout<<"================================================="<<endl;
    cout<<"IFMG – Instituto Federal de Minas Gerais"<<endl;
    cout<<"Campus Sabará"<<endl;
    cout<<"Disciplina Algoritmos e Programação II"<<endl;
    cout<<"Nome:"<<nome<<endl;
    cout<<"================================================="<<endl;


}


int main()//função main
{

    string nome;
    cout<<"Digite o seu nome para ser impresso no cabealho"<<endl;
    getline(cin,nome);//uso do comando getline para tratar os espaços
    ImprimeCabecalho(nome);



    return 0;
}
