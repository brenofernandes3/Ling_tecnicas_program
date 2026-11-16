#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int numero, i =0, resto;
	int binario[64];
	
	printf("Digite um numero positivo: \n");
	scanf("%d", &numero);
	
	while (numero > 0){
		resto = numero % 2;
		binario[i] = resto;
		numero = numero / 2;
		i++;
		
	}
	
	for(i = i - 1; i>=0; i--){
		printf("%d", binario[i]);
	}
	
	
	return 0;
}
