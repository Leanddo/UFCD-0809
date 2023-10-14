#include <iostream>
using namespace std;
//Escreve um algoritmo que calcule o valor do perímetro de retângulo. P = 2 \* (c + l).  
int main(){
    int comprimento, largura;
    std::cout<<"Introduza o comprimento:";
    cin>>comprimento;
    std::cout<<"Introduza a largura:";
    cin>>largura;
    std:cout<<"O perimetro do retangulo é de: "<<2*(comprimento+largura);
    
    return 0;
}