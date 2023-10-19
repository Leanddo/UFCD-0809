#include <iostream>
using namespace std;
/*  Faz um algoritmo que receba um número e moste a sequência entre o número inserido até 100 (while). */
int main()
{
    int numi;
    int i =1;

    std::cout << "Introduze o numero de 0 a 100: ";
    cin >> numi;

    if (numi <= 100)
    {
        while (i < numi)
        {
            cout << i<<" ";
            i++;
            
        }
    }
    else{
        cout<< "introduze um numero menor que 100";
    }

    return 0;
}