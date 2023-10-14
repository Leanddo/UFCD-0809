#include <iostream>
using namespace std;
/*Escreve um algoritmo que identifique se o número é positivo ou negativo. */
int main()
{
    double num;

    std::cout << "Introduze um numero: ";
    cin >> num;
   
    if (num>0){
        std::cout << "O numero "<<num<<" e positivo";
    }
    else{
        std::cout << "O numero "<<num<<" e negativo";    
    }
    return 0;
}