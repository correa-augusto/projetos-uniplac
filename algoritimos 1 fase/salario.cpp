#include <iostream>
using namespace std;
int main()
{
   //variaveis
   string funcionario;
   float salario_bruto, salario_liquido, previdencia, imposto_renda;
   
   //entradas
   cout << "informe o nome do funcionario: " << funcionario;
   cin >> funcionario;
   
   cout << "informe o salario bruto: ";
   cin >> salario_bruto;
   cout << endl;
   
   //processo
   previdencia =   (salario_bruto * 10) / 100;
   imposto_renda = ((salario_bruto - previdencia)* 25) / 100;
   salario_liquido = salario_bruto - previdencia - imposto_renda;
   
   //saida
   cout << "Funcionario: " << funcionario;
   cout << endl;
   
   cout << "Salario bruto: " << salario_bruto;
   cout << endl;
    
   cout << "Salario liquido: " << salario_liquido;
   cout << endl; 
   
   cout << "Valor do desconto da previdencia: " << previdencia;
   cout << endl; 
   
   cout << "Valor do desconto do imposto de renda: " << imposto_renda;
   cout << endl; 
}


