#include <iostream>
#include <math.h>
using namespace std;
main ()
{
	float num1, num2, num3, delta, x1, x2;
	
	cout << "Bora calcular a fórmula de bhaskara, me diz três números ai por favor";
	cout << endl;
    cout << "numero 1: ";
	cin >> num1;
	cout << "numero 2: ";
	cin >> num2;
	cout << "numero 3: ";
	cin >> num3;
	
	//Calculo do delta
	delta = (num2 * num2) - (-4 * num1* num3);
	delta = sqrt(delta);
	
	if(delta > 0){
		x1 = (-num2+delta) / (2*num1);
		x2 = (-num2-delta) / (2*num1);
		cout << "a formula resultou em: " << x1 << " e : " << x2;
     }else if(delta == 0){
        x1 = (-num2) / (2*num1);
     }else if(delta < 0){
	cout<< "Nao tem como calcular, com delta negativo";
}
}
