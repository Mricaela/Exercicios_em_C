#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float areaQuadrado, dobroArea;
	
	printf("Por favor, informe o valor da area do quadrado:");
	scanf("%f", &areaQuadrado);
	
	dobroArea = areaQuadrado * areaQuadrado;
	
	printf("aqui esta o valor:%.2f\n", dobroArea);
	return 0;
}
