#include <iostream>
#include <string>
using namespace std;
/*
O programa de fidelidade de uma determinada livraria premia seus clientes de acordo com o número de livros comprados a cada mês.
Os pontos são atribuídos da seguinte forma:

    Se um cliente comprar 0 livros, ele ganhará 0 pontos.
    Se um cliente comprar 1 livro, ele ganhará 5 pontos.
    Se um cliente comprar 2 livros, ele ganhará 15 pontos.
    Se um cliente comprar 3 livros, ele ganhará 30 pontos.
    Se um cliente comprar 4 ou mais livros, ele ganhará 60 pontos.

Crie um algoritmo que leia o número de livros comprado por um cliente e exiba o número de pontos correspondentes.
*/
int main()
{
    int pontos[5]={0,5,15,30,60}, livros;
    cout<<"Introduze o numero de livros comprados: ";
    cin>>livros;
    cout<<"Com "<<livros<<" livros voce ira receberv"<<pontos[livros]<<" pontos";
}