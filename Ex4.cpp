#include <iostream>
using namespace std;
// Escreve um algoritmo que calcule a idade de uma pessoa, sabendo o ano de nascimento. 
int main(){
    int nascimento,ano;
    std::cout<<"Introduza o ano atual:";
    cin>>ano;
    std::cout<<"Introduza o ano de nascimento:";
    cin>>nascimento;

    std::cout<<"Voce tem "<<ano-nascimento<<" anos";
    
    return 0;
}