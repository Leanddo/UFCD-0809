#include <iostream>
#include <string>
using namespace std;
/*
Faz um programa que possua um vetor designado A que armazene 6 números inteiros. O programa deve executar os seguintes passos:
    Atribua os seguintes valores a e esse vetor: 1, 0, 5, -2, -5, 7.
    Armazene em uma variável inteira a soma entre os valores das posições A[0], A[1] e A[5] do vetor e mostre.
    Mostre cada valor do vetor A, um em cada linha.
*/
int main()
{
    int A[6]={1,0,5,-2,-5,7},soma;

    soma= A[1]+A[0]+A[5];

    cout<<"A soma dos vetores A[1] A[0] A[5] = "<<soma<<'\n';
    cout<<"Valores do vetor A[]: ";

    for (int i = 0; i < 6; i++)
    {
        cout <<A[i]<<" ";
    }
}