#include <iostream>
using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");
    
    //variaveis
    float CustoFabrica, CustoImpostos, PercentualRevendedor, PrecoFinal;
    
    //entrada
    cout<<"informe o custo de fabrica: ";
    cin>>CustoFabrica;
    
    //Calculo dos acréscimos
    CustoImpostos = (CustoFabrica * 45) / 100;
    PercentualRevendedor = ((CustoImpostos + CustoFabrica )* 10) / 100;
    
    PrecoFinal = CustoFabrica + CustoImpostos + PercentualRevendedor;
    
    cout<<"o preço final e: " << PrecoFinal;
}
