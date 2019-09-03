#include <iostream>
#include <locale>
using namespace std;
int compara(int x, int y)
{

    setlocale(LC_ALL, "Portuguese");
    if(x>y)
    {
        cout<<"o maior valor é: "<<endl;

        cout<<x;
    }
    else if(y>x)
    {
        cout<<"o maior valor é: "<<endl;

        cout<<y;
    }
    else
    {
        cout<<"Os valores são iguais"<<endl;
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

    compara(x,y);

    return 0;
}
