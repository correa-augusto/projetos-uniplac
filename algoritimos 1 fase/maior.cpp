#include <iostream>
using namespace std;
int main()
{
	//variaveis
	int i=1, maior=0, num;
	
	cout << "informe o numero: ";
	cin >> num;
	maior = num;
	while(i <= 9)
	{
		cout << "informe o numero: ";
		cin >> num;
		
		if(num > maior)
		{
			maior = num;
		}
		
		i++;
	}
	
	cout << "o maior numero: " << maior;
	
}
