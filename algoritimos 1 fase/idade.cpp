#include <iostream>
#include <ctime>
using namespace std;
main()
{
	setlocale (LC_ALL, "Portuguese");
	
	//variaveis
	int ano, mes, dia, DiasIdade, idade;
    
    //entradas
	cout << "Vamos calcular sua idade";
	cout << endl;
	cout << "Informe seu ano de nascimento: ";
	cin >> ano;
	cout << "Informe seu mes de nascimento: ";
	cin >> mes;
	cout << "Informe seu dia de nascimento: ";
	cin >> dia; 
	
	//processo
	idade = 2024 - ano; 
	
	DiasIdade = idade * 365;
	
	mes = 12 * idade;
	
    //saida
    cout << "Você tem: " << idade << " anos, " << DiasIdade << " dias,e " << mes << " meses";
}
