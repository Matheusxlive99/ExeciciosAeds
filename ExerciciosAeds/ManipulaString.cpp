#include <iostream>
#include <string>
//Matheus Felipe
//04/10/2019
//Exercicio utilizando a função string
using namespace std;

string Busca(string frase, string busca)
{
    cout<<"Frase original:"<<"\n"<<endl;
    cout<<frase<<endl;
    cout<<"\n";

    /* Uso da função find() */
    int pos = frase.find(busca);
    for(int i=0; i<4; i++)
    {
        if (pos!=string::npos)
        {
            cout << "Achei o 'Springfield' na posicao: " << pos << endl;
        }
        pos = frase.find(busca, pos+i);
    }
    cout<<"\n";

    cout << "Frase Substituindo o Springfield por outro nome:" << endl;
    cout<<"\n";
    /* Uso da função replace() */
    for(int i=0; i<4; i++)
    {
        pos = frase.find(busca);

        frase.replace(pos,busca.length(),"Summerfield.");

    }

    return frase;


}




int main ()
{
    string frase = "Se eleito, darei a Springfield o que Springfield merece, ou seja, uma Springfield bem melhor que a Springfield de ontem!";
    string busca = "Springfield";
    cout<<Busca(frase, busca);
    cout<<"\n";

    return 0;
}
