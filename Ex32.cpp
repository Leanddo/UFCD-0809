#include <iostream>
using namespace std;
/* 
   Ler dois valores para as variáveis A e B e efetuar a troca dos valores de forma que a variável A passe a possuir o valor da variável B e a 
   variável B passe a possuir o valor da variável A. Apresentar os valores após a efetivação do processamento da troca.
*/
int main()
{
    int A,B,trocador;

    cout<<"Introduze o valor de A:  ";
    cin>>A;
    cout<<"Introduze o valor de B: ";
    cin>>B;
    
    trocador=A;
    A=B;
    B=trocador;

    cout<<"O valor de A e de "<<A<<" e o valor de B e de "<<B;




    return 0;
}