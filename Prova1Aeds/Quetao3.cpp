#include <iostream>
#include <locale>
#include <locale>
//Matheus Felipe De Castro Martins
//Quetão 3
//Média ponderada ou aritmética

using namespace std;

float Media(float n1, float n2, float n3, char TCalc)
{
    setlocale(LC_ALL, "Portuguese");
    float MediaA=0, MediaP=0;
    if(TCalc == 'A' || TCalc == 'a')
    {
        MediaA = (n1+n2+n3) / (3);
        cout<<"\n";
        cout<<"A Média Aritmética do Aluno é: "<<MediaA<<endl;
    }
    else if(TCalc == 'P' || TCalc == 'p')
    {
        MediaP = (n1*0.5 + n2*0.3 + n3*0.2) / (0.5+0.3+0.2);
        cout<<"\n";
        cout<<"A Média Ponderada do Aluno é: "<<MediaP<<endl;
    }
    else
    {
        cout<<"Você digitou uma opção Inválida"<<endl;
    }

}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float n1, n2,  n3;
    char TCalc;

    cout<<"Informe sua nota 1"<<endl;
    cin>>n1;
    cout<<"Informe sua nota 2"<<endl;
    cin>>n2;
    cout<<"Informe sua nota 3"<<endl;
    cin>>n3;
    cout<<"Informe se você deseja Calcular a Média aritmética ou ponderada(Digite A-para aritmética ou P-para ponderada)"<<endl;
    cin>>TCalc;
    Media(n1,n2,n3,TCalc);

    return 0;
}
