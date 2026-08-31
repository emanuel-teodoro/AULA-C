#include <stdio.h>
#include <string.h>
#define TAM 50
#define MAX_STRING 100

typedef struct Pessoa {
	char nome[MAX_STRING];
	int idade;
}TPessoa;

void preenche_vetor(TPessoa pessoas[], int num_pessoas){
	int i;
	for (i=0; i<num_pessoas; i++){
		printf("informe o nome:\n");
		fgets(pessoas[i].nome, MAX_STRING-1, stdin);
		
		printf("informe a idade\n");
		scanf("%d", & pessoas[i].idade);
		getchar();
	}
}

void imprime_vetor(TPessoa pessoas[], int num_pessoas){
	int i;
	for(i=0; i<num_pessoas; i++){
		printf("\nDados da pessoa %d: \n", i+1);
		printf("nome = %s", pessoas[i].nome);
		printf("idade = %d\n", pessoas[i].idade);
	}
}

int main(){
	TPessoa pessoas[TAM];
	int num_pessoas;
	
	printf("informa quantidade de pessoas:\n");
	scanf("%d", &num_pessoas);
	getchar();
	
	preenche_vetor(pessoas, num_pessoas);
	imprime_vetor(pessoas, num_pessoas);
	
	return 0;
}
