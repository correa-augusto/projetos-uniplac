#include <iostream>
#include <limits>
using namespace std;
int main()
{
	//variaveis
	float numero, NumeroMenor = numeric_limits<float>::max();
	
	for(int i = 1; i <= 10; i++ ){
		cout << "Informe um valor numerico: ";
		cin >> numero;
		
		if(numero < NumeroMenor){
			NumeroMenor = numero;	
		}
	}
	
	cout << "O menor Numero e: " << NumeroMenor;
}


