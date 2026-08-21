#include <stdio.h>
#define MAX 255
#include <string.h>
#define TAM 100

//criando a struct pessoa
struct Pessoa{
	char nome[MAX];
	int idade;
};
typedef struct Pessoa TPessoa; // criando novo tipo de dado apartir da struct

int main(){
	
	TPessoa vetor[TAM];
	int i, n;
	
	printf("informe total de pessoas: ");
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		//preenchendo p1
		printf("informe o nome: ");
		fgets(vetor[i].nome, MAX-1, stdin);//coletando o nome(codigo usado para strings)
		
		printf("informe a idade: ");
		scanf("%d", &vetor[i].idade);
		getchar();
	}
	
	for(i=0; i<n; i++){
		printf("nome: %s", vetor[i].nome);
		printf("idade: %d", vetor[i].idade);
	}
	
}
