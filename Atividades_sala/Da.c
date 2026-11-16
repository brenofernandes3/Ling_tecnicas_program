#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int numeros[100]; //vetor capaz de armazenar até 100 numeros
	int i, aux, j;
	
	
	for (i=0; i<100; i++) { // Nesse for ele incia por 0 e conta até o 100º numero
		printf("Digite o %d numero: \n", i + 1); // o %d não vai dar erro, ele apenas serve para o usuario saber qual numero ele deve digitar
		scanf("%d", &numeros[i]); //Vai ler a informação do printf e armazenar o resultado em i
	};
	
	printf("Numeros na ordem inversa: \n");
	
	for (i=99; i>=0; i--) { // ele basicamente vai fazer o contrario do outro codigo, sua inicialização vai ser pelo 99 e sua condição termina em 0, por isso o i--
		printf("%d", numeros[i]);
	};
	
	
	
	
    // Organizar do maior para o menor
    for (i=0; i<100; i++){ //Percorre todas as posições 
    	for(j = i +1; j<100; j++){ // Compara o número da posição atual com os números que estão nas posições seguintes. Por exemplo, se i = 0, o j começa em 1.
    	
    		if(numeros[i] < numeros[j]){ 
    			aux = numeros[i];
    			numeros[i] = numeros [j];
    			numeros[j] = aux;
			}
		}
	}
	
	printf("Numeros do maior para o menor: \n");
		 for(i=0; i<100; i++){
		 	printf("%d", numeros[i]);
		 }
	
		return 0;
}
