#include <iostream>
using namespace std;
/* Faz um algoritmo que receba um número inicial e um número final e
depois mostre todos os números que compõe o intervalo deles. (for). */
int main()
{
    int numi,numf;

    std::cout << "Introduze o numero inicial: ";
    cin >> numi;
    std::cout << "Introduze um numero final: ";
    cin >> numf;

   
    for(int i= numi;i<=numf;i++){
        cout<<i<<" ";
    }
    return 0;
}