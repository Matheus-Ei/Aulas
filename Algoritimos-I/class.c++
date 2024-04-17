#include <bits/stdc++.h>
using namespace std;

// Cria uma Classe Pessoa
class Pessoa {
    //Atributos
    public:
        string nome;
        double peso, altura;
    
    //Métodos
    void metodoComum(){
        printf("Criamos um Método dentro de uma classe\n");
        printf("Nome pessoa %s\n",this->nome.c_str());
    }
    
    //Metodo construtor
    Pessoa(string nome){
        printf("Oba, Criamos uma pessoa\n");
        this-> nome = nome;
    }
};

//Função Principal
int main()
{
    string nome;
    
    printf("Digite um nome: ");
    getline(cin, nome, '\n');
    
    Pessoa* p; //Cria um Ponteiro da Classe Pessoa
    
    p = new Pessoa("Matheus"); //Atribue o Endereço de Memoria do Ponteiro de Tipo Pessoa para um Objeto do Tipo Pessoa
    
    p->metodoComum();
    return 0;
}
