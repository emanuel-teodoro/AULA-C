#include <stdio.h>
#define TAM 100

void preenche_vetor(float vetor[TAM], int n){
	int i;
	
	printf("informe os valores:\n");
	for(i=0; i<n; i++){
		scanf("%f", &vetor[i]);
	}
}

void imprime_vetor(float vetor[TAM], int n){
	int i;
	
	printf("valores: ");
	for(i=0; i<n; i++){
		printf("%.2f ", vetor[i]);
	}
}

void vetor_inverso(float vetor[TAM], int n){
	int i;
	
	printf("vetor invertido: ");
	for(i= n; i >= n; i--){
		printf("%.2f ", vetor[i]);
	}
}

int main(){
	float vetor[TAM];
	int i, n;
	
	printf("informe total de valores: ");
	scanf("%d", &n);
	
	preenche_vetor(vetor, n);
	imprime_vetor(vetor, n);
	vetor_inverso(vetor, n);
	
	return 0;
}
