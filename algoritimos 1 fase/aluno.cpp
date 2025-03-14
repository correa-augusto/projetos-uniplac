#include <iostream>
using namespace std;
int main()
{
	//variaveis
	string nome;
	float nota;
	
	for(int i = 1; i <= 10; i++)
	{
		cout<< "informe o nome do aluno: ";
		cin >> nome;
		cout << "informe a nota do aluno: ";
		cin >> nota;
		
		if(nota >= 7){
			cout << "aluno: " << nome << " esta aprovado" << endl;
		} else {
			cout << "aluno: " << nome << " esta reprovado" << endl;
		}
	}
}
