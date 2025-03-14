#include <iostream>
using namespace std;
int main()
{
    //declaração das variaveis
    string meses[12] = {"janeiro", "fevereiro", "março", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};
    int num_mes;
    
    //entrada do mes que o usuario deseja saber
    cout << "informe o numero do mes que voce deseja saber: ";
    cin >> num_mes;
    
    //verificação se é um mes valido/processo para escrever o mes correto
    if(num_mes >= 1 && num_mes <= 12)
    {
        string mes_num = meses[num_mes - 1];
        cout << "o mes de numero " << num_mes << " e o mes de " << mes_num;
    }
    else
    {
        cout << "mes invalido";
    }
}
