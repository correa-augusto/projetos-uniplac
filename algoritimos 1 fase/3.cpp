#include <iostream>
#include <string>
using namespace std;

int main() {
    string nome, nome_alto, nome_novo;
    float idade, altura, cont_180 = 0, soma_180 = 0, media_180, cont_35 = 0, mais_alto = 0, mais_novo = 999;

    // Processo
    for(int i = 1; i <= 20; i++) {
        cout << "Informe o nome: ";
        cin >> nome;
        cout << "Informe a altura: ";
        cin >> altura;
        cout << "Informe a idade: ";
        cin >> idade;

        // Define o mais alto
        if(altura > mais_alto) {
            mais_alto = altura;
            nome_alto = nome;
        }

        // Define o mais novo
        if(idade < mais_novo) {
            mais_novo = idade;
            nome_novo = nome;
        }

        if(altura > 1.80) {
            cont_180++;
            soma_180 = soma_180 + idade;
        }

        if(idade > 35) {
            cont_35++;
        }
    }

    // Calcula a média das idades dos alunos com altura acima de 1.80
    if(cont_180 != 0) {
        media_180 = soma_180 / cont_180;
    } else {
        media_180 = 0;
    }

    // Resultados
    cout << "Aluno mais alto: " << nome_alto << ", altura: " << mais_alto << endl;
    cout << "Aluno mais novo: " << nome_novo << ", idade: " << mais_novo << endl;
    cout << "Número de alunos com altura acima de 1.80: " << cont_180 << endl;
    cout << "Número de alunos com idade acima de 35: " << cont_35 << endl;
    cout << "Média de idade dos alunos com altura acima de 1.80: " << media_180 << endl;
}

