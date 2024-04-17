#include <stdio.h>

int main()
{
    //Cria um Ponteiro Chamado Z
    int *z;
    
    //Cria uma Variavel x
    int x;
    
    //Aponta o Ponteiro z para a Variavel x
    z = &x;
    
    scanf("%d", z); //Aribue um Valor para z
    
    printf("%d", x); //Printa x (Ele Terá o Mesmo Valor de z)

    return 0;
}
