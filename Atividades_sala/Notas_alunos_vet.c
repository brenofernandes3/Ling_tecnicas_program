#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int vet_notas[10];
	int i, num;
	
	printf("Cadastre as notas do aluno: \n");
	for (i=0; i<10; i++) scanf("%d", &vet_notas[i]);
	system("cls");
	
	printf("Qual nota deseja ver(Nº do Aluno)?");
	scanf("%d", &num);
	
	if (num>0 && num<10) {
		printf("%d", vet_notas[num]);
	} else {
		printf("Nota não cadastrada!");
	}
	
	return 0;
}
