#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float TempC, TempF;
	
	printf("por favor, informe o temperatura em graus celsius:");
	scanf("%f", &TempC);
	
	TempF = (TempC * 9/5) + 32;
	
	printf("aqui esta a temperatura em Fahrenheit:%.2f\n", TempF);
	return 0;
}
