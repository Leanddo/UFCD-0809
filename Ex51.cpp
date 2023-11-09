#include <iostream>
#include <string>
using namespace std;

int main()
{
    int opcao, posi, pesquisar;

    cout << "Introduze o tamanho do vetor: ";
    cin >> posi;
    string nomes[posi];

    do
    {
        cout << "==========Menu==========\n"
             << "1)   Registrar nomes\n"
             << "2)   Pesquisar um nome\n"
             << "3)   Listar todos os nomes\n"
             << "4)   Sair do programa\n"
             << "Digite a opcao: ";
        cin >> opcao;

        switch (opcao)
        {
        case 1:
            for (int i = 0; i < posi; i++)
            {
                cout << "Introduze o nome para a posicao " << i << ":";
                cin >> nomes[i];
            }
            break;
        case 2:
            cout << "Introduze a posicao que quer pesquisar: ";
            cin >> pesquisar;
            if (pesquisar >= posi)
            {
                cout << "[ERRO] posicao nao encontrada\n";
            }
            else
            {
                cout << "O nome na posicao " << pesquisar << " e " << nomes[pesquisar] << '\n';
            }
            break;
        case 3:
            for (int i = 0; i < posi; i++)
            {
                cout << "Posicao " << i << " " << nomes[i] << '\n';
            }
            break;
        case 4:
            break;
        default:
            cout << "[ERRO] Opcao invalida\n";
            break;
        }
    } while (opcao != 4);

    return 0;
}