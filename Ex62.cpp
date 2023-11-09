#include <iostream>
#include <set>
using namespace std;

/*Leia um vetor com 20 números inteiros. Escreva os elementos do vetor eliminando elementos repetidos. */

int main()
{
    int vet[20];
    set<int> uniqueElements;

    cout << "Digite 20 numeros inteiros:" << endl;

    for (int i = 0; i < 20; i++)
    {
        cin >> vet[i];
        uniqueElements.insert(vet[i]);
    }

    cout << "Elementos unicos no vetor:" << endl;

    for (int element : uniqueElements)
    {
        cout << element << " ";
    }

    cout << endl;

    return 0;
}