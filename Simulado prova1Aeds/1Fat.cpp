#include <iostream>
#include <locale>
//Matheus Felipe

using namespace std;

long int fatorial(long int n)
{
    setlocale(LC_ALL,"Portuguese");
    long int fat=0;
    fat=n;
    for(long int i=1; i<n; i++)
    {
        fat*=i;
    }
    cout<<"O Fatorial de "<<n<<" é: "<<fat;
}
int main()
{
    long int n=0;
    cout << "Digite um numero para ser calculado seu fatorial" << endl;
    cin>>n;
    fatorial(n);
    return 0;
}
