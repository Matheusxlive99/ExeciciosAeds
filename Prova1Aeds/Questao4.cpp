#include <iostream>
#include <math.h>
#include <locale>
//Matheus Felipe
//Quetão 4
//MultiplicaRec e MultiplicaNormal

using namespace std;

long int multiplica(int x, int y)
{
    long int res=0;
    while(y != 0)
    {
        res = res+x;
        y--;
    }
    return res;
}

long int multiplica_recursivo(int x, int y)
{
    if(x==0)
    {
        return 0;
    }
    else
    {
        return x + multiplica(x,y-1);
    }

}

int main()
{
    cout << "Resultado Interativo: " <<multiplica(4,650)<<endl;
    cout << "Resultado Recursivo: " <<multiplica_recursivo(4,650)<<endl;;
    return 0;
}


