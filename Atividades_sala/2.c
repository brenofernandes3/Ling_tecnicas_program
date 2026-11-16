#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double numero;
	int expoente;
	
	printf("Digite um numero: \n");
	scanf("%lf", &numero);
	
	while (numero >=10) {
		numero = numero /10;
		expoente++;
	}
	
	printf("O seu numero em notacao cientifica e: %.2lf x 10^%d \n", numero, expoente);
	
	return 0;
}
