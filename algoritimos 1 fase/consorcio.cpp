#include <iostream>
using namespace std;
main ()
{
	setlocale(LC_ALL, "portuguese");
	
	//variaveis
	int TotalPrestacoes, PrestacoesPagas;
	float ValorPrestacao, ValorPago, SaldoDevedor, ValorTotal;
	
	//entradas
	cout << "informe o n�mero total de presta��es: ";
	cin >> TotalPrestacoes;
	
	cout << "informe o n�mero de presta��es pagas: ";
	cin >> PrestacoesPagas;
	
	cout << "informe o valor das preta��es: ";
	cin >> ValorPrestacao;
	
	//Determina o valor total
	ValorTotal = TotalPrestacoes * ValorPrestacao;
	
	//Determina o total pago
	ValorPago = ValorPrestacao * PrestacoesPagas;
	
	//Determina o saldo devedor
	SaldoDevedor = ValorTotal - ValorPago;
	
	//sa�da
	cout << "O valor total pago � de: " << ValorPago;
	cout << endl;
	cout << "O saldo devedor � de: " << SaldoDevedor;
}

