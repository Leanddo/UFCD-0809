#include <iostream>
using namespace std;
/*  Leia um vetor de 16 posições e troque os 8 primeiros valores pelos 8 últimos. Escreve no final o vetor obtido.  */

int main()
{
    int vet[15],aux;

    for (int i = 0; i < 16; i++) {
        cout << "Introduze 16 valores: ";
        cin >> vet[i];
    }
    for (int i = 0; i < 8; i++) {
        aux = vet[i];
        vet[i] = vet[i + 8];
        vet[i + 8] = aux;
    }
    cout << "O vetor foi trocado: ";
    for (int i = 0; i < 16; i++) {
        cout << vet[i]<<" ";
    }
   

}
