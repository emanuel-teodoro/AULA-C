#include <stdio.h>
#define TAM 100

void preencher_vetor(int vetor[TAM], int n){
	
	int i;
	
	//preenchendo o vetor / vetor passagem por referencia
	printf("informe os valores:\n");
	for(i=0; i<n; i++){
		scanf("%d", &vetor[i]);
	}
	
}

void imprime_vetor(int vetor[TAM], int n){
	
	int i;
	
	//imprimindo vetor
	printf("vetor\n");
	for(i=0;i<n;i++){
		printf("%d ", vetor[i]);
	}
}

int main(){
	int vetor[TAM];
	int i, n;
	
	printf("informe total de elementos do vetor: ");
	scanf("%d", &n);
	
	preencher_vetor(vetor, n);
	
	imprime_vetor(vetor, n);
	
	return 0;
	
}
