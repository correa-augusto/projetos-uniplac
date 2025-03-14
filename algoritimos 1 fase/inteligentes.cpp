#include <iostream>
using namespace std;

int main()
{
    //variaveis
    string nome[20], nome_acima_media[20];
    float nota[20], media_turma=0, nota_acima_media[20];
    int cont_inteligentes=0;

    // entradas
    for(int i =0; i <20; i++)
    {
        cout << "informe o nome na posicao[" << i << "]: ";
        cin >> nome[i];
        
        cout << "informe a nota na posicao[" << i << "]: ";
        cin >> nota[i];
        
        media_turma = media_turma + nota[i];
    }
    
       media_turma = media_turma / 20;
    
    // Processo para identificar estudantes com nota acima da média
    for(int i =0; i <20; i++)
    {
        if(nota[i] > media_turma)
        {
            nome_acima_media[cont_inteligentes] = nome[i];
            nota_acima_media[cont_inteligentes] = nota[i];
            cont_inteligentes++;
        }
    }
    
     // Saída dos estudantes com nota acima da média
    cout << "Estudantes com nota acima da media:" << endl;
    for(int i = 0; i < cont_inteligentes; i++)
    {
        cout << "Nome: " << nome_acima_media[i] << ", Nota: " << nota_acima_media[i] << endl;
    }
    
}
