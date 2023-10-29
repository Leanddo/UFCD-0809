#include <iostream>
#include <string>
using namespace std;
/*
O mesmo exercício anterior, mas agora, considere que o segundo valor lido
poderá ser maior ou menor que o primeiro valor lido, ou seja, deve-se testá-los.
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
    }else{
        for (int i = input1; i>=input2; i--)
    {
        s1=i+s1;
    }
    }
    cout<<"O resultado e: "<<s1;
}