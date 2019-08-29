#include <iostream>
#include <locale>
//Matheus Felipe
using namespace std;

int ImprimirN(int n)
{
    if(n == -1)//Caso Base
    {
        return 0;
    }
    ImprimirN(n-1) + 1;//Utilização da recursividade para calcular os n termos inteiros;
    cout<<" "<<n;

}
int main()
{
    setlocale(LC_ALL, "portuguese");
    int n=0;
    cout << "Digite até qual número inteiro você deseja imprimir" << endl;
    cin>>n;
    ImprimirN(n);//Chamada da função recursiva;
    return 0;
}


