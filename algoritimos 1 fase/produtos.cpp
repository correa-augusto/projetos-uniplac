#include <iostream>
#include <limits>
using namespace std;
int main()
{
    //variaveis
    string nome, nome_mais_barato, nome_mais_vendido;
    float preco_unitario, quantidade, preco_mais_barato=numeric_limits<float>::max(), quant_mais_vendido=0, cont_produto=0, soma_produto=0,
    media_precos;
    
    cout << "informe o nome do produto (ou fim para encerrar): ";
    cin >> nome;
    while(nome !="fim")
    {
        cout << "informe o preco unitario do produto: ";
        cin >> preco_unitario;
        
        //soma o preço dos produtos para no final calcular a média
        soma_produto = soma_produto + preco_unitario;
        
        cout << "informe a quantidade vendida do produto: ";
        cin >> quantidade;
        
        //armazena o preço e o nome do mais barato
        if(preco_unitario < preco_mais_barato)
        {
            nome_mais_barato = nome;
            preco_mais_barato = preco_unitario;
        }
        
        //armazena quantidade e nome do masi vendido
        if(quantidade > quant_mais_vendido)
        {
            quant_mais_vendido = quantidade;
            nome_mais_vendido = nome;
        }
        
         //soma a quantidade de produtos
         cont_produto++;
         cout << "informe o nome do produto (ou fim para encerrar): ";
         cin >> nome;
    }
    
    media_precos = soma_produto /  cont_produto;
    
       if (cont_produto > 0) 
       {
        media_precos = soma_produto / cont_produto;
        cout << "=============================================================" << endl;
        cout << "Nome do produto mais barato: " << nome_mais_barato << endl;
        cout << "Valor do produto mais barato: " << preco_mais_barato << endl;
        cout << "Nome do produto mais vendido: " << nome_mais_vendido << endl;
        cout << "Quantidade do produto mais vendido: " << quant_mais_vendido << endl;
        cout << "Media de preco dos produtos: " << media_precos << endl;
        cout << "=============================================================" << endl;
       } 
       else 
       {
        cout << "Nenhum produto foi inserido. Programa encerrado.";
       }

}

