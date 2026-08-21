#include <stdio.h>
#include <string.h>
#define MAX 255

int main(){
	
	char nome[MAX];
	int idade;
	
	printf("informe sua idade: ");
	scanf("%d", &idade);
	getchar();//depois de um scanf não depois de um fgets
	
	printf("digite seu nome: ");	
	fgets(nome, MAX-1, stdin);	
	
	printf("nome: %s", nome);
	printf("idade: %d\n", idade);
	
	return 0;
}
