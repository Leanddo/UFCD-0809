#include <iostream>
using namespace std;
/*Escreve um programa que lê 6 valores inteiros e, em seguida, mostre os valores lidos pela ordem inversa.*/

int main()
{
    int vet[5];

    for (int i = 0; i < 6; i++)
    {
        cout << "Introduze 6 valores: ";
        cin >> vet[i];
    }
    cout << "Ordem inversa: ";

    for (int i = 5; i >= 0; i--)
    {
        cout << vet[i] << " ";
    }
}