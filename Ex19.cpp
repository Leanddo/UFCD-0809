#include <iostream>
using namespace std;
/*Escreve um algoritmo que leia o código do item pedido, a quantidade e calcule o valor a ser pago por aquele lanche. 
Considere que a cada execução somente será calculada um item. Use o comando switch. */
int main()
{
    
    int codigop, quantidade;

    std::cout << "Introduze o co digo do item pedido 101,102,103,104 ou 105: ";
    cin >> codigop;
    std::cout << "Introduze a quantidade desejada: ";
    cin >> quantidade;
   
        switch (codigop)
        {
        case 100:
            cout<<quantidade<<" Cachorro(s) quente(s) preco: "<<quantidade*1.2<<" Euros";
            break;
        case 101:
            cout<<quantidade<<" Baururu(s) simples preco: "<<quantidade*1.3<<" Euros";
            break;
        case 102:
            cout<<quantidade<<" Baururu(s) com ovo preco: "<<quantidade*1.5 <<" Euros";
            break;
        case 103:
            cout<<quantidade<<" hamburger(s) preco: "<<quantidade*1.2<<" Euros";
            break;
        case 104:
            cout<<quantidade<<" Cheeseburger preco: "<<quantidade*1.3<<" Euros";
            break;
        case 105:
            cout<<quantidade<<" Refrigeante(s) preco: "<<quantidade*1<<" Euros";
            break;
        default:
            cout<<"ERRO item de pedido invalido";
            break;
        }
    return 0;
}