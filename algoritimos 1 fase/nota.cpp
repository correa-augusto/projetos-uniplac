#include <iostream>
using namespace std;
int main ()
{
	//variaveis
	float nota;
	
	//entradas
	cout << "Informe a nota do aluno: ";
	cin >> nota;
	
	//tratamento
	if(nota >= 0 && nota <= 39){
		cout << "O aluno esta com conceito E";
	} 
	else if(nota >= 40 && nota <= 59){
		cout << "O aluno esta com conceito D";
	} 
	else if(nota >= 60 && nota <= 75){
		cout << "O aluno esta com conceito C";
	} 
	else if(nota >= 76 && nota <= 89){
		cout << "O aluno esta com conceito B";
	} 
	else if(nota >= 90 && nota <= 100){
		cout << "O aluno esta com conceito A";
	}
}
