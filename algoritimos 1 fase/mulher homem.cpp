#include <iostream>
using namespace std;
int main()
{
	//variaveis
	string nome, sexo;
	int cont_homem=0, cont_mulher=0;
	
	for(int i = 1; i <= 10; i++)
	{
		cout << "informe o nome: ";
		cin >> nome;
		
		cout << "informe o sexo: ";
		cin >> sexo;
		
		if(sexo == "masculino")
		{
			cont_homem++;
		}
		else if(sexo == "feminino")
		{
			cont_mulher++;
		}
	}
	
	cout << "numero de homens: " << cont_homem << endl;
	cout << "numero de mulheres: " << cont_mulher;
	
}
