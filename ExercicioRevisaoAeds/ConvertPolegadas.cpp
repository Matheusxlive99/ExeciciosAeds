#include <iostream>
#include <locale>
//Matheus Felipe
//03/09/2019
using namespace std;

int ConvertPol(float p)
{
    setlocale(LC_ALL, "Portuguese");
    float c;
    c=p*(2.54);
    cout<<p<<" polegadas, equivale a "<<c<<" centímetros."<<endl;
}

int main()
{
    float p;
    cout<<"Digite o valor em polegadas"<<endl;
    cin>>p;
    ConvertPol(p);

    return 0;
}
