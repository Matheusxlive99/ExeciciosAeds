#include <iostream>
//Matheus Felipe
//Exercicio3
using namespace std;

int pot(int base, int exp)
{
    if(exp==0)//Caso base
    {
        return 1;
    }
    else//utilização da recursividade para calcular potencia
    {
        return base * pot(base, exp-1);
    }

}

int main()
{
    int base, exp;

    cout << "Digite a base" << endl;
    cin>>base;
    cout<<"Digite o expoente"<<endl;
    cin>>exp;

    cout<<pot(base,exp);//Chamada da função recursiva
    return 0;
}
