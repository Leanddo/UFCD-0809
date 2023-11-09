#include <iostream>
#include <set>
using namespace std;

/* Escreva um programa que leia números inteiros no intervalo [0,50] e os guarde em um vetor com 10 posições.
Preencha um segundo vetor com os números ímpares do primeiro vetor. Imprima os dois vetores. */

int main() {
    int tamanho=10,vetorOriginal[tamanho],vetorImpares[tamanho],countImpares=0;

    cout << "Digite 10 numeros inteiros entre 0-50:" << endl;

    for (int i = 0; i < tamanho; i++) {
        int numero;
        cin >> numero;

        if (numero >= 0 && numero <= 50) {
            vetorOriginal[i] = numero;

            if (numero % 2 != 0) {
                vetorImpares[countImpares] = numero;
                countImpares++;
            }
        } else {
            cout << "Número fora do intervalo [0, 50]. Por favor, insira novamente." << endl;
            i--; 
        }
    }
    cout<<"Vetor principal: ";
    for (int i = 0; i < tamanho; i++) {
        cout<<vetorOriginal[i]<<" ";
     }
    cout<<"Numeros imapres: ";
    for (int i = 0; i < tamanho; i++) {
        cout<<vetorOriginal[i]<<" ";
     }
    
    return 0;
}