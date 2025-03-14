#include <iostream>
using namespace std;

int main()
{
    //variaveis
    int n;
    
    cout << "informe o tamanho do vetor: ";
    cin >> n;
  
    int vetor[n];
    
    //entradas
    for(int i = 0; i < n; i++)
    {
        cout << "Informe o valor numérico  para o vetor[" << i << "]: ";
        cin >> vetor[i];
    }
    
    //processo para transformar numeros negativos em zero
    for (int i = 0; i < n; i++)
    {
        if (vetor[i] < 0)
        {
            vetor[i] = 0;
        }
    }

    
    //saida do vetor
    for(int i = 0; i < n; i++)
    {
        cout << vetor[i] << endl;
    }
}

