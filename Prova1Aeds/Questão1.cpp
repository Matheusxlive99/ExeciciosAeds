#include <iostream>
#include <math.h>
#include <locale>
//Matheus Felipe De Castro Martins
//Questão 1 prova 1(Euclidiana)
using namespace std;

float DistanciaEuclidiana(float px, float py, float qx, float qy)
{
    setlocale(LC_ALL, "Portuguese");
    float d;
//d = sqrt(pow(px-py),2 + pow(py-qy),2);
    d=sqrt(pow((px-qx),2) + pow((py-qy),2));//Formula para se calcular a distância Euclidiana.
    cout<<d;

}
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float px,  py,  qx,  qy;

    cout<<"Informe os Dois pontos P"<<endl;
    cout << "Digite o valor de Px" << endl;
    cin>>px;
    cout << "Digite o valor de Py" << endl;
    cin>>py;

    cout<<"\n";
    cout<<"Agora informe os dois pontos Q"<<endl;
    cout << "Digite o valor de Qx" << endl;
    cin>>qx;
    cout << "Digite o valor de Qy" << endl;
    cin>>qy;
    cout<<"\n";
    cout<<"A distâcia Euclediana entre os pontos P e Q é:"<<endl;
    DistanciaEuclidiana(px,py,qx,qy);//Chamando a Função



    return 0;
}
