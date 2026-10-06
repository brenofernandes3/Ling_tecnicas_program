#include <stdio.h>
#include <stdlib.h>

//Faça um programa que leia 10 valores e mostre o maior entre os 5 primeiros e os 5 restantes

int ComparaMaior(int a, int b) {

	if(a > b) return a;
	else return b;
}

int ComparaMenor (int a, int b) {
	if(a < b) return a;
	else return b;
}	
	
int main(int argc, char *argv[]) {
	int valores[10];
	int maior, menor, i;
	
	printf("Vamos ler os valores: \n");
	
	for(i=0; i<10; i++) {
		scanf("%d", &valores[i]);
	}	
	
	
	//maior
	maior = valores[0]; // Declara que o primeiro numero a ser comparado é o 0
	
	for (i=0; i<4; i+=2) {
		int maior_temp = ComparaMaior(valores[i], valores[i + 1]); // o maior temporario compara 2 mumeros e puxa o maior e compara com o proximo
		maior = ComparaMaior(maior_temp, maior);
	}
	
	maior = ComparaMaior(maior, valores[4]);
	
	
	//menor
	menor = valores[5]; // Declara que o primeiro numero a ser comparado é o 4
	
	for (i=6; i<9; i+=2) { // O programa começa a ler a partir do 1, i+=2 (siginifca: aumente o valor de i em 2)
		int menor_temp = ComparaMenor(valores[i], valores[i + 1]); // o maior temporario compara 2 mumeros e puxa o maior e compara com o proximo
		menor = ComparaMenor(menor_temp, menor);
	}
	
	printf("\n");
	printf("%d\n", maior);
	printf("%d\n", menor);
	
	return 0;
}
