#include <iostream>
using namespace std;
/*
Elaborar um programa que calcule e apresente o valor do volume de uma caixa retangular,
utilizando a fórmula VOLUME <- COMPRIMENTO x LARGURA x ALTURA.
*/
int main()
{
    int altura,largura,comprimento;

    cout<<"Introduze a altura:  ";
    cin>>altura;
    cout<<"Introduze a largura: ";
    cin>>largura; 
    cout<<"Introduze o comprimento: ";
    cin>>comprimento;

    int volume= altura*largura*comprimento;
    

    cout<<"O volume da caixa e de "<<volume<<" cm^3";




    return 0;
}
