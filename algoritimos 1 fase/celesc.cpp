#include <iostream>
using namespace std;

int main() {
    // Variáveis
    int numero_consumidor, codigo_consumidor;
    float quant_kwh, preco_kwh;
    float custo_residencial = 0, custo_comercial = 0, custo_industrial = 0;
    float total_consumo_residencial = 0, total_consumo_comercial = 0, total_consumo_industrial = 0;

    cout << "Informe o numero de consumidor (e zero para encerrar): ";
    cin >> numero_consumidor;

    while (numero_consumidor != 0) {
        cout << "Informe o codigo de consumidor (1= residencial, 2= comercial, 3= industrial): ";
        cin >> codigo_consumidor;

        cout << "Informe a quantidade de kwh consumidos no mes: ";
        cin >> quant_kwh;

        if (codigo_consumidor == 1) {
            preco_kwh = 0.3;
            custo_residencial += preco_kwh * quant_kwh;
            total_consumo_residencial += quant_kwh;
        } else if (codigo_consumidor == 2) {
            preco_kwh = 0.5;
            custo_comercial += preco_kwh * quant_kwh;
            total_consumo_comercial += quant_kwh;
        } else if (codigo_consumidor == 3) {
            preco_kwh = 0.7;
            custo_industrial += preco_kwh * quant_kwh;
            total_consumo_industrial += quant_kwh;
        }

        cout << "Informe o numero de consumidor (e zero para encerrar): ";
        cin >> numero_consumidor;
    }

    // Imprimir custo total para cada tipo de consumidor
    cout << "Custo total para consumidores residenciais: R$ " << custo_residencial << endl;
    cout << "Custo total para consumidores comerciais: R$ " << custo_comercial << endl;
    cout << "Custo total para consumidores industriais: R$ " << custo_industrial << endl;

    // Comparar total de consumo para determinar a categoria que consome mais
    if (total_consumo_residencial > total_consumo_comercial && total_consumo_residencial > total_consumo_industrial) {
        cout << "Residencial consome mais." << endl;
    } else if (total_consumo_comercial > total_consumo_residencial && total_consumo_comercial > total_consumo_industrial) {
        cout << "Comercial consome mais." << endl;
    } else if (total_consumo_industrial > total_consumo_residencial && total_consumo_industrial > total_consumo_comercial) {
        cout << "Industrial consome mais." << endl;
    }
}
