#include <iostream>
using namespace std;
int main()
{
	//variaveis
	string nome;
	float idade, cont_mirim=0, cont_juvenil=0, cont_adulto=0;
	
	cout << "Informe a idade (ou 0 para parar): ";
    cin >> idade;

	while(idade != 0)
	{
		cout << "informe o nome: ";
		cin >> nome;
		
		if(idade >= 6 && idade <= 11)
		{
			cont_mirim++;
		}
		else if(idade >=12 && idade <= 17)
		{
			cont_juvenil++;
		}
		else if(idade > 18)
		{
			cont_adulto++;
		}
		
		cout << "informe a idade: ";
		cin >> idade;
		
	}
	
	cout << "numero de incritos na categoria mirim: " << cont_mirim << endl;
	cout << "numero de incritos na categoria juvenil: " << cont_juvenil << endl;
	cout << "numero de incritos na categoria adulto: " << cont_adulto << endl;
}
