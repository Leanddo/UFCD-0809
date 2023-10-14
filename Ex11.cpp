#include <iostream>
using namespace std;
/*Escreve um algoritmo para calcular a média de um aluno a partir de duas notas. O programa deve mostra a média e também uma mensagem informando se o aluno
foi aprovado ou reprovado. Sabe-se que o aluno é reprovado se a sua média for inferior a 10*/
int main()
{
    double nota1, nota2, media;

    std::cout << "Introduza a primeira nota: ";
    cin >> nota1;
    std::cout << "Introduza a segunda nota: ";
    cin >> nota2;
    
    media = (nota1 + nota2)/2;
    
    cout<<media;
    if (media >= 10){
        std::cout << "O aluno for aprovado";
    }
    else{
        std::cout << "O aluno foi reprovado";
    }
    return 0;
}