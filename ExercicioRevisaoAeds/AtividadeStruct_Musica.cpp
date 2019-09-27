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

//02
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

//03
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
//04
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
    /*if(x==1)
    {
        cout<<f <<" está presente na playlist"<<endl;
    }
    else
    {
        cout<<f<<" Não está presente na playlist" <<endl;
    }*/
}

//05
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
    musicas[3].Insere("Insubstituível", "Luma Elpidio", "Gospel", 4);
    musicas[4].Insere("Que amor é esse?","Luma Elpidio", "Gospel", 5);

    menu(musicas,n,e,f);

    return 0;
}
