#include <iostream>
#include <string>
using namespace std;
/*
Escreve um algoritmo que leia dois vetores de 10 posições e faça a multiplicação dos elementos do mesmo índice,
colocando o resultado em um terceiro vetor. Mostre o vetor resultante.  
*/
int main()
{
    int vet2[9],vet1[9],soma[9];

    for (int i = 0; i < 9; i++)
    {
     cout<<"Insira um numero no vetor 1:";
     cin>>vet1[i];
     cout<<"Insira um numero no vetor 2:";
     cin>>vet2[i];
    
    soma[i]=vet1[i]*vet2[i];
    }
    cout<<"O resultado e de: ";

    for (int i = 0; i < 9; i++)
    {
        cout<<soma[i]<<" | ";
    }
    
    
    
}