#include <iostream>
using namespace std;
/*Escreve um algoritmo que leia o plano de trabalho
e o salário atual de um funcionário que calcule e imprima o seu novo salário. Use o comando switch. */
int main()
{
    char plano;
    int salario;

    std::cout << "Introduze o valor salarial: ";
    cin >> salario;
    std::cout << "Introduze o plano de trabalho A,B,C: ";
    cin >> plano;
   
    if (plano=='A' || plano=='B' || plano=='C'){
        switch (plano)
        {
        case 'A':
            std::cout << "O funcionario ira recerber 10% a mais no seu salario totalizando "<<(salario*0.10)+salario;
            break;
        
        case 'B':
            std::cout << "O funcionario ira recerber 15% a mais no seu salario totalizando "<<(salario*0.15)+salario;
            break;
        case 'C':
            std::cout << "O funcionario ira recerber 20% a mais no seu salario totalizando "<<(salario*0.20)+salario;
            break;
        }
    }
    else{
        std::cout <<endl<< "ERRO plano inasistente";  
    }
    return 0;
}