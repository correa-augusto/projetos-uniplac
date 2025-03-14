#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "portuguese");
	
	//Variaevis
	float ValorCarro;
	int vidro, ar, trava, pintura, direcao, pagamento;
	
	//entradas
	cout << "informe o valor do carro: ";
	cin >> ValorCarro;
	
	cout << "O carro tera vidros eletricos? (sim = 1 ou não = 0): ";
	cin >> vidro;
	
	cout << "O carro tera ar condicionado? (sim = 1 ou não = 0): ";
	cin >> ar;
	
	cout << "O carro tera trava e alarme central? (sim = 1 ou não = 0): ";
	cin >> trava;
	
	cout << "O carro tera pintura metalica? (sim = 1 ou não = 0): ";
	cin >> pintura;
	
	cout << "O carro tera direcao hidraulica? (sim = 1 ou não = 0): ";
	cin >> direcao;
	
	cout << "O pagamento sera avista? (sim = 1 ou não = 0): ";
	cin >> pagamento;
	
	
	//tratamento
	if(vidro == 1){
		ValorCarro = ValorCarro + 500;
		cout << "Vidros eletricos adicionados";
		cout << endl;
	}
	
	if(ar == 1){
		ValorCarro = ValorCarro + 2000;
		cout << "Ar condicionado adicionado";
		cout << endl;
	}
	
	if(trava == 1){
		ValorCarro = ValorCarro + 500;
		cout << "Trava e alarme central adicionados";
		cout << endl;
	}
	
	if(pintura == 1){
		ValorCarro = ValorCarro + 1000;
		cout << "pintura metalica adicionada";
		cout << endl;
	}
	
	if(direcao == 1){
		ValorCarro = ValorCarro + 2500;
		cout << "direcao hidraulica adicionada";
		cout << endl;
		cout << endl;
	}
	
	if(pagamento == 1){
	    ValorCarro = ((ValorCarro - (ValorCarro * 5) / 100));
	}
	
	
	//saida
	cout << "O valor total do carro ficou em: " << ValorCarro;
}
