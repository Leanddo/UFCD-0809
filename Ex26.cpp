#include <iostream>
using namespace std;
/* Faz um algoritmo que gere números de 1000 a 1999
e escreva aqueles que dividindo por 11 dão resto igual a 5. */
int main()
{
    int resto;
    for(int i= 1000;i<1999;i++){
        resto=i%11;
        if(resto==5){
            cout<<i<<" ";
        }

    }
   
    return 0;
}