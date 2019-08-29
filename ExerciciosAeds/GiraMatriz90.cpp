#include <iostream>
#include <locale>
//Matheus Felipe
//Exercicio7

using namespace std;

int PreencheMatriz(int matriz[3][3])//Esta função é utilizada para preencher a matriz
{
    setlocale(LC_ALL, "Portuguese");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<"Digite o valor da linha:"<<i<<" coluna:"<<j<<endl;
            cin>>matriz[i][j];
        }
    }
}

void ImprimiMatriz(int matriz[3][3]) //Esta função é utilizada para imprimir a matriz na tela e girar.
{

    cout<<"Matriz original"<<endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<matriz[i][j];
        }
        cout<<"\n";
    }

    cout<<"\n";


    cout<<"Matriz girada em 90°"<<endl;
    for(int j=0; j<3; j++)             //Aqui vamos girar a matriz em 90º trocando linhas pelas colunas invertendo os indices ij.
    {
        for(int i=2; i>=0; i--)
        {
            cout<<matriz[i][j];
        }
        cout<<"\n";
    }
}

int main()//Função main
{
    int matriz[3][3];
    cout<<"Preencha a Matriz"<<endl;
    PreencheMatriz(matriz);
    ImprimiMatriz(matriz);
    return 0;
}
