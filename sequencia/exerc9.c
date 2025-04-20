#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float TemF, transform, TemC;
	
	printf("por favor, informe o valor da temperatura em Fahrenheit:");
	scanf("%f",&TemF);
	
	TemC = 5 * ((TemF-32) / 9);
	
	printf("aqui esta temperatura em graus Celsius:%.2f\n", TemC);
	
	
	return 0;
}
