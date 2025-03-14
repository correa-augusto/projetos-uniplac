#include <iostream>
using namespace std;
main()
{
	setlocale (LC_ALL, "Portuguese");
	float pi, raio, resultado;
	cout << "Vamos calcular a area de um circulo, considerando pi 3.14";
	cout << endl;
	cout << "Informe  o raio: ";
	cin >> raio;
	pi= 3.14159;
	resultado = pi * (raio * raio);
	cout << "o resultado é: " << resultado;
}
