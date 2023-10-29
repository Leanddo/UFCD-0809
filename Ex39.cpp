#include <iostream>
#include <string>
using namespace std;
/*
Crie um programa para que retorne o somatório de todos os números 
entre 1 e um valor fornecido pelo utilizador. Por exemplo, 
se o utilizador fornecer o número 4,
o computador deverá calcular o somatório 1 + 2 + 3 + 4 = 10. 
*/
int main()
{
    int narmesenador=0,input;
    cout<<"Introduze um numero: ";
    cin>>input;

    for (int i = 0; i<=input; i++)
    {
        narmesenador=narmesenador+i;
    }
    cout<<narmesenador;
    
}