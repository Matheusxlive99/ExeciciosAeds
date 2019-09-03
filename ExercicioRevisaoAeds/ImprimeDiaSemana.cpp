#include <iostream>
#include <locale>

using namespace std;
int Sem(int n)
{
    setlocale(LC_ALL, "Portuguese");
    if(n==1)
    {
        cout<<"DOM"<<endl;
    }
    else if(n == 2)
    {
        cout<<"SEG"<<endl;
    }
    else if(n == 3)
    {
        cout<<"TER"<<endl;
    }
    else if(n == 4)
    {
        cout<<"QUA"<<endl;
    }
    else if(n == 5)
    {
        cout<<"QUI"<<endl;
    }
    else if(n == 6)
    {
        cout<<"SEX"<<endl;
    }
    else if(n == 7)
    {
        cout<<"SAB"<<endl;
    }
    else
    {
        cout<<"Dia invalido(somente 1 ao 7 é valido"<<endl;
    }
}

int main()
{
    int n;
    cout << "Digite um valor" << endl;
    cin>>n;
    cout<<"Este valor corresponde a: "<<endl;
    Sem(n);
    return 0;
}
