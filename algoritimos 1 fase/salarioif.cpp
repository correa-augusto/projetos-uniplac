#include <iostream>
using namespace std;
int main ()
{
	//variaveis
	float salario, vendas;
	
	//entradas
	cout << "informe o valor total das vendas: ";
	cin >> vendas;
	
	//processo 
	if(vendas >= 2000){
		salario = (vendas * 10) / 100;
	//saida caso salario seja maior que 2000
		cout << "o salario do vendedor foi de: " << salario;
	}else {
		salario = (vendas * 7.5) / 100;
	//saida caso salario seja menor que 2000
		cout << "o salario do vendedor foi de: " << salario;
	}
}

