#include <iostream>
#include <locale>
#include <string.h>
//Matheus Felipe
//Atividade 4 Struct

using namespace std;
//00
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

//02
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

//03
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
//04
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
    /*if(x==1)
    {
        cout<<f <<" est� presente na playlist"<<endl;
    }
    else
    {
        cout<<f<<" N�o est� presente na playlist" <<endl;
    }*/
}

//05
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


int main()
{
    Musica *musicas= new Musica[5];
    Musica m1,m2,m3,m4,m5;
    int n;
    string e,f;

    musicas[0]=m1;
    musicas[1]=m2;
    musicas[2]=m3;
    musicas[3]=m4;
    musicas[4]=m5;


    musicas[0].Insere("Ser Mudado", "Alessandro Vilas Boas","Gospel",1);
    musicas[1].Insere("Hey Pai", "Isadora Pompeo", "Gospel", 2);
    musicas[2].Insere("Correrei","Gabriela Rocha", "Gospel",3);
    musicas[3].Insere("Insubstitu�vel", "Luma Elpidio", "Gospel", 4);
    musicas[4].Insere("Que amor � esse?","Luma Elpidio", "Gospel", 5);

    menu(musicas,n,e,f);

    return 0;
}
