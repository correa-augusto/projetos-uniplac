#include <iostream>
using namespace std;

int main() {
    // Inicialização dos arrays com um tamanho inicial
    int tamanho_inicial = 2;
    string* nome = new string[tamanho_inicial];
    float* idade = new float[tamanho_inicial];
    float* sexo = new float[tamanho_inicial];
    float* nota = new float[tamanho_inicial];
    float faixa_etaria = 0;
    int cont_aluno = 0;
    string mensagem_ze;
    float nota_homem = 0, nota_mulher = 0;
    int cont_homem = 0, cont_mulher = 0;
    float idade_aluno_mais_velho = -1;
    string nome_aluno_mais_velho;
    float nota_aluno_mais_velho = 0;
    float idade_aluno_mais_novo = 10000;
    string nome_aluno_mais_novo;
    float nota_aluno_mais_novo = 0;
    float maior_nota = 0;
    string nome_maior;
    int sexo_maior_nota;

    cout << "Informe os dados dos alunos (ou 'fim' em nome para parar):" << endl;

    // Loop para entrada dos dados dos alunos
    while (true) {
        // Verifica se é necessário aumentar o tamanho dos arrays
        if (cont_aluno >= tamanho_inicial) {
            // Duplica o tamanho dos arrays
            int novo_tamanho = tamanho_inicial * 2;

            // Aloca novos arrays com o dobro do tamanho
            string* novo_nome = new string[novo_tamanho];
            float* nova_idade = new float[novo_tamanho];
            float* novo_sexo = new float[novo_tamanho];
            float* nova_nota = new float[novo_tamanho];

            // Copia os dados dos arrays antigos para os novos
            for (int i = 0; i < cont_aluno; i++) {
                novo_nome[i] = nome[i];
                nova_idade[i] = idade[i];
                novo_sexo[i] = sexo[i];
                nova_nota[i] = nota[i];
            }

            // Libera a memória dos arrays antigos
            delete[] nome;
            delete[] idade;
            delete[] sexo;
            delete[] nota;

            // Atualiza os ponteiros para os novos arrays
            nome = novo_nome;
            idade = nova_idade;
            sexo = novo_sexo;
            nota = nova_nota;

            // Atualiza o tamanho inicial
            tamanho_inicial = novo_tamanho;
        }

        // Coleta de dados dos alunos
        cout << "Nome: ";
        cin >> nome[cont_aluno];

        // Encerra o loop se nome == "fim"
        if (nome[cont_aluno] == "fim") {
            break;
        }

        cout << "Idade: ";
        cin >> idade[cont_aluno];

        cout << "Sexo (1-masc/2-fem): ";
        cin >> sexo[cont_aluno];

        cout << "Nota: ";
        cin >> nota[cont_aluno];

        // Verifica se há um aluno chamado zé
        if (nome[cont_aluno] == "zé") {
            mensagem_ze = "Há um aluno chamado zé. Ola, zé!";
        }

        cont_aluno++;
    }

    // Calcula a média de idade dos alunos
    if (cont_aluno > 0) {
        for (int i = 0; i < cont_aluno; i++) {
            faixa_etaria += idade[i];
        }
        faixa_etaria /= cont_aluno;
    }

    // Calcula a média de notas dos homens e mulheres
    for (int i = 0; i < cont_aluno; i++) {
        if (sexo[i] == 1) {
            nota_homem += nota[i];
            cont_homem++;
        } else if (sexo[i] == 2) {
            nota_mulher += nota[i];
            cont_mulher++;
        }
    }

    // Verifica para evitar divisão por zero
    if (cont_homem > 0) {
        nota_homem /= cont_homem;
    }

    if (cont_mulher > 0) {
        nota_mulher /= cont_mulher;
    }

    // Encontra o aluno mais velho e mais novo
    for (int i = 0; i < cont_aluno; i++) {
        if (idade[i] > idade_aluno_mais_velho) {
            nome_aluno_mais_velho = nome[i];
            idade_aluno_mais_velho = idade[i];
            nota_aluno_mais_velho = nota[i];
        }
        if (idade[i] < idade_aluno_mais_novo) {
            nome_aluno_mais_novo = nome[i];
            idade_aluno_mais_novo = idade[i];
            nota_aluno_mais_novo = nota[i];
        }
    }

    // Encontra o aluno com a maior nota
    for (int i = 0; i < cont_aluno; i++) {
        if (nota[i] > maior_nota) {
            maior_nota = nota[i];
            nome_maior = nome[i];
            sexo_maior_nota = sexo[i];
        }
    }

    // Saídas
    cout << "================================================" << endl;
    cout << "A faixa etária da turma é de: " << faixa_etaria << endl;

    if (!mensagem_ze.empty()) {
        cout << mensagem_ze << endl;
    }

    if (cont_homem > 0 && cont_mulher > 0) 
    {
        if (nota_homem > nota_mulher) 
        {
            cout << "\n Os homens possuem a maior média de notas" << endl;
        } 
        else if (nota_mulher > nota_homem) 
        {
            cout << "\n As mulheres possuem a maior média de notas" << endl;
        } 
    }

    cout << "Dados do aluno mais velho: " << endl;
    cout << "Nome: " << nome_aluno_mais_velho << endl;
    cout << "Idade: " << idade_aluno_mais_velho << endl;
    cout << "\n Nota: " << nota_aluno_mais_velho << endl;

    cout << "Dados do aluno mais novo: " << endl;
    cout << "Nome: " << nome_aluno_mais_novo << endl;
    cout << "Idade: " << idade_aluno_mais_novo << endl;
    cout << "\n Nota: " << nota_aluno_mais_novo << endl;

    cout << "Nome, nota e sexo do melhor aluno: " << endl;
    cout << "Nome: " << nome_maior << endl;
    cout << "Nota: " << maior_nota << endl;
    if (sexo_maior_nota == 1) 
    {
        cout << "Sexo: Masculino" << endl;
    } 
    else if (sexo_maior_nota == 2) 
    {
        cout << "Sexo: Feminino" << endl;
    }
    cout << "================================================" << endl;
}
