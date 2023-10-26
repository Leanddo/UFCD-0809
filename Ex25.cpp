#include <iostream>
#define numi 10
using namespace std;
/*Faz um algoritmo que receba números inteiros entre 0 e 100 pelo teclado. A condição de parar deve ser 0 (zero). No final mostre:

    Maior número
    Menor número
    Média dos números
*/
int main()
{
    int numeros, maior = 0, menor = 100, contador = 0, soma = 0;

    do
    {
        cout << "Introdusa o numero entre 1 a 100: ";
        cin >> numeros;
        if (numeros != 0)
        {
            if (numeros > maior)
            {
                maior = numeros;
            }
            else if (numeros < menor)
            {
                menor = numeros;
            }
        }

        contador++;
        soma = soma+numeros;

    } while (numeros != 0);

    cout << "O menor numero e " << maior << '\n';
    cout << "O maior numero e " << menor << '\n';
    cout << "A media dos numeros e de: " << soma / contador << '\n';
    return 0;
}