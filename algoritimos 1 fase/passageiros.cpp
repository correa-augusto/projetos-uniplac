#include <iostream>
using namespace std;

int main()
{
    // Vari�vel do n�mero de passageiros
    int num_passageiros;

    cout << "Informe o n�mero de passageiros: ";
    cin >> num_passageiros;

    // Arrays para armazenar os dados dos passageiros
    string nome[num_passageiros];
    int cidade_origem[num_passageiros];
    int cidade_destino[num_passageiros];

    // Entradas
    for(int i = 0; i < num_passageiros; i++)
    {
        cout << "Informe o nome do passageiro " << i + 1 << ": ";
        cin >> nome[i];
        cout << "Informe a cidade de origem do passageiro " << i + 1 << " (1, 2 ou 3): ";
        cin >> cidade_origem[i];
        cout << "Informe a cidade de destino do passageiro " << i + 1 << " (1, 2 ou 3): ";
        cin >> cidade_destino[i];
    }

    // Sa�da dos passageiros para cada cidade
    cout << "Passageiros com destino � cidade 1 (Lages):" << endl;
    for (int i = 0; i < num_passageiros; i++) 
    {
        if (cidade_destino[i] == 1) 
        {
            cout << nome[i] << endl;
        }
    }

    cout << "Passageiros com destino � cidade 2 (Ca�ador):" << endl;
    for (int i = 0; i < num_passageiros; i++) 
    {
        if (cidade_destino[i] == 2) 
        {
            cout << nome[i] << endl;
        }
    }

    cout << "Passageiros com destino � cidade 3 (Florian�polis):" << endl;
    for (int i = 0; i < num_passageiros; i++) 
    {
        if (cidade_destino[i] == 3) 
        {
            cout << nome[i] << endl;
        }
    }
}
