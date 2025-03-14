#include <iostream>
using namespace std;
int main()
{
    //variaveis
    string nome, nome_velho;
    float idade, idade_velho=0;
    int cont_aluno=0;
    
     cout << "informe a idade do aluno: ";
     cin >> idade;
    //entradas processos repetição
    while(idade !=0)
    {
       
        cout << "informe o nome do aluno: ";
        cin >> nome;
        
        if(idade > idade_velho)
        {
            idade_velho = idade;
            nome_velho = nome;
        }
        
        cout << "informe a idade do aluno (ou zero para parar): ";
        cin >> idade;
        
    }
    
    cout << "nome do aluno mais velho: " << nome_velho << endl;
    cout << "idade do aluno mais velho: " << idade_velho;
}

