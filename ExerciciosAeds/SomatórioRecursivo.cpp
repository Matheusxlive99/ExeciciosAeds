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
    cout << "Qual n�mero v�ce deseja calcular o somat�rio?" << endl;
    cin>>n;
    cout<<" o somatorio de "<<n<<" � "<<somatorio(n)<<endl;//Impress�o dos resultados
    return 0;
}
