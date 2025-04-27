#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char sexo, M,F;
	
	printf("por favor, informe o seu sexo usando M para Masculino e F para Feminino:");
	scanf(" %c", &sexo);
	
	if (sexo == M){
		printf("okay, obrigada pela informacao.", sexo);
	}else{
		printf("sexo invalido.", sexo);
	}
	
	return 0;
}
