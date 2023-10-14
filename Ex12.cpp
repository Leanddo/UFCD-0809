#include <iostream>
using namespace std;
/*Escreve um algoritmo que calcule o resto da divisão por 2 de um número inserido pelo utilizador. */
int main()
{
    int numero;

    std::cout << "Introduze um numero: ";
    cin >> numero;
    std::cout << "O resto da divisao do numero "<<numero<<" e de "<<numero%2;
}