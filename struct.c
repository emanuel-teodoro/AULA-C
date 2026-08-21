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
	
	TPessoa p1, p2;
	
	//preenchendo p1
	strcpy(p1.nome, "josnei");
	p1.idade = 3;
	
	//preenchendo p2
	strcpy(p2.nome, "jabiraca");
	p2.idade = 3000;
	
	printf("pessoa 1: \n");
	printf("nome: %s\n", p1.nome);
	printf("idade: %d\n", p1.idade);
	
	printf("pessoa 2: \n");
	printf("nome: %s", p2.nome);
	printf(" %d", p2.idade);
}
