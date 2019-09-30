#include "musica.h"

using namespace std;

void ExibirInfo(Musica musicas[], int n)//Recebe um inteiro e imprime a musica correspondfe a posição informada
{
    cout<<"Informe um número de 1 a 5 "<<endl;
    cin>>n;
    for(int i=0; i<5; i++)
    {
        if(n == musicas[i].pos)
        {
            musicas[i].Imprime();
        }
        else
        {
            cout<<"Valor Inválido"<<endl;
        }
    }

}

void ExibirEstilo(Musica musicas[], string e)//Esta função recebe um string e, referente a um estilo musical e verifica se esse estilo está na playlist.
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

            cout<<"Não há nenhuma música "<<e<<" na sua playlist"<<endl;
        }
    }
}

void NomeArtista(Musica musicas[], string f)//Está função recebe um string f com o nome de um artista e verifica se ele canta alguma musica que esta na playlist
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
            cout<<f <<" está presente na playlist e canta as musicas "<<musicas[i].nome<<endl;
        }
        else
        {
            //x = 0;
            cout<<" Não está presente na playlist" <<endl;
        }
        cout<<"\n";
    }
}

void menu(Musica musicas[],int n, string e, string f)//MEnu de opções.
{
    setlocale(LC_ALL, "Portuguese");
    int escolha=0;
    do
    {
        cout<<"-----MENU DE OPÇÕES-----"<<endl;
        cout<<"DIGITE 1 PARA EXIBIR INFORMAÇÕES SOBRE AS MÚSICAS"<<endl;
        cout<<"DIGITE 2 PARA BUSCA POR RANKING"<<endl;
        cout<<"DIGITE 3 PARA BUSCA POR GÊNERO"<<endl;
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


