#include <iostream>
using namespace std;
/*Faz um algoritmo que receba um número inteiro, calcule e imprime a tabuada desse número utilizando uma estrutura de repetição.*/
int main()
{
    float numi;

    std::cout << "Introduze o numero de 0 a 100: ";
    cin >> numi;

    cout<<"tabuada do "<<numi<< '\n';

    for(int i= 0;i<10;i++){
        cout<<numi<<"+"<<i<<"= "<<numi*i<<'\n';
    }
   
    return 0;
}