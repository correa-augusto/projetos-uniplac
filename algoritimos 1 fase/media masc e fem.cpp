#include <iostream>
using namespace std;
int main(){
	
	//variaveis
	float nota, ContMasc=0, ContFem=0, NotaMasc=0, NotaFem=0, MediaMasc, MediaFem;
	string sexo;
	
	//loop, entradas, verificaçoes
	for(int i = 1; i <= 5; i++){
		cout << "informe o sexo do aluno: ";
		cin >> sexo;
		cout << "informe a nota do aluno: ";
		cin >> nota;
		
		if(sexo == "masculino")
		{
			ContMasc++;
			NotaMasc = NotaMasc + nota;
		}
		else if(sexo == "feminino")
		{
			ContFem++;
			NotaFem = NotaFem + nota;
		}
	}
	
	
	MediaMasc = NotaMasc / ContMasc;
	MediaFem = NotaFem / ContFem;
	
	if(MediaMasc > MediaFem)
	{
		cout << "Media masculina de: " << MediaMasc << " E a maior";
	}
	else{
		cout << "Media feminina de: " << MediaFem << " E a maior";
	}
}
