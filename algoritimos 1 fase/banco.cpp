#include <iostream>
using namespace std;
int main()
{
	//variaveis
	float ValorOperacao, saldo;
	string operacao;
	
	//entradas
	cout << "informe o tipo da operacao: ";
	cin >> operacao;
	
	cout << "informe o valor da operacao: ";
	cin >> ValorOperacao;
	
	saldo = 1000;
	
	//processo
	if(operacao == "deposito"){
		saldo = saldo + ValorOperacao;
		cout << "saldo atual: " << saldo;
	} else if(operacao == "retirada"){
		saldo = saldo - ValorOperacao;
		cout << "saldo atual: " << saldo;
		cout << endl;
	}
	
	if(saldo < 0){
		cout << "conta estourada";
	}
}
