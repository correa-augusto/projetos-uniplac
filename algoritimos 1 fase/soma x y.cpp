#include <iostream>
using namespace std;

int main()
{
    //variaveis
    float x[5], y[5], a[5];
    
    // for para entradas
    for (int i = 0; i < 5; i++)
    {
        cout << "Informe um valor para x[" << i << "]: ";
        cin >> x[i];
        
        cout << "Informe um valor para y[" << i << "]: ";
        cin >> y[i];
    }
    
    // for para processo
    for (int j = 0; j < 5; j++)
    {
       a[j] = x[j] + y[j];
    }
    
    //for para saída
    for (int j = 0; j < 5; j++) 
    {
        cout << "a[" << j << "] = " << a[j] << endl;
    }

  
}
