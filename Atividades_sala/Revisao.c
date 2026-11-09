#include <stdio.h>
#include <stdlib.h>
# include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//funcao, bloco de código reutilizavel, com uma operação de uso comum
//Tipo nome_funcao (lista de_parametros na forma TIPO nome_parametro

int maior(int a, int b){
	return (a+b+(abs((a-b)))/2);
}
int main(int argc, char *argv[]) {
	int vet[10];
	int i, maior_valor;
	
	for(i =0; i<10; i++) scanf("%d", &vet[i]);
	
	for(i=0, maior_valor = vet[i]; i<10; i++ ){
		maior_valor = maior(maior_valor, vet[i]);
	}
	printf("\n %d e o maior numero", maior_valor);
	return 0;
}
