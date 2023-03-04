/* Uma pessoa deseja subir uma escada de n degraus. Ela pode subir um, dois ou três
degraus por vez. Escreva uma função recursiva para determinar o número de
maneiras diferentes que ela pode subir a escada. */

#include <stdio.h>

int escada(int degraus) {
	if (degraus == 0) {
		return 1;
	}
	if (degraus < 1) {
		return 0;
	}
	else {
		return escada(degraus - 1) + escada(degraus - 2) + escada(degraus -3);
	}
}

int main() {
	int n;
	
	printf("\n Informe a quantidede de degraus da escada: ");
	scanf("%d", &n);
	
	printf("\n Existem %d formas de subir a escada.", escada(n));
}
