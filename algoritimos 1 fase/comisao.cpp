#include <iostream>
using namespace std;
int main()
{
   setlocale (LC_ALL, "Portuguese");
   //variaveis
   string vendedor;
   float PrecoUnitario, QuantPecas, comissao, ValorVendido, ValorFinal;
   
   //entradas
   cout<<"informe o nome do vendedor: ";
   cin>>vendedor;
   cout<<"informe a quantidade vendida: ";
   cin>>QuantPecas;
   cout<<"informe o preço da peça: ";
   cin>>PrecoUnitario;
   
   //processo
   ValorVendido = QuantPecas * PrecoUnitario;
   comissao = (ValorVendido * 5) / 100 ;
   ValorFinal = ValorVendido + comissao;
   //Saida
   cout<< "a comissao do vendedor " << vendedor << " foi de " << comissao << " e seu salario foi " << ValorFinal;
}
