#include <iostream>
#include <locale>
#include <math.h>
//Matheus Felipe

using namespace std;

float PesoIdeal(float h, char sexo)
{
    setlocale(LC_ALL, "Portuguese");
    float PI;

    if(sexo == 'F' || sexo == 'f')
    {
        PI=(62.1 * h) - 44.7;
        cout<<"\n";
        cout<<"O seu peso ideal �: "<<PI<<endl;
    }
    else if(sexo == 'M' || sexo == 'm' )
    {
        PI=(72.7 * h) - 58;
        cout<<"\n";
        cout<<"O seu peso ideal �: "<<PI<<endl;
    }

    else
    {
        cout<<"\n";
        cout<<"N�o foi poss�vel calcular seu peso ideal (Sexo inv�lido"<<endl;
    }


}

int main()
{
    float h;
    char sexo;

    cout<<"Digite a sua altura"<<endl;
    cin>>h;
    cout<<"Digite o seu sexo(F para Feminino ou M Para masculino)"<<endl;
    cin>>sexo;
    PesoIdeal(h,sexo);
    return 0;
}
