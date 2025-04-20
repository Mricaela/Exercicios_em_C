#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float ValorCirc, Pi, valorArea;
	
	printf("Por favor, digite o valor do Raio:");
	scanf("%f", &ValorCirc);
	
	Pi = 3.14;
	
	valorArea = Pi * ValorCirc* ValorCirc;
	
	printf("aqui está o valor da area:%.2f\n", valorArea);
	
	return 0;
}
