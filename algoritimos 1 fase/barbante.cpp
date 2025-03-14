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
    
    // Cálculo do perímetro 
    perimetro = 2 * (largura + altura + comprimento);

    // Cálculo da quantidade de barbante necessária
    BarbanteNecessario = 3 * 10 * perimetro;

    // Exibição do resultado
    cout << "A quantidade de barbante necessária para amarrar o pacote é: " << BarbanteNecessario << " cm";
}
