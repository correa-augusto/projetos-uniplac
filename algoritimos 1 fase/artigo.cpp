#include <iostream>
using namespace std;
int
main ()
{
  setlocale (LC_ALL, "Portuguese");
  
  //variaveis 
  string artigo1, artigo2, artigo3;
  float preco1, preco2, preco3, PrecoDesconto1, PrecoDesconto2,PrecoDesconto3, PrecoTotal, PrecoTotalDesc;
  
  //entradas
  cout << "informe o nome do primeiro artigo: ";
  cin >> artigo1;

  cout << "informe o nome do segundo artigo: ";
  cin >> artigo2;

  cout << "Informe o nome do terceiro artigo: ";
  cin >> artigo3;

  cout << "informe o preco do primeiro artigo: ";
  cin >> preco1;

  cout << "informe o preco segundo artigo: ";
  cin >> preco2;

  cout << "informe o preco do terceiro artigo: ";
  cin >> preco3;
  cout << endl;

  PrecoDesconto1 = (preco1 - ((preco1 * 5) / 100));
  PrecoDesconto2 = (preco2 - ((preco2 * 5) / 100));
  PrecoDesconto3 = (preco3 - ((preco3 * 5) / 100));

  PrecoTotal = preco1 + preco2 + preco3;
  PrecoTotalDesc = PrecoDesconto1 + PrecoDesconto2 + PrecoDesconto3;

  cout << "Nome Artigo 1 : " << artigo1;
  cout << endl;
  cout << "Preco artigo um : " << preco1;
  cout << endl;
  cout << "Preco artigo 1 com desconto : " << PrecoDesconto1;
  cout << endl;
  cout << endl;

  cout << "Nome Artigo 2 : " << artigo2;
  cout << endl;
  cout << "Preco artigo dois : " << preco2;
  cout << endl;
  cout << "Preco artigo 2 com desconto : " << PrecoDesconto2;
  cout << endl;
  cout << endl;
  
  cout << "Nome Artigo 3 : " << artigo3;
  cout << endl;
  cout << "Preco artigo tres : " << preco3;
  cout << endl;
  cout << "Preco artigo 3 com desconto : " << PrecoDesconto3;
  cout << endl;
  cout << endl;
  
  cout << "total a pagar: " << PrecoTotal;
  cout << endl;
  cout << "total a pagar com desconto: " << PrecoTotalDesc;
}

