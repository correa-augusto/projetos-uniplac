#include <iostream>
using namespace std;
int main()
{
	//variaveis
	string nome;
	float idade = 0, idade_mais_velho=0;
	
	while(nome!= "fim")
	{
		cout << "informe a idade: ";
		cin >> idade;
		
		cout << "informe o nome: ";
		cin >> nome;
		
		if(idade > idade_mais_velho)
		{
			idade_mais_velho = idade;
		}
	}
	
	cout << "idade do aluno mais velho: " << idade_mais_velho;
	
}
