#include <iostream>
using namespace std;

/*Escreva um programa que leia um vetor de 10 posições e crie um segundo vetor substituindo os valores negativos por 1.*/

int main() {
    const int tamanho = 10;
    int vetorOriginal[tamanho];
    int vetorSubstituido[tamanho];

    cout << "Digite 10 numeros inteiros:" << endl;

    for (int i = 0; i < tamanho; i++) {
        cin >> vetorOriginal[i];

        if (vetorOriginal[i] < 0) {
            vetorSubstituido[i] = 1;
        } else {
            vetorSubstituido[i] = vetorOriginal[i];
        }
    }

    cout << "Vetor Original:" << endl;
    for (int i = 0; i < tamanho; i++) {
        cout << vetorOriginal[i] << " ";
    }
    cout << endl;

    cout << "Vetor Substituído:" << endl;
    for (int i = 0; i < tamanho; i++) {
        cout << vetorSubstituido[i] << " ";
    }
    cout << endl;

    return 0;
}