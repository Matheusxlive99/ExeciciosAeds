#include <iostream>
#include <locale>
using namespace std;
int Div(int x, int y)
{

    setlocale(LC_ALL, "Portuguese");
    if(x % y == 0)
    {
        cout<<x<<" É divisível por : "<<y<<endl;
    }

    else
    {
        cout<<x<<" Não É divisível por "<<y<<endl;
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int x, y;
    cout<<"Digite o primeiro valor"<<endl;
    cin>>x;
    cout<<"Digite o segundo valor"<<endl;
    cin>>y;

    Div(x,y);

    return 0;
}
