#include <iostream>
#include <locale>
using namespace std;

bool Pesquisa(int vet[], int k)
{
    for(int i=0; i<10; i++)
    {
        if(k==vet[i])
        {

             cout<<"\n";
             cout<< k <<" Pertence ao vetor"<<endl;
             return k= true;
        }
        else {
            return k= false;
        }
    }

}

void ImprimeVet(int vet[])
{
    cout<<"\n";
        cout<<"[ ";
                 for(int i=0; i<10;i++){
                 cout<<" "<<vet[i];
             }

                 cout<<" ]";
    }

        int main()
        {
        setlocale(LC_ALL, "Portuguese");
        int vet[10], k;
        cout<<"Preencha o vetor de 10 posições"<<endl;
        for(int i=0; i<10;i++){
        cin>>vet[i];
    }
        cout<<"Digite o valor de k"<<endl;
        cin>>k;
        ImprimeVet(vet);
        Pesquisa(vet,k);
        return 0;
    }
