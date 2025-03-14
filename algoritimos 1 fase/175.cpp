#include <iostream>
using namespace std;
int main()
{
	//variaveis
	float idade, altura, cont175=0, Media175=0, maiores25=0, media175total=0;
	
	for(int i = 1; i <= 10; i++){
		cout << "informe a idade: ";
		cin >> idade;
		cout << "informe a altura: ";
		cin >> altura;
		
		if(altura > 1.75){
			cont175++;
			Media175 = Media175 + idade;
		}
		
		if(idade > 25){
			maiores25 ++;
		}
	}
	
	media175total = Media175 / cont175;
	
	cout << "media dos alunos com mais de 1.75 de altura: " << media175total << endl;
	cout << "numero de alunos com mais de 25 anos: " << maiores25;
}
