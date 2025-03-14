#include <iostream>
using namespace std;
int main()
{
	//variaveis
	float cont_cand1=0, cont_cand2=0, cont_cand3=0, branco=0, nulo=0, voto, porcentagem1, porcentagem2, porcentagem3, porcentagem_branco, porcentagem_nulo;
	
	for(int i = 1; i <= 20; i++)
	{
		cout << "informe para quem vai seu voto (1= candidato 1, 2= candidato 2, 3= candidato 3, 6= branco, 5= nulo): ";
		cin >> voto;
		
		if(voto == 1)
		{
			cont_cand1++;
		}
		else if(voto == 2)
		{
			cont_cand2++;
		}
		else if(voto == 3)
		{
			cont_cand3++;
		}
		else if(voto == 6)
		{
			branco++;
		}
		else if(voto == 5)
		{
			nulo++;
		}
	}
	
	porcentagem1 = (cont_cand1 / 20) * 100;
	porcentagem2 = (cont_cand2 / 20) * 100;
	porcentagem3 = (cont_cand3 / 20) * 100;
	porcentagem_branco = (branco / 20) * 100;
	porcentagem_nulo = (nulo / 20) * 100;
	
	cout << "==========================================================================================================================================" << endl;
	cout << "Numero de votos do candidato 1: " << cont_cand1 << " porcentagem de votos do candidato 1: " << porcentagem1 << "%" << endl;
    cout << "Numero de votos do candidato 2: " << cont_cand2 << " porcentagem de votos do candidato 2: " << porcentagem2 << "%" << endl;
    cout << "Numero de votos do candidato 3: " << cont_cand3 << " porcentagem de votos do candidato 3: " << porcentagem3 << "%" << endl;
    cout << "Numero de votos em branco: " << branco << " porcentagem de votos em branco: " << porcentagem_branco << "%" << endl;
    cout << "Numero de votos nulos: " << nulo << " porcentagem de votos nulos: " << porcentagem_nulo << "%" << endl;
	
	if (cont_cand1 > cont_cand2 && cont_cand1 > cont_cand3)
    {
        cout << "O vencedor é o candidato 1" << endl;
    }
    else if (cont_cand2 > cont_cand1 && cont_cand2 > cont_cand3)
    {
        cout << "O vencedor é o candidato 2" << endl;
    }
    else if (cont_cand3 > cont_cand1 && cont_cand3 > cont_cand2)
    {
        cout << "O vencedor é o candidato 3" << endl;
    }
    else
    {
        cout << "Houve um empate entre os candidatos" << endl;
    }
    cout << "==========================================================================================================================================" << endl;
}
