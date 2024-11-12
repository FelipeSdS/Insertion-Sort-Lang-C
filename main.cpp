#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/* INSERTION SORT O(N²) */
int main(int argc, char** argv) {
	
	printf("====================\n");
	printf("|| INSERTION SORT ||\n");
	printf("====================\n");
	
	int tamanhoVetor = 0;
	printf("\nDigite o tamanho do vetor: ");
	scanf("%d", &tamanhoVetor);
	
	int numeros[tamanhoVetor];
	for(int i = 0; i < tamanhoVetor; i++){
		printf("Digite um numero para posica: [%d]: ", i);
		scanf("%d", &numeros[i]);
	}
	
	int aux, j = 0;
	for(int i = 1; i < tamanhoVetor; i++){
		j = i;
		while(j > 0 && numeros[j] < numeros[j-1] ){
			aux = numeros[j];
			numeros[j] = numeros[j-1];
			numeros[j-1] = aux;
			j -= 1;
		}
	}
	
	printf("[");
	for(int i = 0; i < tamanhoVetor; i++){
		printf("%d,", numeros[i]);
	}
	printf("]");
	return 0;
}
