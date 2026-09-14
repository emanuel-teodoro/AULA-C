```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 255

struct Filme {
	int id;
	int status;
	int favorito;
	char nome[MAX];
	int tipo;
	int nota;
};

typedef struct Filme LFilme;


void cadastrar(LFilme vetor[], int pos) {
	
	printf("Nome: ");
	fgets((vetor)[pos].nome, MAX-1, stdin);
	
	printf("Tipo: ");
	scanf("%d", &(vetor)[pos].tipo);
	
	printf("Nota: ");
	scanf("%d", &(vetor)[pos].nota);
	
	printf("Favoritar? 1-Sim 0-Nao: ");
	scanf("%d", &(vetor)[pos].favorito);
	
	(vetor)[pos].id = pos;
	(vetor)[pos].status = 1;
	
	printf("Filme cadastrado com sucesso!\n\n");	
}


void listar(LFilme vetor[], int n) {
	
	int i;
	
	printf("\nFilmes cadastrados:\n");
	
	for (i=0; i<n; i++) {
	
		if (vetor[i].status == 1) {
			printf("Id: %d\n", vetor[i].id);
			printf("Nome: %s", vetor[i].nome);
			printf("Tipo: %d\n", vetor[i].tipo);
			printf("Nota: %d\n", vetor[i].nota);
			printf("Favorito: %d\n", vetor[i].favorito);
		}	
	}
	
	printf("\n");		
}


void listarFavoritos(LFilme favoritos[], int nf) {
	
	int i;
	
	printf("\nFilmes favoritos:\n");
	
	for (i=0; i<nf; i++) {
		
		if (favoritos[i].favorito == 1) {
			printf("Id: %d\n", favoritos[i].id);
			printf("Nome: %s", favoritos[i].nome);
			printf("Tipo: %d\n", favoritos[i].tipo);
			printf("Nota: %d\n", favoritos[i].nota);
		}
	}
	
	printf("\n");
}


void pesquisar(LFilme vetor[], int n) {
	
	int i, encontrou;
	char nome[MAX];
	
	printf("Entre com um nome do filme: ");
	fgets(nome, MAX-1, stdin);
	
	encontrou = 0;
	
	for (i=0; i<n; i++) {
		
		if (vetor[i].status == 1 && strcmp(vetor[i].nome, nome) == 0) {
			printf("Id: %d\n", vetor[i].id);
			printf("Nome: %s", vetor[i].nome);
			printf("Tipo: %d\n", vetor[i].tipo);
			printf("Nota: %d\n", vetor[i].nota);
			printf("Favorito: %d\n", vetor[i].favorito);
			encontrou = 1;
		}		
	}
	
	if (encontrou == 0) {
		printf("Filme nao encontrada\n");
	}
	
	printf("\n");
}


void remover(LFilme vetor[], int n) {
	
	int id;
	
	printf("Entre com o id: ");
	scanf("%d", &id);
	
	if (id < 0 || id >= n) {
		printf("Id invalido\n\n");
		return;
	}
	
	if (vetor[id].status == 0) {
		printf("Id invalido\n\n");
		return;
	}
	
	vetor[id].status = 0;
	
	printf("Filme removido!\n\n");
}


void atualizar(LFilme vetor[], int n) {
	
	int id;
	
	printf("Informe o id: ");
	scanf("%d", &id);
	getchar();
	
	if (id < 0 || id >= n) {
		printf("Id invalido\n");
		return;
	}
	
	if (vetor[id].status == 0) {
		printf("Id invalido\n");
		return;
	}
	
	printf("\nNome: %s", vetor[id].nome);
	printf("Tipo: %d\n", vetor[id].tipo);
	printf("Nota: %d\n", vetor[id].nota);
	printf("Favorito: %d\n", vetor[id].favorito);
	
	printf("Entre com as novas informações:\n");
	
	printf("Nome: ");
	fgets(vetor[id].nome, MAX-1, stdin);
	
	printf("tipo: ");
	scanf("%d", &vetor[id].tipo);
	
	printf("nota: ");
	scanf("%d", &vetor[id].nota);
	
	printf("Favoritar? 1-Sim 0-Nao: ");
	scanf("%d", &vetor[id].favorito);
	
	printf("Cadastro atualizado!\n\n");
}


void menu() {
	
	printf("1 - Cadastrar\n");
	printf("2 - Listar\n");
	printf("3 - Pesquisar\n");
	printf("4 - Remover\n");
	printf("5 - Atualizar\n");
	printf("6 - Listar favoritos\n");
	printf("7 - Sair\n");
	printf("Entre com a opcao: ");
} 


int main() {

    LFilme *vetor = NULL;
    LFilme *favoritos = NULL;
    
    int n, nf, op;

    n = 0;
    nf = 0;

    do {
        menu();
        scanf("%d", &op);
        getchar();

        switch (op) {

            case 1:
            	if(n == 0){
            		vetor = (LFilme *) malloc(sizeof(LFilme));
				}else{
					vetor = (LFilme *) realloc(vetor , (n+1) * sizeof(LFilme));
				}
				
				if(vetor == NULL){
					printf("Error");
					exit(1);
				}
				
				cadastrar(vetor, n);
				
				if(vetor[n].favorito == 1) {
					
					if(nf == 0) {
						favoritos = (LFilme *) malloc(sizeof(LFilme));
					}else{
						favoritos = (LFilme *) realloc(favoritos, (nf+1) * sizeof(LFilme));
					}
					
					if(favoritos == NULL) {
						printf("Error");
						exit(1);
					}
					
					favoritos[nf] = vetor[n];
					nf++;
				}
				
				n++;
                break;

            case 2:
                listar(vetor, n);
                break;

            case 3:
                pesquisar(vetor, n);
                break;

            case 4:
                remover(vetor, n);
                break;

            case 5:
                atualizar(vetor, n);
                break;

            case 6:
                listarFavoritos(favoritos, nf);
                break;

            case 7:
                break;

            default:
                printf("Opcao invalida\n");
                break;
        }

    } while (op != 7);

    free(vetor);
    free(favoritos);

    return 0;
}
