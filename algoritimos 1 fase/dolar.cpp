#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	
    //variaveis
    float CotacaoReal, QuantDolar, conversao;
    
    // entradas
    cout << "informe a cota��o atual do real: ";
    cin >> CotacaoReal; 
    
    cout << "Informe a quantidade de dinheiro em dolar: ";
    cin >> QuantDolar;
    
    //processo
    conversao = QuantDolar * CotacaoReal;
    
    //saida
    cout <<  "A quantia de " << QuantDolar << " dolares convertido para real, � igual a " << conversao;
}


