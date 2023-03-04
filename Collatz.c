/* A sequência de Collatz: Escreva um programa em C que receba um número inteiro
positivo "n" e retorne o número de termos da sequência de Collatz que começam em
"n", utilizando recursividade. A sequência de Collatz é definida como: se o número é
par, divida-o por 2, se o número é ímpar, multiplique-o por 3 e adicione 1, repita até
chegar a 1. */

#include <stdio.h>

int collatz(int n) {
    
    if (n == 1) {
        return 1;
    } 
    else if (n % 2 == 0) {
        return 1 + collatz(n / 2);
    } 
    else {
        return 1 + collatz(3 * n + 1);
    }
}

int main() {
	int n;
	
	printf("\n Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    printf("\n O numero de termos da sequencia de Collatz para %d eh %d", n, collatz(n));
}
