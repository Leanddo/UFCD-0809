#include <iostream>
using namespace std;
/*Escreve um algoritmo que recebe um vetor de 10 numeros, um de cada vez, e que conte quantos
deles estão no intervalo [10,20] e quantos estão fora do intervalo. */
int main()
{
    int valores[10];
    int dentro=0,fora=0,input;

    for(int i= 0;i<10;i++){
        cout<<"Introduze 10 valores: ";
        cin>>input;
        valores[i]=input;
    }
    
    for(int i=0;i<10;i++){

        if(valores[i]>10 && valores[i]<20){
            dentro++;
        }
        else{
            fora++;
        }
    }
    cout<<"Existem "<<dentro<<" numeros dentro do intervalo de [10,20]"<<'\n';
    cout<<"Existem "<<fora<<" numeros fora do intervalo de [10,20]"<<'\n';

    return 0;
}