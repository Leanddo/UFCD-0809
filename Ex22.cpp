#include <iostream>
using namespace std;
/* Faz um algoritmo que receba uma senha e mostre “Correta!” se o valor
corresponder a “12345”. Caso contrário, peça a senha novamente. (do ... while). */
int main()
{
    int senha;
    int senhacorreta=12345;
    do
    {
        std::cout << "Introduse a senha: ";
        cin >> senha;
        if(senha!=senhacorreta){
            cout<<"senha errada "<<'\n';
        }

    } while (senha != senhacorreta);
    {
        cout << "Correta!";
    }

    return 0;
}