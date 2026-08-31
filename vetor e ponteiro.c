#include <stdio.h>
#define TAM 3

int main(){
	int vetor[TAM] = {15, 32, 74};
	
	int *pv;
	
	pv = vetor;
	
	printf("Vetor: %d\n", vetor);
	
	printf("ponteiro: %d\n", pv);
	
	int i;
	for(i=0; i<TAM; i++){
		printf("%d ", vetor[i]);//imprimindo vetor
	}
	
	printf("\n");
	
	for(i=0;i<TAM;i++){
		printf("%d ", pv[i]);//imprime vetor com ponteiro
	}
	
}
