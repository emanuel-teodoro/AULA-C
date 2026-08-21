#include <stdio.h>
#define TAM 100

int main(){
	int vetor[TAM];
	int i, n;
	
	printf("informe total de elementos do vetor: ");
	scanf("%d", &n);
	
	//preenchendo vetor
	printf("informe os valores:\n");
	for(i=0; i<n; i++){
		scanf("%d", &vetor[i]);
	}
	
	//imprimindo  vetor
	printf("vetor:\n");
	for(i=0; i<n; i++){
		printf("%d ", vetor[i]);
	}
	
	return 0;
	
}
