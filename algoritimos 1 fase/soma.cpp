#include <iostream>
using namespace std;
main()
{
	setlocale (LC_ALL, "Portuguese");
	float numero1, numero2, resultado;
	cout << "Vamos Somar dois numeros, me informe o primeiro n�mero: ";
	cin >> numero1;
	cout<<  "Agora o n�emro dois: ";
	cin >> numero2;
	resultado = numero1+ numero2;
	cout << "O resultado da soma � : " << resultado;
}
