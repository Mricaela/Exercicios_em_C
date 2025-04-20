#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float ValorH, numbH, total;
	
	printf("por favor digite o valor do seu salario por hora:");
	scanf("%f", &ValorH);
	
	printf("por favor me informe quantas horas trabalhadas:");
	scanf("%f", &numbH);
	
	total = ValorH * numbH;
	
	printf("aqui esta o valor total do seu salario no final do mes:%.2f\n", total);

	
	
	return 0;
}
