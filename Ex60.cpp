#include <iostream>
using namespace std;
/*  Faz um programa para ler 5 valores e, em seguida, mostrar a posição onde se encontra o maior e o menor. */

int main()
{
    int vet[4],maior=0,menor=9999999,pmaior=0,pmenor=0;

    for (int i = 0; i < 5; i++)
    {
        cout << i << " Insira um valor: ";
        cin >> vet[i];
        if (vet[i]>maior)
        {
            maior=vet[i];
            pmaior=i;
        }
        else if (vet[i]<menor)
        {
            menor=vet[i];
            pmenor=i;
        }
        
    }
cout<<"A posicao menor: "<<pmaior<<'\n';
cout<<"A posicao maior: "<<pmenor;

    
}