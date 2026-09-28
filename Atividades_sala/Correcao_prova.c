#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int qtnd_itens, qtnd_mochilas;
	char equacao, equacao2;
	
	printf("Insira o numero de itens: \n");
	scanf("%d", &qtnd_itens);
	printf("Insira a quantidade de mochilas: \n"); 
	scanf("%d", &qtnd_mochilas);
	
	equacao = qtnd_itens / qtnd_mochilas;
	equacao2 = qtnd_itens % equacao;
	
	printf("A quantidade de de mochilas necessarias serao %d mochilas, e sobrara %d itens", equacao, equacao2);
		
	return 0;
}
