#include <stdio.h>
#define TAM 100

void preenche_vetor(int vetor[TAM], int n){
	int i;
	
	printf("informe os valores:\n");
	for(i=0; i<n; i++){
		scanf("%f", &vetor[i]);
	}
}

void par_impar(int vetor[TAM], int n){
	int i, par, impar;
	par = 0;
	impar = 0;
	
	for(i=0; i<n; i++){
		if(vetor[i] % 2 == 0){
			par ++;
		}else
		impar ++;		
	}
	
	printf("n", par);
	printf("n", impar);
}

/*void imprime_impar(float vetor[TAM], int n){
	int i;
	
	printf("vetor invertido: ");
	for(i= n; i >= n; i--){
		printf("%.2f ", vetor[i]);
	}
}*/

int main(){
	int vetor[TAM];
	int i, n;
	
	printf("informe total de valores: ");
	scanf("%d", &n);
	
	preenche_vetor(vetor, n);
	par_impar(vetor, n);
	//vetor_inverso(vetor, n);*/
	
	return 0;
}
