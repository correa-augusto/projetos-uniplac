#include <iostream>
using namespace std;
int main()
{
	//variaveis
	string nome;
	float conta, diaria;
	
	//entradas
	cout << "Informe o nome do cliente: ";
	cin >> nome;
	
	cout << "informe o tempo em dias que o cliente permaneceu no hotel: ";
	cin >> diaria;
	
	//tratamento
	if(diaria > 5){
		conta = diaria * 5.50;
		cout << "O cliente" << nome << " deve " << conta;
	} else if(diaria == 5){
		conta = diaria * 7;
		cout << "O cliente " << nome << " deve " << conta;
	} else{
		conta = diaria * 9;
		cout << "O cliente " << nome << " deve " << conta;
	}
}
