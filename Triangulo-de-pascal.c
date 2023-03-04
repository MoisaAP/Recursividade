/* O triângulo de Pascal: escreva um programa em C que gere o triângulo de Pascal de
ordem "n", utilizando recursividade - o triângulo de Pascal é uma figura geométrica
triangular formada por números binomiais, onde cada número é a soma dos dois
números acima dele, começando com o número 1 na parte superior. Para gerar o
triângulo de Pascal de ordem "n", podemos utilizar recursividade, calculando cada
elemento como a soma dos elementos acima dele. */

#include <stdio.h>

int espaco(int n, int i, int j) {
	int espaco;
	
    for(espaco = 1; espaco <= n - i; espaco++)
         printf("  ");
}

int coeficiente(int j, int i) {
	int coef = 1;
	
	for(j = 0; j <= i; j++) {
		
         if (j == 0 || i == 0) {
            coef = 1;
		 }
         else {
            coef = coef * ( i - j + 1) / j;
		 }
         printf("%4d", coef);
    }
}

int main() {
	int n, i, j;
	
	printf("\n Informe um valor inteiro positivo: ");
	scanf("%d", &n);
	
	for(i = 0; i < n; i++) {
		espaco(n, i, j);
		
		coeficiente(j, i);
		
		printf("\n");
	}
}
