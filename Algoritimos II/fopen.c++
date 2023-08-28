#include <stdio.h>
int main(){
		/* Declaramos as variáveis que serão utilizadas */
		char arquivo[100];
		char texto[100];
		
		/* Declaramos um ponteiro(link para o endereço da memória) para o arquivo de nome: 'pFile'*/
		FILE * pFile;
		
		/* Escrevemos na tela a pergunta para o arquivo e/ou caminho do arquivo */
		printf("Informe o arquivo(COM CAMINHO) que você deseja escrever: \n");
		
		/* Gravamos o que o usuário digitar (caminho/arquivo)*/
		scanf("%s", &arquivo);
		
		/* Esta é a função de abertura de arquivos. Com modo 'w'(Abrir um arquivo texto para gravação. Se o arquivo não existir, ele será criado. 
			Se já existir, o conteúdo anterior será destruído.) */
		pFile = fopen(arquivo , "w");
		
		/* Se o arquivo for não-vazio */
		if(pFile!=NULL){
		
		/* Escrevemos na tela a pergunta para o que deseja ler no arquivo (ESPAÇOS EM BRANCO FINALIZARÁ o texto) */
		printf("Digite o que você deseja pôr no arquivo(SEM ESPAÇOS): \n");
		
		/* Gravamos o que o usuário digitar e guardamos na variável 'texto' */
		scanf("%s", &texto);
		
		/*Escreve uma string(da variável 'texto') num arquivo. */
		fputs(texto, pFile);
		
		/* Quando acabamos de usar um arquivo que abrimos, devemos fechá-lo. Para tanto usa-se a função fclose() */
		fclose(pFile);		
	} 
	return 0; 
}