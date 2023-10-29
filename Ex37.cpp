#include <iostream>
#include <string>
using namespace std;
/*
Faz um algoritmo para ler a temperatura atual e conforme leitura, 
imprima o resultado de acordo com a tabela abaixo.
*/
int main()
{
    float tempratura;
    string resultado;
    cout<<"Introduze a temperatura: ";
    cin>>tempratura;

    if(tempratura<15){
        resultado="Muito frio";
    }
    else if(tempratura>=16&& tempratura<=23){
        resultado="Frio";
    }
    else if (tempratura>=23 && tempratura<=26){
        resultado="Agradavel";
    }
    else if(tempratura>=26 && tempratura<=30){
        resultado="Quente";
    }
    else{
        resultado="Muito quente";
    }

    cout<<"O tempo esta: "<<resultado;
}