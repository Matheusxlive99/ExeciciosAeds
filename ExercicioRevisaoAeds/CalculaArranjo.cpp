#include <iostream>
#include <locale>
//Matheus Felipe
//03/09/2019
using namespace std;

int arranjo(int c)
{
    setlocale(LC_ALL, "Portuguese");
    int n, p, f, x, a;
    cout<<"Digite o valor de N"<<endl;
    cin>>n;
    cout<<"Digite o valor de P"<<endl;
    cin>>p;
    f=n;
    x=n-p;

    for(int i= 1; i<n; i++)
    {
        f*=i;

    }
    for(int i=1; i<(n-p); i++)
    {
        x*=i;
    }
    cout<<"\n";
    cout<<"O fatorial de "<<n<<" é: "<<f<<endl;
    cout<<"O fatorial de "<<n<<"-"<<p<<" é: "<<x<<endl;

    if(n-p==0)
    {
        cout<<"\n";
        cout<<"não foi possível calcular o arranjo, pois o denominador é 0"<<endl;
        return -1;
    }
    else
    {
        a=f/x;
        cout<<"O valor do arranjo é: "<<a<<endl;
    }

}
int main()
{
    int c;
    arranjo(c);
    return 0;
}
