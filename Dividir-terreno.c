/* Um fazendeiro tem um terreno retangular com dimens�es a x b. Ele quer dividir o
terreno em quadrados com o maior tamanho poss�vel, sem sobrar espa�o. Escreva
uma fun��o recursiva para determinar o tamanho dos quadrados. */

#include <stdio.h>
#include <math.h>

int terreno(int comprimento, int largura, int quadrados) {
	int tam_quadrado;
	
	tam_quadrado = sqrt((comprimento * largura) / quadrados);
	
	return tam_quadrado;
}

int main() {
	int a, b, n;
	
	printf("\n Informe o comprimento e a largura do terreno: ");
	scanf("%d", &a);
	scanf("%d", &b);
	
	printf("\n Informe a quantidade de quadrados: ");
	scanf("%d", &n);
	
	printf("\n O resultado foi de %d quadrados com o tamanho de %d x %d", n, terreno(a, b, n), terreno(a, b, n));
}
