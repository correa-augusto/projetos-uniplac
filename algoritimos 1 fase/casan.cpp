#include <iostream>
#include <string>
using namespace std;

int main()
{
    int matricula, m3;
    float Consumo, Saneamento, PIS, COFINS, valorTotal;
    string classe;

    cout << "informe a matricula do consumidor: ";
    cin >> matricula;
    cout << "informe a quantidade de m3 usados: ";
    cin >> m3;
    cout << "infrome a classe do consumidor  ";
    cin >> classe;

    if (m3 <= 10)
    {
        Consumo = m3 * 2.99;
    }
    else if (m3 > 10 && m3 <= 25)
    {
        Consumo = 10 * 2.99 + (m3 - 10) * 5.48;
    }
    else if (m3 > 25 && m3 <= 50)
    {
        Consumo = 10 * 2.99 + 15 * 5.48 + (m3 - 25) * 7.69;
    }
    else
    {
       Consumo = 10 * 2.99 + 15 * 5.48 + 25 * 7.69 + (m3 - 50) * 9.22;
    }

    if (classe == "residencial")
    {
        Saneamento = 5.00;
    }
    else if (classe == "comercial")
    {
        Saneamento = 10.00;
    }
    else if (classe == "industrial")
    {
        Saneamento = 15.00;
    }

    PIS = Consumo * 0.0065;
    COFINS = Consumo * 0.03;

    valorTotal = Consumo + Saneamento + PIS + COFINS;

    cout << "O valor de saneamento  " << Saneamento << endl;
    cout << "O valor do PIS " << PIS << endl;
    cout << "O valor do COFINS " << COFINS << endl;
    cout << "O valor da conta  " << valorTotal << endl;
}
