#include <stdio.h>

int main(){
	int x, y, z;//declarando variaveis
	int *px, *py, *pz;//declarando ponteiro
	
	//dando valores a variaveis
	x = 15;
	y = 43;
	z = 2;
	
	//inicializando ponteiro
	px = &x;
	py = &y;
	pz = &z;
	
	//calculando e imprimindo resultado
	int exp = (*px + * py) / *pz;
	
	printf("resultado: %d", exp);
}
