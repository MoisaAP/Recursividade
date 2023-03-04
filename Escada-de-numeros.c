/* A escada de n�meros: escreva um programa em C que receba um n�mero inteiro "n"
e imprima uma escada de n�meros de 1 at� "n", onde cada degrau tem um n�mero a
mais que o anterior. Utilize recursividade para construir a escada. */

#include <stdio.h>

void imprime_linha(int linha, int n) {
	
    if (linha <= n) {
        int i;
        
        for (i = 1; i <= linha; i++) {
            printf("%d ", i);
        }
        
        printf("\n");
        
        imprime_linha(linha + 1, n);
    }
}

void escada(int n) {
	
    if (n <= 0) {
        printf("\nErro!\nInforme um valor positivo...");
    }
	else {
        imprime_linha(1, n);
    }
}

int main() {
	int n;
	
    printf("\nInforme um valor inteiro positivo: ");
    scanf("%d", &n);
    
    escada(n);
    
    return 0;
}
