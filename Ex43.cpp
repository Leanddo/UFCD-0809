#include <iostream>
#include <string>
using namespace std;
/*
Escreve um algoritmo para ler 10 números. Todos os números lidos com
valor inferior a 40 devem ser somados. Escreve o valor final da soma efetuada.
*/
int main()
{
    int input,soma=0;
    
    for (int i = 0; i < 10; i++)
    {
        cout << "Introduze um numero: ";
        cin >> input;

        if (input >= 40)
        {
            soma=input+soma;
        }
    }
    cout<<"O valor final e de: "<<soma;
}