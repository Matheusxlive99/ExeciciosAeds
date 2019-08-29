#include <iostream>
#include <locale.h>
//Matheus Felipe


using namespace std;

int RetornaMes(int n) //Esta função irá retorna o mes ao numero corresponte informado
{
    setlocale(LC_ALL, "Portuguese");
    if(n==1)
    {
        cout<<"Janeiro"<<endl;
    }
    else if(n==2)
    {
        cout<<"Fevereiro"<<endl;
    }
    else if(n==3)
    {
        cout<<"Marco"<<endl;
    }
    else if(n==4)
    {
        cout<<"Abril"<<endl;
    }
    else if(n==5)
    {
        cout<<"Maio"<<endl;
    }
    else if(n==6)
    {
        cout<<"Junho"<<endl;
    }
    else if(n==7)
    {
        cout<<"Julho"<<endl;
    }
    else if(n==8)
    {
        cout<<"Agosto"<<endl;
    }
    else if(n==9)
    {
        cout<<"Seteembro"<<endl;
    }
    else if(n==10)
    {
        cout<<"Outubro"<<endl;
    }
    else if(n==11)
    {
        cout<<"Novembro"<<endl;
    }
    else if(n==12)
    {
        cout<<"Dezembro"<<endl;
    }
    else
    {
        cout<<"Este numero eh invalido, Pois no nosso calendario os meses vão somente ao numero 12"<<endl;
    }

}
int main()
{
    //Função main
    int a, n;
    cout<<"Digite um numero enre 1 e 12"<<endl;
    cin>>n;
    a=RetornaMes(n);
    return 0;


}
