#include <stdio.h>

float leitura_consumo(float anterior, float atual){
	
	return atual - anterior;
}

float conta(float consumo, float tarifa){
	
	return consumo * tarifa;
}

int main(){
	
	float leitura_anterior, leitura_atual, tarifa, consumo, total;
	
	printf("informe leitura atual e anterior: ");
	scanf("%f %f", &leitura_anterior, &leitura_atual);
	
	printf("informe o valor da tarifa: ");
	scanf("%f", &tarifa);
	
	consumo = leitura_consumo(leitura_anterior, leitura_atual);
	
	total = conta(consumo, tarifa);
	
	printf("total a pagar: %2.f\n", total);
	printf("Consumo: %2.f\n", consumo);
	
	return 0;
}
