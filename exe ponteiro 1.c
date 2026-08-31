#include <stdio.h>

int main(){
	int a = 4;
	int b = 2;
	int c;
	
	printf("valor de A e B %d %d\n", a, b);
	
	c = b;
	b = a;
	a = c;
	
	int *pa, *pb, *pc;
	pa = &c;
	pb = &a;
	pc = &b;
	
	printf("Valores trocados %d %d\n", *pa, *pc);
}
