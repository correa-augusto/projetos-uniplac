#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	//variaveis
	float raio, pi, volume;
	
	//entradas
	pi = 3,1415;
	
	cout << "informe o raio: ";
	cin >> raio;
	
	//processo
	volume = (4 * pi * raio * 3) / 3;
	
	cout << "o volume da esfera é: " << volume;
}
