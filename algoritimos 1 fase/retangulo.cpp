#include <iostream>
using namespace std;
main()
{
	setlocale (LC_ALL, "Portuguese");
	float base, altura, resultado;
	cout << "Vamos calcular a area de um retangulo";
	cout << endl;
	cout << "Informe  a base: ";
	cin >> base;
	cout << "Informe a altura: ";
	cin >> altura;
	resultado = base*altura;
	cout << "o resultado é: " << resultado;
}
