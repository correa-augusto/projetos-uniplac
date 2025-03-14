#include <iostream>
using namespace std;
main ()
{
	setlocale(LC_ALL, "portuguese");
	
	//variaveis
	int TotalPrestacoes, PrestacoesPagas;
	float ValorPrestacao, ValorPago, SaldoDevedor, ValorTotal;
	
	//entradas
	cout << "informe o nùmero total de prestações: ";
	cin >> TotalPrestacoes;
	
	cout << "informe o número de prestações pagas: ";
	cin >> PrestacoesPagas;
	
	cout << "informe o valor das pretações: ";
	cin >> ValorPrestacao;
	
	//Determina o valor total
	ValorTotal = TotalPrestacoes * ValorPrestacao;
	
	//Determina o total pago
	ValorPago = ValorPrestacao * PrestacoesPagas;
	
	//Determina o saldo devedor
	SaldoDevedor = ValorTotal - ValorPago;
	
	//saída
	cout << "O valor total pago é de: " << ValorPago;
	cout << endl;
	cout << "O saldo devedor é de: " << SaldoDevedor;
}

