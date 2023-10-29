#include <iostream>
using namespace std;
/*Escreve um algoritmo que leia a altura de 15 pessoas e mostre:
    A menor altura do grupo;
    A maior altura do grupo.

    Not working
*/
int main()
{
    
    float altura ,menor=200, maior=0;

    for(int i=1 ;i<= 15;i++){
        cout<<"Introduze uma altura: ";
        cin>>altura;

        if(altura>maior){
            altura=maior;
        }
        else if (altura<menor){
            altura=menor;
        }

    }
    
    cout<<"A maior altura e: "<<maior<<'\n';
    cout<<"A menor altura e: "<<menor<<'\n';

    return 0;
}