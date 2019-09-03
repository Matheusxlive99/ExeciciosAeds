#include <iostream>
#include <locale>
//Matheus Felipe
using namespace std;
int ordenaVet(int vet[])
{
    int aux=0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (vet[i] < vet[j])
            {
                //Bolha
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }
}

void ImprimeVetOriginal(int vet[])
{
    cout<<"\n";
    cout<<"Vetor Original"<<endl;
    cout<<"[";
    for(int i=0; i<10; i++)
    {
        cout<<" "<<vet[i];
    }
    cout<<"]";
}


void ImprimeVetOrdenado(int vet[])
{
    cout<<"\n";
    cout<<"Vetor Ordenado"<<endl;
    cout<<"[";
    for(int k=0; k<10; k++)
    {
        cout<<" "<<vet[k];
    }
    cout<<"]";
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vet[10];
    cout<<"Preencha o vetor de 10 posições"<<endl;
    for(int i=0; i<10; i++)
    {
        cin>>vet[i];
    }
    ImprimeVetOriginal(vet);
    cout<<"\n";
    ordenaVet(vet);
    cout<<"\n";
    ImprimeVetOrdenado(vet);


    return 0;
}
