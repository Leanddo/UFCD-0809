#include <iostream>
using namespace std;
/*  Leia um vetor de 10 posições e verifique se existem valores iguais e os escreva. */

int main()
{
    int vet[10], count2 = 0, vet2[10];

    for (int i = 0; i < 10; i++)
    {
        cout << i << " Insira um valor: ";
        cin >> vet[i];
    }
    cout << "--------------------" << endl;
    for (int i = 0; i < 10; i++)
    {

        for (int j = i + 1; j < 10; j++)
        {
            if (vet[i] == vet[j])
            {

                bool encontrado = false;

                for (int e = 0; e < count2 && encontrado == false; e++)
                {
                    if (vet2[e] == vet[i])
                    {
                        encontrado = true;
                    }
                }

                if (encontrado == false)
                {
                    vet2[count2] = vet[i];
                    count2++;
                }
            }
        }
    }
    cout << "Os numeros repetidos sao: " << endl;
    for (int i = 0; i < count2; i++)
    {
        cout << vet2[i] << endl;
    }
}