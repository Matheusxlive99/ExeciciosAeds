#include <iostream>
#include <locale>
//Matheus Felipe
//03/09/2019
using namespace std;

int ConvertPes(float m)
{
    setlocale(LC_ALL, "Portuguese");
    float p;
    p=m*(3.281);
    cout<<m<<" Metros, equivale a "<<p<<" Pés."<<endl;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float m;
    cout<<"Digite o valor em Metros"<<endl;
    cin>>m;
    ConvertPes(m);

    return 0;
}
