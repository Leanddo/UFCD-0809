#include <iostream>
using namespace std;
/*Escreve um algoritmo que escreva os números ímpares entre 100 e 200. */
int main()
{
    int impar;

    for(int i= 100;i<=200;i++){
        impar=i%2;
        if(impar==1){
            cout<<i<<" ";
        }

    }
    

    return 0;
}