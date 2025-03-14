#include <iostream>
using namespace std;
int main()
{
	string nome;
	float idade, turno, semestre, cont_manha=0, cont_noite=0, cont_calouros=0, idade_calouros=0, cont_mulher_manha=0, cont_masc=0, cont_fem=0, sexo, media_calouros;
	
	cout << "informe o turno: ";
	cin >> turno;
	
	while(turno != 0)
	{
		cout << "informe o nome: ";
		cin >> nome;
		
		cout << "informe a idade: ";
		cin >> idade;
			
		
		cout << "informe o sexo (1= masc, 2= fem): ";
		cin >> sexo;
			
		cout << "informe o turno (1= manha, 2= noite): ";
		cin >> turno;
		
		cout << "informe o semestre ( 1 a 8): ";
		cin >> semestre;
		
		if(turno == 1)
		{
			cont_manha++;
		}
		else if(turno == 2)
		{
			cont_noite++;
		}
		
		if(semestre == 1 || semestre == 2)
		{
			cont_calouros++;
			idade_calouros = idade_calouros + idade;
		}
		
		if(sexo == 1)
		{
			cont_masc++;
		}
		else if(sexo == 2)
		{
			cont_fem++;
		}
		
		if(turno == 1 && sexo == 2)
		{
			cont_mulher_manha++;
		}
		
		cout << "informe o turno: ";
     	cin >> turno;
	}
	media_calouros = idade_calouros / cont_calouros;
	
	cout << "========================================================================" << endl:
	cout << "numero de alunos matriculados no turno da manha: " << cont_manha << endl;
	cout << "numero de alunos matriculados no turno da noite: " << cont_noite << endl;
	cout << "numero de mulheres que estudam pela manhã: " << cont_mulher_manha << endl;
	if(cont_masc > cont_fem)
	{
		cout << "o curso possui mais homens" << endl;
	}
	else if(cont_fem > cont_masc)
	{
		cout << "o curso possui mais mulheres" << endl;
	}
	cout << "========================================================================" << endl:
}
