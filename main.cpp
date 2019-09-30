
#include <iostream>
#include <locale>
#include <string.h>
#include "musica.h"
//Matheus Felipe
//Atividade 4 Struct

using namespace std;
int main()
{
    Musica *musicas = new Musica[5];
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

