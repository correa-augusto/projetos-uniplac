#include <iostream>
using namespace std;
int main()
{
	//variaveis
	string genero;
	float altura, peso;
	
	//entradas
	cout << "informe o sexo: ";
	cin >> genero;
	
	cout << "informe a altura: ";
	cin >> altura;
	
	//processo
	if(genero == "masculino"){
		peso = 72.7 * altura -58;
	// saida caso seja homem
	    cout << "seu peso ideal e de: " << peso;
	} else if(genero == "feminino") {
		peso = 62.1 * altura - 44.7;
	// saida caso seja mulher
	    cout << "seu peso ideal e de: " << peso;
	} else if(genero != "masculino" || genero!= "feminino") {
		cout << "foi identificado um erro na entrada do dado genero";
	}
}
