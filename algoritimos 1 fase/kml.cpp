#include <iostream>
using namespace std;
int main()
{
   //variaveis
   string marca;
   float km_inicial, km_final, litros_consumidos, media;
   
   //entradas
   cout << "informe a marca: ";
   cin >> marca;
   
   cout << "informe a quilometragem inicial: ";
   cin >> km_inicial;
   
   cout << "informe a quilometragem final: ";
   cin >> km_final;
   
   cout << "informe os litros consumidos de combustivel: ";
   cin >> litros_consumidos;
   cout << endl;
   
   //processo
   media = (km_final - km_inicial) / litros_consumidos;
   
   //saida
   cout << "Marca: " << marca;
   cout << endl;
   cout << "Quilometro inicial: " << km_inicial;
   cout << endl;
   cout << "Quilometro final: " << km_final;
   cout << endl;
   cout << "Litros consumidos: " << litros_consumidos;
   cout << endl;
   cout << "consumo em km/l: " << media;
}


