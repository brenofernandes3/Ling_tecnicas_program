#include <stdio.h>
#include <stdlib.h>

int compara(int a, int b) {
	if(a < b) return b;
	else return a;
	
}
int main(int argc, char *argv[]) {
	int valores[10] //Com apenas 1 declaração o computador entende que serão 10 numeros que serão armazenados 
	int maior, menor;
	
	printf("Vamos ler os valores: \n")
	scanf("%d", &valores[0]); //Para acessar uma casa especifica basta colocar a varivel e o local onde será armazenado, exemplo: valores[5]
	printf("%d", &valores[0]); // o & serve para vermos a posição na memoria, lembrando que int possui 4bits
	
	//For
	printf("Vamos ler os valores: \n")
	for( i=0; i<10; i++) { //i=0 é o indice onde a estrututa vai começar a contar, i<10 significa que ele vai acessar até a memoria 9, lembrando que o 0 conta como numero, totalizando 10 numeros, i++ serve para o programa "andar" para frente, para o programa andar para trás seria i--
		scanf("%d", &valores[1]);
	}
	return 0;
	
}
