#include <iostream>
#include <locale>
//Matheus Felipe De Castro Martins
//Quest�o 2
//Contar impares vetor

using namespace std;

void PreencheVet(int vet[])
{
    setlocale(LC_ALL, "Portuguese");
    cout<<"Preencha o Vetor de 5 posi��es"<<endl;
    for(int i=0; i<5; i++)
    {
        cin>>vet[i];
    }
}

int ContImpar(int vet[])
{
    setlocale(LC_ALL, "Portuguese");
    int aux=0;
    for(int i=0; i<5; i++)
    {
        if(vet[i]%2==1)
        {
            aux++;
        }
    }
    cout<<"\n";
    cout<<"O vetor cont�m "<<aux<<" n�meros �mpares"<<endl;

}

int main()
{
    int vet[5];
    PreencheVet(vet);
    ContImpar(vet);


    return 0;
}
