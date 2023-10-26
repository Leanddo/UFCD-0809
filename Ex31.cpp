#include <iostream>
using namespace std;
/* 
    Pedro comprou um saco de ração com peso em quilos. Ele possui dois gatos, para os quais fornece a quantidade de ração em gramas.
    A quantidade diária de ração fornecida para cada gato é sempre a mesma. Faça um programa que receba o peso do saco de ração
    e a quantidade de ração fornecida para cada gato, calcule e mostre quanto restará de ração no saco após cinco dias.
*/
int main()
{
    int saco,gato1,gato2,gramas;

    cout<<"Introduze o peso do saco de racao: ";
    cin>>saco;
    gramas=saco*1000;

    cout<<"Introduze o valor cunsumido do 1 gato em gramas: ";
    cin>>gato1;
    cout<<"Introduze o valor cunsumido do 2 gato em gramas: ";
    cin>>gato2;

    cout<<"Apos 5 dias ira restar "<<((gato1+gato2)*5)-gramas<<" gramas";


    return 0;
}