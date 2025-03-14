#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	
    //Variaveis
    float picole1, picole2, picole3, valor1, valor2, valor3;
    
    //entradas
    cout << "informe a quantidade de vendas do picolé 1: ";
    cin >> picole1;
    cout << "informe a quantidade de vendas do picolé 2: ";
    cin >> picole2;
    cout << "informe a quantidade de vendas do picolé 3: ";
    cin >> picole3;
    cout << endl;
    
    //processo
    valor1 = picole1 * 0.50;
    valor2 = picole2 * 0.60;
    valor3 = picole3 * 0.75;
    
    //saida
    cout << "o picolé 1 vendeu: " << picole1 << " unidades" << " e arrecadou: " << valor1;
    cout << endl;
    
    cout << "o picolé 2 vendeu: " << picole2 << " unidades" << " e arrecadou: " << valor2;
    cout << endl;
    
    cout << "o picolé 3 vendeu: " << picole3 << " unidades" << " e arrecadou: " << valor3;
    cout << endl;
}

