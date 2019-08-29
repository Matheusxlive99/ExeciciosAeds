#include <iostream>
#include <locale>
//Matheus Felipe
//Exercicio6
using namespace std;

int PreencheVetor(int VetA[], int VetB[])//Esta função preenche o vetor A e faz os calculos necessarios para preencher o vetor b com o somatorio de cada elemento de a
{
    setlocale(LC_ALL, "Portuguese");

    int i,a,k,j; //Variaveis auxiliares
    int somatorio=0;

    cout<<"Preencha o Vetor A"<<endl;

    for(i=0; i<10; i++)
    {
        cin>>VetA[i];//usuario preenche o vetor A
    }

    cout<<" Vetor A"<<endl;
    cout<<"[ ";
    for(i=0; i<10; i++)
    {
        cout<<" "<<VetA[i]<<" ";
    }
    cout<<" ]";
    cout<<endl;
    cout<<"Vetor B com somatorio dos ementos do vetor a em suas respectivaas posições"<<endl;
    cout<<"[ ";
    for(j=0; j<10; j++)
    {
        somatorio = 0;
        for(a=0; a<=VetA[j]; a++)
        {
            somatorio = somatorio + (VetB[j] + a);//Vetor b sendo preenchido com os somatorios do vetor A
        }

        VetB[j]=somatorio;


        cout<<" "<<VetB[j]<<" ";

    }
    cout<<" ]";
}

int main()
{
    int VetA[10]= {0,0,0,0,0,0,0,0,0,0}, VetB[10]= {0,0,0,0,0,0,0,0,0,0};
    PreencheVetor(VetA,VetB);
    return 0;
}
