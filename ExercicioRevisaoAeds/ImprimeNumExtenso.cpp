#include <iostream>
#include <locale>
//Matheus Felipe
//02/09/2019
using namespace std;

int a(int num)
{
    setlocale(LC_ALL, "Portuguese");
    if(num == 0)
    {
        cout<<"Zero"<<endl;
    }
    else if(num == 1)
    {
        cout<<"Um"<<endl;
    }
    else if(num == 2)
    {
        cout<<"Dois"<<endl;
    }
    else if(num == 3)
    {
        cout<<"Três"<<endl;
    }
    else if(num == 4)
    {
        cout<<"Quatro"<<endl;
    }
    else if(num == 5)
    {
        cout<<"Cinco"<<endl;
    }
    else if(num == 6)
    {
        cout<<"Seis"<<endl;
    }
    else if(num == 7)
    {
        cout<<"Sete"<<endl;
    }
    else if(num == 8)
    {
        cout<<"Oito"<<endl;
    }
    else if(num == 9)
    {
        cout<<"Nove"<<endl;
    }
    else if(num == 10)
    {
        cout<<"Dez"<<endl;
    }
    else
    {
        cout<<"Valor inválido"<<endl;
    }

}

int main()
{
    int num;
    cout << "Digite um numero" << endl;
    cin>>num;
    a(num);
    return 0;
}
