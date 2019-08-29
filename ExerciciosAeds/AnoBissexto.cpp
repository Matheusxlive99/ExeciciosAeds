#include <iostream>
#include <locale.h>
//Matheus Felipe
//Exercicio 4

using namespace std;

bool VerificaAno(int ano)
{
    setlocale(LC_ALL, "Portuguese");

    if((ano %4 == 0 && (ano % 100 != 0 || ano % 400 == 0)))  //Verificação se o ano é ou não bissexto
    {

       true;
        cout<<"O ano é bissexto"<<endl;


    }
    else
    {
        false;
         cout<<"O ano não é bissexto"<<endl;

    }
}


int main()
{
    setlocale(LC_ALL, "Portuguese");
    int ano;
    cout << "digite um ano para se verificar se é bisexto ou não" << endl;
    cin>>ano;
    VerificaAno(ano);
    return 0;
}
