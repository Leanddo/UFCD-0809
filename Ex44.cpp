#include <iostream>
#include <string>
using namespace std;
/*
Ler 2 valores, calcular e escrever a soma dos inteiros existentes entre os 2 valores lidos 
(incluindo os valores lidos na soma). Considere que o segundo valor lido será sempre maior que o primeiro valor lido.
*/
int main()
{
    int s1=0,input1,input2;
    cout<<"Introduze o primeiro numero: ";
    cin>>input1;
    cout<<"Introduze o segundo numero: ";
    cin>>input2;

    if (input1<input2)
    {
        for (int i = input1; i<=input2; i++)
    {
        s1=i+s1;
    }
        cout<<"O resultado e: "<<s1;
    }else{
        cout<<"O segundo valor tem de ser maior do que o segundo!";
    }
    
    
    
}