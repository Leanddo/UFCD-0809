#include <iostream>
using namespace std;
//Escreve um algoritmo que calcule o troco a ser pago a um cliente, sabendo o preço total da compra e o valor dado para o pagamento.  
int main(){
    double valorp,ptotal;
    std::cout<<"Intoduza o valor total da compra: ";
    cin>>ptotal;
    std::cout<<"Intoduza o valor pago: ";
    cin>>valorp;
    std::cout<<"O troco a ser pago e de: "<<valorp-ptotal;

    
    return 0;
}