#include <stdio.h>

int main(){
	int x;//declarando variavel
	int *px;//declarando ponteiro
	
	x = 3;//atribuindo valor a variavel
	
	px = &x;//atribuindo valor a ponteiro
	
	printf("Endereco de PX: %d\n", px);//inprimindo endereço de memoria do ponteiro
	
	printf("Endereco de x: %d\n", &x);//imprimindo endereço de memoria da variavel
	
	printf("valor de x: %d\n", x);//imprimindo valor da variavel
	
	printf("valor de px: %d\n", *px);//imprimindo valor da variavel usando ponteiro
	
	*px = 5;//alterando valor da variavel utilizando ponteiro
	
	//imprimindo valor atualizado
	printf("valor de px atualizado: %d\n", *px);
	printf("valor de x atualizado: %d\n", x);
}
