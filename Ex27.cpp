#include <iostream>
using namespace std;
/* Escreve um algoritmo que recebe 10 valores, 
um de cada vez, e que conte quantos deles estão no intervalo [10,20]
e quantos estão fora do intervalo. */
int main()
{
    int input,dentro=0,fora=0;

    for(int i= 0;i<10;i++){
        cout<<"Introduze 10 valores: ";
        cin>>input;

        if(input>10&&input<20){
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