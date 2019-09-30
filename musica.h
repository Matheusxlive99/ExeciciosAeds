#include <iostream>

using namespace std;

typedef struct Musica
{
    string nome;
    string cantor;
    string estilo;
    int pos;


    //01
    void Insere(string stnome, string stcantor, string stestilo, int stpos)//Essa função Preenche a Playlis (OBS:Fiz dessa forma para não ficar preenchendo toda hora
    {
        nome=stnome;
        cantor=stcantor;
        estilo=stestilo;
        pos=stpos;
    }

    void Imprime()//Imprime o conteudo da Playlis
    {
        setlocale(LC_ALL, "Portuguese");
        cout<<"\nNome da Música: "<<nome<<"\n";
        cout<<"Cantor ou Banda: "<<cantor <<"\n";
        cout<<"Gênero da Música: "<<estilo<<"\n";
        cout<<"Posição no seu ranking:"<<pos<<"\n\n";

    }
};

  void Insere(string stnome, string stcantor, string stestilo, int stpos);
  void Imprime();
  void ExibirInfo(Musica musicas[], int n);
  void ExibirEstilo(Musica musicas[], string e);
  void NomeArtista(Musica musicas[], string f);
  void menu(Musica musicas[],int n, string e, string f);
