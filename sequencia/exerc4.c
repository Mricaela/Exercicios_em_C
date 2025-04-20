#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float nota1,nota2,nota3,nota4,media;
	
	printf("Por favor, digite a nota 1:");
	scanf("%f", &nota1);
	
	printf("Por favor, digite a nota 2:");
	scanf("%f", &nota2);
	
	printf("Por favor, digite a nota 3:");
	scanf("%f", &nota3);
	
	printf("Por favor, digite a nota 4:");
	scanf("%f", &nota4);
	
	media = (nota1 + nota2 + nota3 + nota4 ) /4;
	
	printf("a media do aluno e:%.2f\n", media);

	
	return 0;
}
