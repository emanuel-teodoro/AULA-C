#include <stdio.h>
#define TAM 100

void preencherVetor(int vetor[TAM], int n){
	int i;
	printf("informe os valores:\n");
	
	for(i=0; i<n; i++){
		scanf("%d", &vetor[i]);
	}
}

void imprimeVetor(int vetor[TAM], int n){
	int i;
	printf("vetor:\n");
	
	for(i=0; i<n; i++){
		printf("%d ", vetor[i]);
	}
	
	printf("\n");
}

void menu(){
	printf("1 - preenche vetor\n");
	printf("2 - imprime vetor\n");
	printf("3 - pesquisa\n");
	printf("4 - conta ocorrencia\n");
	printf("5 - sair\n");
}

int pesquisaVetor(int vetor[TAM], int n, int x){
	int i;
	int encontrou = 0;
	
	for(i=0; i<n; i++){
		if(vetor[i] == x){
			encontrou = 1;
			break;
		}
	}
	
	return encontrou;
}

int contador(int vetor[TAM], int n, int x){
	int i;
	int contador = 0;
	
	for(i=0; i<n; i++){
		if(vetor[i] == x){
			contador++;
		}
	}
	
	return contador;
}

int main(){
	int vetor[TAM];
	int n, op, x, resultado;
	
	n = 0;
	
	do{
		menu();
		scanf("%d", &op);
		
		switch (op){
			case 1:
				printf("informe total de valores no vetor: ");
				scanf("%d", &n);
				
				if(n <= TAM){
					preencherVetor(vetor, n);
				}else{
					printf("total de valores invalido\n");
				}
				break;
				
			case 2:
				imprimeVetor(vetor, n);
				break;
			
			case 3:
				printf("informe um valor para pesquisa: ");
				scanf("%d", &x);
				
				if (pesquisaVetor(vetor, n, x) == 1){
					printf("numero encontrado\n");
				}else{
					printf("valor nao encontrado\n");
				}
				break;
			
			case 4:
				printf("informe um numero");
				scanf("%d", &x);
				
				resultado = contador(vetor, n, x);
				printf("total de vezes que o numero aparece: %d\n", resultado);
				break;
				
			case 5:
				break;
			
			default:
				printf("opcao invalida\n");
				break;
		}
		
	}while(op !=5);
}
