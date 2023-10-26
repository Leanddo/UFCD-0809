#include <iostream>
using namespace std;
/* Escreva um algoritmo que recebe 10 valores, um de cada vez, e mostre:

    Quantos são pares;
    Quantos são ímparess.*/
int main()
{
    int input,impar=0,par=0,resto;

    for(int i= 0;i<=9;i++){
        resto=input%2;
        cout<<"Introduze 10 valores: ";
        cin>>input;
        if(resto==1){
           impar++; 
        }else if(resto==0){
            par++;
        }

    }
    cout<<"Existem "<<impar<<" numeros impares "<<"e "<<par<<"  numeros pares";
    
    return 0;
}