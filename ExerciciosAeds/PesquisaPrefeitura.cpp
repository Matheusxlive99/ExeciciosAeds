#include <iostream>
#include <locale>
#include <math.h>
//Matheus Felipe
//Exercicio8
using namespace std;



int Pesquisaprefeitura(int filhos, float salario)//Fun��o para realizar a pesquisa
{
    setlocale(LC_ALL, "Portuguese");
    int  MediaFilhos=0, ContSal=0;//Declara��o dse vari�veis
    float Msal=0, MediaSalario=0, PorcentagemS=0, Contp=0;

    for(;;)
    {
        cout<<"digite a quantidade de filhos e o seu salario (-1 quando quiser encerrar)"<<endl;//-1 para encerrar
        cin>>filhos;
        if(filhos == -1)
        {
            break;// break para para de coletar os dados
        }
        cin>>salario;
        Contp++;

        if(salario>Msal)
        {
            Msal=salario;//Calculo maior salario
        }
        if(salario<=500)
        {
            ContSal++;
        }
        MediaSalario+=salario;
        MediaFilhos+=filhos;
    }
    if(Contp)
    {
        MediaSalario/=Contp;//media dos salarios
    }
    if(Contp)
    {
        MediaFilhos/=Contp;//media dos filhos
    }
    if(Contp)
    {
        PorcentagemS = (ContSal / Contp) * 100.0;//porcentagem salario at� 500
    }

    cout<<"A m�dia do s�lario da popula��o �: "<<MediaSalario<<endl;
    cout<<"\n";
    cout<<"A m�dia do n�mero de filhos �: "<<MediaFilhos<<endl;
    cout<<"\n";
    cout<<"A porcentagem de pessoas que recebem at� R$500,00 �: "<<PorcentagemS<<" %" <<endl;
    cout<<"\n";
    cout<<"O Maior sal�rio da popula��o �: "<<Msal<<endl;
    cout<<"\n";
    cout<<"O Total de pessoas que participou da entrevista foram: "<<Contp<<endl;//imprimindo os resultados
}



int main()
{
    int filhos;
    float salario;
    Pesquisaprefeitura(filhos,salario);//chamando a fun��o
    return 0;
}
