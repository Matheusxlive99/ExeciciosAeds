#include <iostream>

using namespace std;

typedef struct Musica
{
    string nome;
    string cantor;
    string estilo;
    int pos;


    //01
    void Insere(string stnome, string stcantor, string stestilo, int stpos)//Essa fun��o Preenche a Playlis (OBS:Fiz dessa forma para n�o ficar preenchendo toda hora
    {
        nome=stnome;
        cantor=stcantor;
        estilo=stestilo;
        pos=stpos;
    }

    void Imprime()//Imprime o conteudo da Playlis
    {
        setlocale(LC_ALL, "Portuguese");
        cout<<"\nNome da M�sica: "<<nome<<"\n";
        cout<<"Cantor ou Banda: "<<cantor <<"\n";
        cout<<"G�nero da M�sica: "<<estilo<<"\n";
        cout<<"Posi��o no seu ranking:"<<pos<<"\n\n";

    }
};

  void Insere(string stnome, string stcantor, string stestilo, int stpos);
  void Imprime();
  void ExibirInfo(Musica musicas[], int n);
  void ExibirEstilo(Musica musicas[], string e);
  void NomeArtista(Musica musicas[], string f);
  void menu(Musica musicas[],int n, string e, string f);
