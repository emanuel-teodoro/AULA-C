#include <stdio.h>
#include <string.h>

#define MAX 255
#define TAM 100

struct Pessoa {
	int id;
	int status;
	char nome[MAX];
	int idade;
};
typedef struct Pessoa TPessoa;

void cadastrar(TPessoa vetor[TAM], int pos) {
	
	printf("Nome: ");
	fgets(vetor[pos].nome, MAX-1, stdin);
	
	printf("Idade: ");
	scanf("%d", &vetor[pos].idade);
	
	vetor[pos].id = pos;
	vetor[pos].status = 1;
	
	printf("Pessoa cadastrada com sucesso!\n\n");	
}

void listar(TPessoa vetor[TAM], int n) {
	
	int i;
	
	printf("\nPessoas cadastradas:\n");
	
	for (i=0; i<n; i++) {
	
		if (vetor[i].status == 1) {
			printf("Id: %d\n", vetor[i].id);
			printf("Nome: %s", vetor[i].nome);
			printf("Idade: %d\n", vetor[i].idade);	
		}	
	}
	
	printf("\n");		
}

void pesquisar(TPessoa vetor[TAM], int n) {
	
	int i, encontrou;
	char nome[MAX];
	
	printf("Entre com um nome: ");
	fgets(nome, MAX-1, stdin);
	
	encontrou = 0;
	
	for (i=0; i<n; i++) {
		
		if (vetor[i].status == 1 && strcmp(vetor[i].nome, nome) == 0) {
			printf("Id: %d\n", vetor[i].id);
			printf("Nome: %s", vetor[i].nome);
			printf("Idade: %d\n", vetor[i].idade);
			encontrou = 1;
		}		
	}
	
	if (encontrou == 0) {
		printf("Pessoa nao encontrada\n");
	}
	printf("\n");
}

void remover(TPessoa vetor[TAM], int n) {
	
	int id;
	
	printf("Entre com o id: ");
	scanf("%d", &id);
	
	if (id < 0 || id >= n) {
		printf("Id invalido\n\n");
		return;
	}
	
	if (vetor[id].status == 0) {
		printf("Id invalido\n\n");
		return;
	}
	
	vetor[id].status = 0;
	printf("Cadastro removido!\n\n");
}

void atualizar(TPessoa vetor[TAM], int n) {
	
	int id;
	
	printf("Entre com o id: ");
	scanf("%d", &id);
	getchar();
	
	if (id < 0 || id >= n) {
		printf("Id invalido\n");
		return;
	}
	
	if (vetor[id].status == 0) {
		printf("Id invalido\n");
		return;
	}
	
	printf("\nNome: %s", vetor[id].nome);
	printf("Idade: %d\n", vetor[id].idade);
	
	printf("Entre com os novos dados:\n");
	
	printf("Nome: ");
	fgets(vetor[id].nome, MAX-1, stdin);
	
	printf("Idade: ");
	scanf("%d", &vetor[id].idade);
	
	printf("Cadastro atualizado!\n\n");
}

void menu() {
	
	printf("1 - Cadastrar\n");
	printf("2 - Listar\n");
	printf("3 - Pesquisar\n");
	printf("4 - Remover\n");
	printf("5 - Atualizar\n");
	printf("6 - Sair\n");
	printf("Entre com a opcao: ");
} 

int main() {
	
	TPessoa vetor[TAM];
	int n, op;
	
	n = 0;
	
	do {
		menu();	
		scanf("%d", &op);
		getchar();
		
		switch (op) {
			case 1: 
				cadastrar(vetor, n);
				n++;
				break;
			case 2:
				listar(vetor, n);
				break;
			case 3:
				pesquisar(vetor, n);
				break;
			case 4:
				remover(vetor, n);
				break;
			case 5:
				atualizar(vetor, n);
				break;
			case 6:
				break;
			default:
				printf("Opcao invalida\n");
				break;
		}
		
	} while (op != 6);
}
