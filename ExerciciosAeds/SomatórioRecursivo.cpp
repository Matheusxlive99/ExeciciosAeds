#include <iostream>
#include <locale>

using namespace std;

int somatorio(int n){
if(n == 1){//Caso Base
    return 1;
}

    return n + somatorio(n-1);//Recursividade
    cout<<n;

}

int main()
{
    setlocale(LC_ALL, "portuguese");//Caracteres especiais
    int n;
    cout << "Qual número vôce deseja calcular o somatório?" << endl;
    cin>>n;
    cout<<" o somatorio de "<<n<<" é "<<somatorio(n)<<endl;//Impressão dos resultados
    return 0;
}
