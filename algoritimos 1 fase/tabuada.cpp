#include <iostream>
using namespace std;

int main()
 {
    // Loop 1 para mostrar de 1 a 10 (para cada número da tabuada)
    for (int i = 1; i <= 10; ++i) 
	{
        cout << "Tabuada do " << i << ":" << endl;
        
        // Loop 2 para ir de 1 a 10 
        for (int j = 1; j <= 10; ++j) 
		{
            // Calcula e exibe o resultado da multiplicação
            cout << i << " x " << j << " = " << (i * j) << endl;
        }
        
        // Adiciona uma linha em branco entre as tabuadas
        cout << endl;
    }
}

