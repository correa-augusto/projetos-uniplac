#include <iostream>
using namespace std;
int main ()
{
	//variaveis
	int NumeroReserva, NumeroHospedes, NumeroDiarias, NumeroMassagens;
    float valorFrigobar, valorBar, valorDiaria, valorMassagem, valorConta, valorISS;
    string nomeReserva, TipoQuarto;
    
    //entradas
    cout << "informe o numero da reserva: ";
    cin >> NumeroReserva;
    cout << "Informe o nome do responsavel pela reserva: ";
    cin >> nomeReserva;
    cout << "informe a quantidade de hospedes: ";
    cin >> NumeroHospedes;
    cout << "informe o tipo do quarto: ";
    cin >> TipoQuarto;
    cout << "informe a quantidade de diarias: ";
    cin >> NumeroDiarias;
    cout << "informe o valor de produtos consumidos no frigobar: ";
    cin >> valorFrigobar;
    cout << "informe o numero de massagens utilizadas pelo cliente: ";
    cin >> NumeroMassagens;
    cout << "informe o valor do consumo de bar: ";
    cin >> valorBar;
    
    
    //processo
    if(TipoQuarto == "standard"){
    	valorDiaria += 50;
	} else if(TipoQuarto == "luxo"){
		valorDiaria += 80;
	} else if(TipoQuarto == "vip"){
		valorDiaria += 150;
	}
	
	
	if(NumeroHospedes >= 3 && NumeroHospedes <= 4){
		valorDiaria += 20;
	} else if(NumeroHospedes > 5){
		valorDiaria += 40;
	}
	
	if (NumeroMassagens <= 3){
        valorMassagem = NumeroMassagens * 80;
    }else{
        valorMassagem = NumeroMassagens * 65;
    }
    
	valorFrigobar += 12;
    valorBar += valorBar * 0.1;

    valorConta = (valorDiaria * NumeroDiarias) + valorMassagem + valorFrigobar + valorBar;

       if (NumeroDiarias > 10) {
        valorISS = valorConta * 0.01;
    }else if (NumeroDiarias > 5){
       valorISS = valorConta * 0.03;
    } else{
        valorISS = valorConta * 0.05;
    }
    
    cout << "========================================";
    cout << endl;
    cout << "Numero da reserva: " << NumeroReserva << endl;
    cout << "Responsavel pela reserva: " << nomeReserva << endl;
    cout << "Tipo de quarto: " << TipoQuarto << endl;
    cout << "Numero de dias: " << NumeroDiarias << endl;
    cout << "Total das diarias: " << valorDiaria << endl;
    cout << "Valor totalde massagem: " << valorMassagem << endl;
    cout << "Valor totalde frigobar: " << valorFrigobar << endl;
    cout << "Valor totalde bar: " << valorBar << endl;
    cout << "ISS: " << valorISS << endl;
    cout << "Conta Final: " << valorConta + valorISS << endl;
    cout << "=========================================";
}
