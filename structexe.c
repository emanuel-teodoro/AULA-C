#include <stdio.h>
#define MAX 100
#include <string.h>

//criando a struct pessoa
struct Pessoa{
	char nome[MAX];
	int idade;
};
typedef struct Pessoa TPessoa; // criando novo tipo de dado apartir da struct

int main(){
	
	TPessoa p1;
	
	//preenchendo p1
	printf("informe o nome: ");
	fgets(p1.nome, MAX-1, stdin);//coletando o nome(codigo usado para strings)
	
	printf("informe a idade: ");
	scanf("%d", &p1.idade);
	
	printf("nome: %s", p1.nome);
	printf("idade: %d", p1.idade);
	
	}
