#include <iostream>
#include <string>
using namespace std;
/*
Faz um algoritmo que permita ao utilizador inserir a idade de quantas pessoas ele desejar. 
Após isso o algoritmo deve informar a soma das pessoas maiores de idade e a média de idade das pessoas maiores de idade. 
*/
int main()
{
    int input,c1=0,c2=0,c3=0,c4=0;

    while (true)
    {
        cout<<"Introduze um numero inteiro entre 0 a 100(ou negativo para parar): ";
        cin>>input;

        if(input<0){
            break;
        }else if (input<=25)
        {
            c1++;
        }
        else if (input<=50)
        {
            c2++;
        }
        else if (input<=75)
        {
            c3++;
        }
        else if (input<=100)
        {
            c4++;
        }
        else{
            cout<<"numero invalido!\n";
        }
        
    }
    cout<<"No intervalo entre [0-25] existem: "<<c1<<" numeros\n"
        <<"No intervalo entre [26-50] existem: "<<c2<<" numeros\n"
        <<"No intervalo entre [51-75] existem: "<<c3<<" numeros\n"
        <<"No intervalo entre [76-100] existem: "<<c4<<" numeros\n";
         
}