#include <iostream>
using namespace std;
main()
{
	setlocale (LC_ALL, "Portuguese");
	
	//Variaveis
	string mercadoria;
	float preco1, preco2, InflacaoDeflacao;
	
	//entradas
	cout << "Informe o nome da mercadoria: ";
	cin >> mercadoria;
	cout << "informe o pre�o no dia 17/03: ";
	cin >> preco1;
	cout << "informe o pre�o no dia 18/03: ";
	cin >> preco2;
	
	
	//calcula o aumento da infla��o em porcentagem, caso contrario, calcula a defla��o
	if(preco2 > preco1){
		InflacaoDeflacao = ((preco2 - preco1)/preco1) * 100;
		cout << "A mercadoria: " << mercadoria << ", teve uma infla��o de " << InflacaoDeflacao << "%";
	} else {
		InflacaoDeflacao = ((preco1 - preco2)/preco1) *100;
		cout << "A mercadoria " << mercadoria << ", teve uma defla��o de " << InflacaoDeflacao << "%";
	}
	
}

