#include <iostream>
#include <string>
using namespace std;
/*
36. Uma loja de jogos vende cada jogo por 50 euros, mas oferece descontos conforme a quantidade comprada, conforme a tabela a seguir:

Crie um algoritmo que leia o número de jogos comprados e mostre o valor da compra, o valor do desconto (se houver) e o valor total com o desconto.
*/
int main()
{
    float njogos,comprados;
    string desconto;
    cout<<"Introduze a qauntidade de jogos comprados: ";
    cin>>njogos;
    comprados=njogos*50;

    if(njogos>=0 && njogos<=9){
        comprados+0;
    }
    else if(njogos>=10 && njogos<=19){
        desconto="20%";
        comprados*0.20;
    }
    else if (njogos>=20 && njogos<=49){
        desconto="30%";
        comprados*0.30;
    }
    else if(njogos>=50 && njogos<=99){
        desconto="40%";
        comprados*0.40;
    }
    else{
        desconto="50%";
        comprados*0.50;
    }

    cout<<"O valor do desconto e de "<<desconto<<" e o valor a pagar e de "<<comprados;
}