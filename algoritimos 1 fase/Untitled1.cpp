#include <iostream>
using namespace std;
int main()
{
    //variaveis
    string nome;
    float nota, nota_turma=0, media_turma;
    int cont_aluno=0;
    
    //processo, entradas, repetição
    while(nome!="fim" && cont_aluno <=15)
    {
        cout << "Informe o nome do aluno (ou 'fim' para encerrar): ";
        cin >> nome;

        if (nome != "fim")
        {
            cout << "Informe a nota do aluno " << nome << ": ";
            cin >> nota;

            nota_turma += nota;
            cont_aluno++;
        }
    }
    
    media_turma = nota_turma / cont_aluno;
    cout << "media da turma : " << media_turma << endl;
    cout << "numero de alunos " << cont_aluno;
}

