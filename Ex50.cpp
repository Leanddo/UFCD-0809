#include <iostream>
#include <string>
using namespace std;
/*
Faz um programa que leia um vetor com dez números inteiros,
calcule e mostre a quantidade de números negativos e a soma dos números positivos desse vetor. 
*/
int main()
{
    int num[9],negativos=0,somap=0;

    for (int i = 0; i < 9; i++)
    {
        cout<<"Introduze um numero inteiro: ";
        cin>>num[i];

        if (num[i]<0)
        {
            negativos++;
        }else{
            somap=somap+num[i];
        }
        
    }
    cout<<"A quantidade de numeros negativos e de: "<<negativos<<'\n';
    cout<<"A soma de todos os numeros positivos e de: "<<somap;
    
}