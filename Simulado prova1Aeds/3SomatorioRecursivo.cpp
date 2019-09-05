#include <iostream>
#include <locale>
//Matheus Felipe
//SomatorioReecursivo
using namespace std;
int soma(int n)
{
    int resultado;

    if(n==1)
    {
        return 1;
    }
    else
    {
        resultado=n+soma(n-1);
    }
    return resultado;
}


int main()
{
    int n;
    cout << "Digite o valor de n" << endl;
    cin>>n;
    cout<<"Resultado: " <<soma(n)<<endl;
    return 0;
}
