#include <iostream>
#include <locale>
//Matheus Felipe
//Exercicio2
using namespace std;

int ImprimirN(int n)
{
    if(n == -1)//Caso base
    {
        return 0;
    }
    cout<<" "<<n;
    ImprimirN(n-1);//Decremento Para imprimir ao contrario
    ;

}
int main()
{
    setlocale(LC_ALL, "portuguese");
    int n=0;
    cout << "Digite at� qual n�mero inteiro voc� deseja imprimir de forma decrescente" << endl;
    cin>>n;
    ImprimirN(n);//Chamada da fun��o recursiva
    return 0;
}


