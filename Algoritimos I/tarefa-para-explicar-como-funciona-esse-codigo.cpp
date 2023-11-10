#include <bits/stdc++.h>
#define TAM 5
using namespace std;
char opcao(){
	char op;
	printf("\nA - Adicionar\n");
	printf("I - Imprimir\n");
	printf("S - Sair\n");
	scanf(" %c", &op);
	return op;
}
void leitura(int *vet){
	printf("Digite um valor\n");
	scanf("%d", vet);
}
void imprimir(int *vet, int x){
    int i;
    for(i=0;i<x;i++){
        printf(" %d ",*vet);
        vet++;
    }
}
int main(){
    int vetor[TAM], i=0;
    char op;
    do {
    	op = opcao();
		switch(op){
			case 'A':
			case 'a':
				if(i<TAM){
					leitura(&vetor[i]);
					i++;
				} else {
					printf("Vetor cheio\n");
				}
			break;
			case 'I':
			case 'i':
				imprimir(&vetor[0], i);
			break;
		}
    } while(op!='S');
}
