#include <iostream>
using namespace std;
/* Faz um programa para ler a nota de 10 alunos e guarde num vetor. Calcule e imprima a média em geral. */

int main()
{
    int vet[10], soma = 0, conta = 0;

    for (int i = 0; i < 10; i++)
    {
        cout << "Introduza a nota do aluno " << i + 1 << ": ";
        cin >> vet[i];
        soma = vet[i] + soma;
        conta++;
    }
    cout << "A media de todos os valores e de: " << soma / conta;
}