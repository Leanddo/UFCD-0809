#include <iostream>
using namespace std;
/*Escreve um algoritmo que leia a altura de 15 pessoas e mostre:
    A menor altura do grupo;
    A maior altura do grupo.

    Not working
*/
int main()
{
    double altura[15];
    double menor=200, maior=0, input;

    for(int i=0 ;i< 15;i++){
        cout<<"Introduze uma altura: ";
        cin>>input;
        altura[i]=input;

        if(input>maior){
            input=maior;
        }
        else if (input<menor){
            input=menor;
        }

    }
    
    cout<<"A maior altura e: "<<maior<<'\n';
    cout<<"A menor altura e: "<<menor<<'\n';

    return 0;
}