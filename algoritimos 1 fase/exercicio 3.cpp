#include <iostream>
using namespace std;

int main() {
    int tamanho_inicial = 2;
    string* nome = new string[tamanho_inicial];
    int* ano_publicacao = new int[tamanho_inicial];
    float* valor = new float[tamanho_inicial];
    int* tipo = new int[tamanho_inicial];
    int cont_livros = 0;
    float media_precos = 0;
    string mensagem = "Nao ha um livro chamado algoritmos para experts no acervo";
    float media_idade_livro = 0, media_idade_revista = 0;
    string nome_caro;
    int ano_caro;
    float preco_caro = 0;
    int tipo_caro;

    float preco_barato = 1000000000;
    string nome_barato;
    int ano_barato;
    int tipo_barato;

    string nome_recente;
    float preco_recente;
    int tipo_recente;

    while (true) 
    {
        // Verifica se é necessário aumentar o tamanho dos arrays
        if (cont_livros >= tamanho_inicial) 
        {
            // Duplica o tamanho dos arrays
            int novo_tamanho = tamanho_inicial * 2;

            // Aloca novos arrays com o dobro do tamanho
            string* novo_nome = new string[novo_tamanho];
            int* novo_ano_publicacao = new int[novo_tamanho];
            float* novo_valor = new float[novo_tamanho];
            int* novo_tipo = new int[novo_tamanho];

            // Copia os dados dos arrays antigos para os novos
            for (int i = 0; i < cont_livros; i++) 
            {
                novo_nome[i] = nome[i];
                novo_ano_publicacao[i] = ano_publicacao[i];
                novo_valor[i] = valor[i];
                novo_tipo[i] = tipo[i];
            }

            // Libera a memória dos arrays antigos
            delete[] nome;
            delete[] ano_publicacao;
            delete[] valor;
            delete[] tipo;

            // Atualiza os ponteiros para os novos arrays
            nome = novo_nome;
            ano_publicacao = novo_ano_publicacao;
            valor = novo_valor;
            tipo = novo_tipo;

            // Atualiza o tamanho inicial
            tamanho_inicial = novo_tamanho;
        }

        // Coleta de dados
        cout << "Nome: ";
        cin >> nome[cont_livros];

        // Encerra o loop se o nome for igual a "fim"
        if (nome[cont_livros] == "fim") 
        {
            break;
        }

        cout << "Ano da publicacao: ";
        cin >> ano_publicacao[cont_livros];

        cout << "Preco: ";
        cin >> valor[cont_livros];

        cout << "Tipo (1 = livro/ 2 = revista): ";
        cin >> tipo[cont_livros];

        cont_livros++;
    }

    // a) Calcule e informe a média de valores (preços) de todos os livros;
    for (int i = 0; i < cont_livros; i++) 
    {
        media_precos = media_precos + valor[i];
    }
    media_precos = media_precos / cont_livros;

    // b) Verifique se há algum livro ou revista chamada "Algoritmos para Experts" no acervo,
    // e caso positivo mande uma mensagem ao usuário confirmando a presença deste;
    for (int i = 0; i < cont_livros; i++)
    {
        if (nome[i] == "algoritmos para experts") 
        {
            mensagem = "Ha um livro ou revista chamado algoritmos para experts no acervo";
        }
    }

    // c) Calcule a média de idade dos livros e das revistas, e informe qual tipo de documento
    // possui a maior média de idade;
    int cont_livros_tipo_1 = 0, cont_livros_tipo_2 = 0;
    for (int i = 0; i < cont_livros; i++) 
    {
        if (tipo[i] == 1) 
        {
            media_idade_livro = 2024 - ano_publicacao[i];
            cont_livros_tipo_1++;
        } 
        else if (tipo[i] == 2) 
        {
            media_idade_revista = 2024 - ano_publicacao[i];
            cont_livros_tipo_2++;
        }
    }
    media_idade_livro = media_idade_livro / cont_livros_tipo_1;
    media_idade_revista = media_idade_revista / cont_livros_tipo_2;

    // d) Verifique e apresente todos os dados do item mais caro e do item mais barato;
    for (int i = 0; i < cont_livros; i++) 
    {
        if (valor[i] > preco_caro)
        {
            preco_caro = valor[i];
            nome_caro = nome[i];
            ano_caro = ano_publicacao[i];
            tipo_caro = tipo[i];
        }
        if (valor[i] < preco_barato) 
        {
            preco_barato = valor[i];
            nome_barato = nome[i];
            ano_barato = ano_publicacao[i];
            tipo_barato = tipo[i];
        }
    }

    // e) Informe o nome e o valor do item mais recente de todo o acervo, e se este é livro ou revista.
    for (int i = 0; i < cont_livros; i++) 
    {
        if (ano_publicacao[i] == 2024) 
        {
            nome_recente = nome[i];
            preco_recente = valor[i];
            tipo_recente = tipo[i];
        }
    }

  
    // Exibe os resultados
    cout << "Media de valores (precos) de todos os livros: " << media_precos << endl;
    cout << mensagem << endl;

  
    if (media_idade_livro > media_idade_revista) 
    {
        cout << "Livros possuem a maior media de idade." << endl;
    } 
    else if((media_idade_livro < media_idade_revista) )
    {
        cout << "Revistas possuem a maior media de idade." << endl;
    }

    cout << "Item mais caro: " << nome_caro << ", Ano: " << ano_caro << ", Preco: " << preco_caro << ", Tipo: " << (tipo_caro == 1 ? "Livro" : "Revista") << endl;
    cout << "Item mais barato: " << nome_barato << ", Ano: " << ano_barato << ", Preco: " << preco_barato << ", Tipo: " << (tipo_barato == 1 ? "Livro" : "Revista") << endl;

    cout << "Item mais recente: " << nome_recente << ", Preco: " << preco_recente << ", Tipo: " << (tipo_recente == 1 ? "Livro" : "Revista") << endl;
}
