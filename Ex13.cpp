#include <iostream>
using namespace std;
/*Escreve um algoritmo que identifique se o número é par ou ímpar. */
int main()
{
    int num;

    std::cout << "Introduze um numero: ";
    cin >> num;
   
    if (num%2==0){
        std::cout << "O numero "<<num<<" e par";
    }
    else{
        std::cout << "O numero "<<num<<" e impar";    
    }
    return 0;
}