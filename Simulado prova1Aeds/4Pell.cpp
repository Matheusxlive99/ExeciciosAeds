#include <iostream>
#include <math.h>
#include <locale>
//Matheus Felipe
//PELL

using namespace std;
int Pell(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        return 2 * Pell(n-1) + Pell(n-2);
    }
}
int main()
{
    setlocale(LC_ALL, "Portuguese" );
    int n;
    cout<<"Digite qual termo da sequ�ncia de Pell voc� deseja visualizar"<<endl;
    cout<<"Obs: A sequ�ncia come�a do 0"<<endl;
    cin>>n;
    cout<<"O "<<n<<"� termo da sequ�ncia de Pell �: "<<Pell(n)<<endl;
    return 0;
}
