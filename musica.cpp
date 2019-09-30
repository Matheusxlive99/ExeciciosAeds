#include "musica.h"

using namespace std;

void ExibirInfo(Musica musicas[], int n)//Recebe um inteiro e imprime a musica correspondfe a posi��o informada
{
    cout<<"Informe um n�mero de 1 a 5 "<<endl;
    cin>>n;
    for(int i=0; i<5; i++)
    {
        if(n == musicas[i].pos)
        {
            musicas[i].Imprime();
        }
        else
        {
            cout<<"Valor Inv�lido"<<endl;
        }
    }

}

void ExibirEstilo(Musica musicas[], string e)//Esta fun��o recebe um string e, referente a um estilo musical e verifica se esse estilo est� na playlist.
{
    cout<<"Digite um estilo Musical(Gospel, Sertaneja, Mpb, Pop, Internacional)"<<endl;
    cin>>e;
    cout<<"\n";

    for(int i=0; i<5; i++)
    {

        if(musicas[i].estilo == e)
        {
            musicas[i].Imprime();
        }
        else
        {

            cout<<"N�o h� nenhuma m�sica "<<e<<" na sua playlist"<<endl;
        }
    }
}

void NomeArtista(Musica musicas[], string f)//Est� fun��o recebe um string f com o nome de um artista e verifica se ele canta alguma musica que esta na playlist
{
    setlocale(LC_ALL, "Portuguese");
    bool x;
    cout<<"Digite o nome de um artista"<<endl;
    cin.ignore();
    getline(cin, f);

    for(int i=0; i<5; i++)
    {

        if(musicas[i].cantor == f)
        {
            // x = 1;
            cout<<f <<" est� presente na playlist e canta as musicas "<<musicas[i].nome<<endl;
        }
        else
        {
            //x = 0;
            cout<<" N�o est� presente na playlist" <<endl;
        }
        cout<<"\n";
    }
}

void menu(Musica musicas[],int n, string e, string f)//MEnu de op��es.
{
    setlocale(LC_ALL, "Portuguese");
    int escolha=0;
    do
    {
        cout<<"-----MENU DE OP��ES-----"<<endl;
        cout<<"DIGITE 1 PARA EXIBIR INFORMA��ES SOBRE AS M�SICAS"<<endl;
        cout<<"DIGITE 2 PARA BUSCA POR RANKING"<<endl;
        cout<<"DIGITE 3 PARA BUSCA POR G�NERO"<<endl;
        cout<<"DIGITE 4 PARA BUSCA POR CANTOR"<<endl;
        cout<<"\n";
        cin>>escolha;
        switch(escolha)
        {
        case 1:
            for(int i=0; i<5; i++)
            {
                musicas[i].Imprime();
            }
            break;

        case 2:
            ExibirInfo(musicas,n);
            break;

        case 3:
            ExibirEstilo(musicas,e);
            break;

        case 4:
            NomeArtista(musicas,f);

        }
    }
    while(escolha!=0);
}


