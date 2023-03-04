/* O número harmônico: escreva um programa em C que calcule o n-ésimo número
harmônico, definido como a soma dos inversos dos números naturais até "n",
utilizando recursividade. */

#include <stdio.h>

float harmonico(int n) {
	
	if (n == 1) {
        return 1;
    } 
	else {
        return 1.0 / n + harmonico(n - 1);
    }
}

int main() {
	int n;
	
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);
    
    printf("O %d esimo numero harmonico eh %.1f\n", n, harmonico(n));
}
