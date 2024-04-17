#include <iostream>

using namespace std;

int idade(int dia_do_nasciment, int mes_do_nasciment, int ano_do_nasciment){
    int dia, mes, ano, data_atual, data_nascimento, idade_real;
    mes_do_nasciment=mes_do_nasciment*30;
    ano_do_nasciment=ano_do_nasciment*365;
    data_nascimento = dia_do_nasciment+mes_do_nasciment+ano_do_nasciment;
    
    dia = 29;
    mes = 5*30;
    ano = 2023*365;
    data_atual = dia+mes+ano;
    
    idade_real = data_atual - data_nascimento;
    idade_real = idade_real/365;
    printf("Você tem: %d", idade_real);
    return idade_real;
}

int main()
{
    int dia_do_nascimento, mes_do_nascimento, ano_do_nascimento;
    
    printf("Diga a sua data de nascimento!(separe por enters)");
    scanf("%d", &dia_do_nascimento);
    scanf("%d", &mes_do_nascimento);
    scanf("%d", &ano_do_nascimento);

    
    idade(dia_do_nascimento, mes_do_nascimento, ano_do_nascimento);
    
    return 0;
}
