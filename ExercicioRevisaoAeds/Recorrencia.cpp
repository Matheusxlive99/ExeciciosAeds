#include <iostream>
#include <locale>
//Matheus Felipe
using namespace std;

int Recorrencia(int n){
    if(n==1){
        return 1;
    }
    else{
        return 2*Recorrencia(n/2) + n;
    }

}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n;
    cout << "Digite o valor de n" << endl;
    cin>>n;
    Recorrencia(n);
    cout<<Recorrencia(n);
    return 0;
}
