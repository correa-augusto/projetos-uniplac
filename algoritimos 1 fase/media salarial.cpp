#include <iostream>
using namespace std;

int main() {
    string nome, sexo;
    float salario_masc = 0, salario_fem = 0, salario, media_fem, media_masc;
    int cont_masc = 0, cont_fem = 0;
   
    cout << "Informe o sexo (M= Masculino, F= Feminino, X= Parar execu��o): ";
    cin >> sexo;
    while(sexo != "X") 
    {
        cout << "Informe o nome: ";
        cin >> nome;
       
        cout << "Informe o salario: ";
        cin >> salario;

        if(sexo == "M") {
            cont_masc++;
            salario_masc += salario;
        }
        else if(sexo == "F") {
            cont_fem++;
            salario_fem += salario;
        }
       
        cout << "Informe o sexo (M= Masculino, F= Feminino, x= Parar execu��o): ";
        cin >> sexo;
    }
   
    if(cont_masc > 0) 
    {
        media_masc = salario_masc / cont_masc;
        cout << "M�dia salarial dos homens: " << media_masc << endl;
    } 
    else 
    {
        cout << "Nenhum homem foi inserido." << endl;
    }
   
    if(cont_fem > 0) 
    {
        media_fem = salario_fem / cont_fem;
        cout << "M�dia salarial das mulheres: " << media_fem << endl;
    } 
    else 
    {
        cout << "Nenhuma mulher foi inserida." << endl;
    }

    if(cont_masc > 0 && cont_fem > 0) 
    {
        if(media_masc > media_fem) 
        {
            cout << "Os homens possuem uma m�dia salarial maior do que as mulheres." << endl;
        }
        else if(media_fem > media_masc) 
        {
            cout << "As mulheres possuem uma m�dia salarial maior do que os homens." << endl;
        }
        else 
        {
            cout << "As m�dias salariais dos homens e mulheres s�o iguais." << endl;
        }
    } 
}
