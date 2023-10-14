#include <iostream>
using namespace std;
/*Escreve um algoritmo que leia um número entre 0 e 10, e escreva este número por extenso. Use o comando switch.  */
int main()
{
    int num;
    std::cout << "Introduze um numero de 0 a 10: ";
    cin >> num;

        switch (num){
        case 1:
            std::cout << "um";
            break;
        case 2:
            std::cout << "dois";
            break;
        case 3:
            std::cout << "tres";
            break;
        case 4:
            std::cout << "quatro";
            break;
        case 5:
            std::cout << "cinco";
            break;
        case 6:
            std::cout << "seis";
            break;
        case 7:
            std::cout << "sete";
            break;
        case 8:
            std::cout << "oito";
            break;
        case 9:
            std::cout << "nove";
            break;
        case 10:
            std::cout << "dez";
            break;
        default:
            cout << "ERRO so escrevo numeros de 0 a 10";
        break;
        }
    return 0;
}