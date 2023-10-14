#include <iostream>
using namespace std;
// Escreve um algoritmo que calcule o IMC de uma pessoa (IMC é o peso divido pelo dobro da altura). 
int main(){
    double peso,altura ;
    std::cout<<"Introduza o seu peso:";
    cin>>peso;
    std::cout<<"Introduza a sua altura: ";
    cin>>altura;
    std::cout<<"O seu IMC é igua a: "<<peso*altura;
    return 0;
}