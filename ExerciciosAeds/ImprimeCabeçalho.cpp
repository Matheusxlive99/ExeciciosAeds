#include <iostream>
#include <locale.h>
//Matheus Felipe De Castro Martins
//Exercicio2

using namespace std;

void ImprimeCabecalho(string nome) //Fun��o para imprimir o cabe�alho
{

    setlocale(LC_ALL, "Portuguese");
    cout<<"================================================="<<endl;
    cout<<"IFMG � Instituto Federal de Minas Gerais"<<endl;
    cout<<"Campus Sabar�"<<endl;
    cout<<"Disciplina Algoritmos e Programa��o II"<<endl;
    cout<<"Nome:"<<nome<<endl;
    cout<<"================================================="<<endl;


}


int main()//fun��o main
{

    string nome;
    cout<<"Digite o seu nome para ser impresso no cabealho"<<endl;
    getline(cin,nome);//uso do comando getline para tratar os espa�os
    ImprimeCabecalho(nome);



    return 0;
}
