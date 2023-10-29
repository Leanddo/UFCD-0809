#include <iostream>
#include <string>
using namespace std;
/*
Ler um valor e escrever a mensagem O número é maior que 10! se o valor lido for maior que 10,
 caso contrário escrever O número é menor que 10! 
*/
int main()
{
    int input;
    cout<<"Introduze um numero: ";
    cin>>input;

    if (input<=10)
    {
        cout<<"O numero e menor que 10!";
    }else{
        cout<<"O numero e maior do que 10!";
    }
    
    
}