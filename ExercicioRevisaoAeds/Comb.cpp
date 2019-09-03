#include <iostream>
#include <locale>
//Matheus Felipe
//03/09/2019
using namespace std;
int comb(int n,int k)
{
    setlocale(LC_ALL, "Portuguese");
    if(k==1)
    {
        return n;
    }
    else if(k==n)
    {
        return 1;
    }
    else if(k>1 && n>k)
    {
        return comb(n-1,k-1)+comb(n-1,k);
    }
}

int main()
{
    int n,k;
    cout<<"Digite o valor de K"<<endl;
    cin>>k;
    cout<<"Digite o valor de n"<<endl;
    cin>>n;
    comb(n,k);
    cout<<comb(n,k);

    return 0;
}
