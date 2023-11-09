#include <iostream>
#include <string>
using namespace std;
/*
Faz um programa que leia de seis números inteiros, calcule e mostre:
    A quantidade de números pares
    Quais os números pares
    A Quantidade de números ímpares
    Quais os números ímpares
*/
int main(){
    int num=0, pares[5], impares[5], npares=0, nimpares=0;

    for (int i = 0; i <= 5; i++)
    {
        cout << "insira um numero: " << '\n';
        cin >> num;

        if (num%2 ==0)
        {
            npares++;
            pares[npares] = num;
        }else if (num%2 ==1)
        {
            nimpares++;
            impares[nimpares] = num;
        }
    }

    cout << "A quantidade de npares: " << npares << endl;
    cout << "A quantidade de nimpares: " << nimpares << endl;
    cout << "Estes sao pares: " << endl;
    for (int i = 1; i <= npares; i++)
    {
            cout << pares[i] << " ";
    }
    cout << "\nEstes sao impares: " << endl;
    for (int i = 1; i <= nimpares; i++)
    {
            cout << impares[i] <<" "; 
    }
}