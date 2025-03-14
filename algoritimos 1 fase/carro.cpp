#include <iostream>
using namespace std;
int main()
{
   setlocale(LC_ALL, "Portuguese");

   // variaveis
   string vendedor;
   int vendas, salario;
   float valor_vendas, comissao, porcentagem_vendas, valor;
   
   //entradas
   cout << "informe o nome do vendedor: ";
   cin >> vendedor;
   
   cout << "informe a quantidade que ele vendeu: ";
   cin >> vendas;
   
   //processo
   comissao = vendas * 50;
   porcentagem_vendas = (comissao * 5) / 100;
   
   valor_vendas = comissao + porcentagem_vendas;
   
   salario = valor_vendas + 350;
   
   cout << "Nome do vendedor: " << vendedor;
   cout << endl;
   
   cout << "Quantidade vendida: " << vendas;
   cout << endl;
   
   cout << "Valor das vendas acrescido de comissão e porcentagem: " << valor_vendas;
   cout << endl;
   
   cout << "Salario do vendedor: " << salario;
}


