#include <iostream>
using namespace std;
//Escreve um algoritmo que calcule e mostre quanto o trabalhador deverá receber no fim do mês de acordo com a quantidade de horas trabalhadas e o valor que é pago por cada hora. 
int main(){
    int qhoras,phoras ;
    std::cout<<"Introduza a quantidade de horas trabalhadas:";
    cin>>qhoras;
    std::cout<<"Introduza o valor pago a acada horas: ";
    cin>>phoras;
    std::cout<<"O valor a pagar e de: "<<qhoras*phoras;
    return 0;
}