#include <iostream>
using namespace std;
int main()
{
	//variaveis
	int idade, soma=0;
	float media;
	
	//entradas
	 for (int i = 1; i <= 20; i++ ){
       cout << "informe a idade do aluno: ";
       cin >> idade;
       soma = soma + idade;
    }
    
    media = soma / 20;
    
    cout << "media das idades: " << media;
}
