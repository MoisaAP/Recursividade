/* A sequ�ncia de Collatz: Escreva um programa em C que receba um n�mero inteiro
positivo "n" e retorne o n�mero de termos da sequ�ncia de Collatz que come�am em
"n", utilizando recursividade. A sequ�ncia de Collatz � definida como: se o n�mero �
par, divida-o por 2, se o n�mero � �mpar, multiplique-o por 3 e adicione 1, repita at�
chegar a 1. */

#include <stdio.h>

int collatz(int n) {
    int val = 1;

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
	int n, i;
	
	printf("\n Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    printf("\n O numero de termos da sequencia de Collatz para %d eh %d", n, collatz(n));
}
