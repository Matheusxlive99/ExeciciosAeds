#include <iostream>
#include <locale>
using namespace std;
int Div(int x, int y)
{

    setlocale(LC_ALL, "Portuguese");
    if(x % y == 0)
    {
        cout<<x<<" � divis�vel por : "<<y<<endl;
    }

    else
    {
        cout<<x<<" N�o � divis�vel por "<<y<<endl;
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
