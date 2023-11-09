#include <iostream>
#include <string>
using namespace std;
/*
Faz um programa que receba o nome de cinco produtos e os seus respetivos preços,
armazene os em dois vetores separados, um para os produtos e o outro para os preços. O programa deve calcular e mostrar:
    A quantidade de produtos com preço inferior a 50.00 euros;
    O nome dos produtos com preço entre os 50.00 e 100.00 euros;
    A média dos preços dos produtos com preço superior a 100.00 euros.
*/
int main()
{
    int preco[4], inferior = 0, media, contador = 0;
    string nome[4];

    for (int i = 0; i < 4; i++)
    {
        cout << "Introduze o NOME do produto: ";
        cin >> nome[i];
        cout << "Introduze o PRECO do produto: ";
        cin >> preco[i];

        if (preco[i] <= 50)
        {
            inferior++;
        }

        contador++;
        media = media + preco[i];
    }
    cout << "A quantidade de produtos inferiores a 50 euros e de: " << inferior << '\n';
    cout << "O nome dos produtos de preco entre 50 e 100 sao: ";
    for (int i = 0; i < 4; i++)
    {
        if (preco[i] > 50 && preco[i]< 100)
        {
            cout << nome[i] << " | ";
        }
    }
    cout << "\nA media de todos os precos e de: " << media / contador;
}