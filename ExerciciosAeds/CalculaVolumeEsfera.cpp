#include <iostream>
#include <math.h>
#include <locale>

//Matheus Felipe
//Exercicio3

using namespace std;

int CalculaVolume(float raio)//Esta função calcula o volume da esfera
{

    setlocale(LC_ALL, "Portuguese");
    float v;
    v = 4 * 3.14159265 *(pow(raio,3))/3; //Nesta linha e aplicada a formula para calcular o volume da esfera
    cout<<"o Volume da esfera é:"<<v<<endl;
}


int main()//funcao main
{
    float raio;
    cout<<"Digite o raio da esfera"<<endl;
    cin>>raio;
    CalculaVolume(raio);
    return 0;
}
