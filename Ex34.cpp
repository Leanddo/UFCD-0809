#include <iostream>
#include <string>
using namespace std;
/*
Em uma eleição presidencial existem quatro candidatos. Os votos são informados através de códigos.
Os dados utilizados para a contagem dos votos obedecem à seguinte codificação:
    1,2,3,4 = voto para os respectivos candidatos;
    5 = voto nulo;
    6 = voto em branco;
Elabore um algoritmo que leia o código do candidado em um voto. Calcule e escreva:

    total de votos para cada candidato;
    total de votos nulos;
    total de votos em branco;

Como finalizador do conjunto de votos, tem-se o valor 0.
*/
int main()
{
    int input, nulo=0, branco=0;
    string candidatos[4];
    cout << "Introduze o codigo de voto:" << '\n'
         << "1,2,3,4 = voto para os respectivos candidatos;"
         << '\n'
         << "5 = voto nulo;" << '\n'
         << "6 = voto em branco;" << '\n';

    for (int i = 1; i <= 4; i++)
    {
        cout<<"Introduze o codigo para o condidato "<<i<<" :";
        cin >> input;
        switch (input)
        {
        case 5:
            candidatos[i] = "Voto nulo";
            nulo++;
            break;
        case 6:
            candidatos[i] = "Voto me branco";
            branco++;
            break;
        default:
            cout << "Numero invalido "<<'\n';
            break;
        }
    }
    for (int i = 0; i <= 4; i++)
    {
        cout << "Utilizador " << i << " = " << candidatos[i]<<'\n';
    }
    cout<<"Votos nulos: "<<nulo;
    cout<<"votos em branco: "<<branco;

    return 0;
}