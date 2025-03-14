# include <iostream> 
using namespace std;
main ( )
{
	int idade;
	string nome;
	setlocale (LC_ALL, "Portuguese");
	
	cout << "Eae,Seja bem vindo ao meu primeiro algoritimo em c++ ";
	cout << endl;
	cout << "Para começar, me diga seu nome: ";
	cin >> nome;
	cout << "Agora me diga sua idade : ";
	cin >> idade; 
	cout << "voce se chama: " << nome << " e voce possui: " << idade << " anos ";
} 
