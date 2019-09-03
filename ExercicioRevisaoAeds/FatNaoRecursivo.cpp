#include <iostream>
#include <locale>
//Matheus Felipe

using namespace std;

long int fat(int a)
{
    setlocale(LC_ALL, "Portuguese");
    long int n;
    long int f;
    cout<<"Digite um numero para ser calculado o valor do seu fatorial"<<endl;
    cin>>n;
    f=n;
    for(int i=1; i<n; i++)
    {
        f*=i;
    }
    cout<<"O fatorial de "<<n <<" é:";
    cout<<f;
}



int main()
{
    int a;
    fat(a);
    return 0;
}
