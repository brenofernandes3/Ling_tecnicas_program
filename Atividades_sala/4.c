#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int numero[100];
	int consecultivo;
	int i;
	
	for (i=0; i<100; i++) {
		printf("Digite o %d numero: ", i + 1);
		scanf("%d", &numero);
	}
	
	for (i=0; i<99; i++) {
		if (numero[i] + 1 == numero[i+1]) {
			
			printf("%d ", numero[i]);

            consecultivo = 1;
            
            while (i < 99 && numero[i] + 1 == numero[i + 1]) {
                i++;
		}
	}
	
	if (consecultivo == 0) {
        printf("Nenhum grupo encontrado.\n");
		}
	return 0;
}
}
