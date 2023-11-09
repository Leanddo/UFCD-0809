#include <iostream>
#include <string>
using namespace std;
/*
Escreve um algoritmo que leia um vetor com 10 posições de números inteiros e verifique se um determinado valor, também inserido pelo utilizador
se está no vetor. Caso o elemento não esteja no vetor, apresente uma mensagem informar que não está.
*/
int main()
{
    int vetor[9], input;
    for (int i = 0; i < 10; i++)
    {
        cout << "Introduze dez numeros inteiros: ";
        cin >> vetor[i];
    }

    cout << "Introduze o valor para vereficar se esta no vetor: ";
    cin >> input;
    for (int i = 0; i < 10; i++)
    {
        if (vetor[i] == input)
        {
            cout << "O valor esta no vetor!";
        }
        else
        {
            cout << "O valor nao esta no vetor!";
        }
        break;
    }
}