#include <iostream>
#include <string>
using namespace std;
/*
Escreve um algoritmo que leia um número não determinado de valores e calcule a média dos valores lidos, a quantidade de valores positivos,
quantidade de valores negativos e o percentual de valores negativos e positivos. Mostre os resultados.
*/
int main()
{
    int s1 = 0, input1, nnegativos = 0, npositivos = 0, media=0, contador=0,pnegativo,ppositivo;

    do
    {
        cout << "Introduze um numero: ";
        cin >> input1;
        if (input1 < 0 )
        {
            nnegativos++;
        }
        else if (input1 > 0)
        {
            npositivos++;
        }
        
        if(input1!=0){
            contador++;
        }

        media += input1;

    } while (input1 != 0);

    pnegativo=(nnegativos*100)/contador;
    ppositivo=(npositivos*100)/contador;

    cout<<"\nExistem "<<nnegativos<<" numeros negativos\n"
    <<"Existem "<<npositivos<<" numeros positivos\n"
    <<"A media de todos os valores e de: "<<media/contador<<'\n'
    <<pnegativo<<"%' dos numeros sao negativos\n"
    <<ppositivo<<"%' dos numeros sao positivos\n";

}