#include <iostream>
#include <locale.h>
//Matheus Felipe
//Exercicio 4

using namespace std;

bool VerificaAno(int ano)
{
    setlocale(LC_ALL, "Portuguese");

    if((ano %4 == 0 && (ano % 100 != 0 || ano % 400 == 0)))  //Verifica��o se o ano � ou n�o bissexto
    {

       true;
        cout<<"O ano � bissexto"<<endl;


    }
    else
    {
        false;
         cout<<"O ano n�o � bissexto"<<endl;

    }
}


int main()
{
    setlocale(LC_ALL, "Portuguese");
    int ano;
    cout << "digite um ano para se verificar se � bisexto ou n�o" << endl;
    cin>>ano;
    VerificaAno(ano);
    return 0;
}
