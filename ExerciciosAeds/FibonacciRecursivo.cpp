//recursivo fibonacci

#include <iostream>
#include <locale>
//Matheus Felipe
//03/08/2015
using namespace std;

int fib(int n)
{
    if(n==1 or n==2)//Caso base
    {
        return 1;
    }
    else if(n>2)
    {
        return fib(n-2)+fib(n-1);//Chamada Recursiva
    }

}
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int Qtdtermos;
    cout<<"digite a quantidade de termos de fibonacci que você deseja visualizar"<<endl;
    cin>>Qtdtermos;
    for(int i=0; i<Qtdtermos; i++)
    {
        cout<<" "<<fib(i);
    }
    return 0;
}
