#include <iostream>
using namespace std;
int main () 
{
	//variaveis
	float numero, QuantNumero, NumeroNegativo=0;
	
	//entradas
	cout << "Informe quantos numeros serao lidos: ";
	cin >> QuantNumero;
	
	for(int i = 1; i <= QuantNumero; i++ )
	{
		cout << "Informe um numero: ";
		cin >> numero;
		
		if(numero < 0)
		{
			NumeroNegativo+= 1;
		}
	}
	
	cout << "Quantidade de numeros negativos: " << NumeroNegativo;
}
