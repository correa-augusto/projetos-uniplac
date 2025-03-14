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
	cout << "informe o preço no dia 17/03: ";
	cin >> preco1;
	cout << "informe o preço no dia 18/03: ";
	cin >> preco2;
	
	
	//calcula o aumento da inflação em porcentagem, caso contrario, calcula a deflação
	if(preco2 > preco1){
		InflacaoDeflacao = ((preco2 - preco1)/preco1) * 100;
		cout << "A mercadoria: " << mercadoria << ", teve uma inflação de " << InflacaoDeflacao << "%";
	} else {
		InflacaoDeflacao = ((preco1 - preco2)/preco1) *100;
		cout << "A mercadoria " << mercadoria << ", teve uma deflação de " << InflacaoDeflacao << "%";
	}
	
}

