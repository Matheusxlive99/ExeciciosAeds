#include <iostream>
#include <locale.h>
//Matheus Felipe
//Exercicio 5

using namespace std;

int verificaPar(int x[])
{
    setlocale(LC_ALL, "Portuguese");
    int aux=0;//Vari�vel para contar a quantidade de numeros pares
    for(int i=0; i<10; i++)
    {
        if(x[i] % 2 ==0) //Forma de se verificar se o numero � par
        {
            aux++;
            cout<<"os numeros pares do vetor s�o: "<<x[i] <<endl;
        }
    }

    cout<<"A quantidade de numeros pares presentes no vetor �: "<<aux<<endl;

}

int main()
{
    setlocale(LC_ALL, "Portuguese");//biblioteca para caracteres especiais
    int x[10];
    cout<<"preencha o vetor com 10 n�meros"<<endl;//preenchimento do vetor
    for(int i=0; i<10; i++)
    {
        cin>>x[i];
    }
    verificaPar(x);//Chamando a fun��o
    return 0;
}
