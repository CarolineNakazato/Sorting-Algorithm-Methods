#define _CTR_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

void main() {
	//metodo buble sort
	int vet[10] = { 1,2,4,3,5,2,4,2,4,7 };
	int i, j, aux;

	for (j = 0; j < 9; j++) {
		for (i = 0; i < 9 - j; i++) {
			if (vet[i] > vet[i + 1]) { // se o atual for maior que o proximo inverte
				aux = vet[i + 1];
				vet[i + 1] = vet[i];
				vet[i] = aux;
			}
		}
	}

	for (i = 0; i < 10; i++) {
		printf("%i ", vet[i]);
	}
	system("pause");
}
