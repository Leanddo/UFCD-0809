#include <iostream>
using namespace std;
/*Escreve um algoritmo que cálculo o reajuste do salário de um funcionário, 
sabendo que o funcionário deverá receber uma atualização de 15% se o seu salário seja menor ou igual a 525 €, caso contrário, será de 10%. */
int main()
{
    int salario;

    std::cout << "Introduze o valor salarial: ";
    cin >> salario;
   
    if (salario<=525){
        std::cout << "O funcionario ira recerber 15% a mais no seu salario totalizando "<<(salario*0.15)+salario;
    }
    else{
        std::cout << "O funcionario ira recerber 10% a mais no seu salario totalizando "<<(salario*0.10)+salario;  
    }
    return 0;
}