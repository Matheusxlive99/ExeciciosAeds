#include <iostream>
#include <locale>
//Matheus Felipe
//Exercicio 5

using namespace std;

int Mod(int x, int y){
if(x>y){
    return Mod(x-y,y);//Caso base
}
else if(x<y){//Chmada recursiva 1
    return x;
}
else{ //demais casos
    return 0;
}
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int x,y;
    cout<<"Voc� deseja calcular o resto da divis�o de: "<<endl;
    cin>>x;
    cout<<"\n";//Quebra de linha
    cout<<"Por: "<<endl;
    cin>>y;
    cout<<"\n";
    cout<<"O Resto da divis�o de "<<x<<" por "<<y<<" �: "<<endl;
    cout<<"\n";
    cout<<Mod(x,y);//Chamada da fun��o recursiva

    return 0;
}
