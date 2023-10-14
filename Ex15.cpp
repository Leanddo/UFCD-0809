#include <iostream>
using namespace std;
/* Escreve um algoritmo que receba uma idade e classifique nas categorias:

    Infantil A (5 – 7 anos)
    Infantil B (8 -10 anos)
    Juvenil A (11 – 13 anos)
    Juvenil B (14 - 17 anos)
    Adulto (maior que 18 anos)
 */
int main()
{
    int idade;

    std::cout << "Introduza a sua idade: ";
    cin >> idade;
   
   std::cout << "A sua categoria e a: ";
    if (idade>=5 && idade<=7){
        std::cout << "Infantil A";
    }
    else if (idade>=8 && idade<=10){
        std::cout << " Infantil B";
    }
    else if (idade>=11 && idade<=13){
        std::cout << "Juvenil A";
    }
    else if (idade>=14 && idade<=17){
        std::cout << "Juvenil B";
    }
    else if (idade>18){
        std::cout << "Adulto";
    }
   
    return 0;
}