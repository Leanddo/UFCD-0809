#include <iostream>
using namespace std;
/*Faz um algoritmo que receba um valor maior que 10. Escrever todos os números pares entre 1 e o valor recebido. */
int main()
{
    double numi,par;

    std::cout << "Introduze o numero de maior do que 10: ";
    cin >> numi;


    for(int i= 1;i<numi;i++){
        par=i%2;
        if(par==0){
            cout<<i<<" ";
        }

    }
   
    return 0;
}