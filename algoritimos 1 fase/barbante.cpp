#include <iostream>
using namespace std;
main()
{
	setlocale(LC_ALL, "portuguese");
	
	//variaveis
    float largura, altura, comprimento;
    float perimetro, BarbanteNecessario;
    
    //entradas
    cout << "Digite a largura do pacote (em cm): ";
    cin >> largura;
    cout << "Digite a altura do pacote (em cm): ";
    cin >> altura;
    cout << "Digite o comprimento do pacote (em cm): ";
    cin >> comprimento;
    
    // C�lculo do per�metro 
    perimetro = 2 * (largura + altura + comprimento);

    // C�lculo da quantidade de barbante necess�ria
    BarbanteNecessario = 3 * 10 * perimetro;

    // Exibi��o do resultado
    cout << "A quantidade de barbante necess�ria para amarrar o pacote �: " << BarbanteNecessario << " cm";
}
