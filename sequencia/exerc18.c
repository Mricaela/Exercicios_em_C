#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float TamA,VelocidadeInt, TempDownload, TempMin;
	
	printf("por favor, digite o tamanho do arquivo em MB:");
	scanf("%f", &TamA);
	
	printf("por favor, digite a velocidade de um link de internet em Mbps:");
	scanf("%f", &VelocidadeInt);
	
	TempDownload = TamA * 8 / VelocidadeInt;
	TempMin = TempDownload / 60;
	
	printf("aqui esta o tempo aproximado que o Download vai demorar em minutos:%.2f\n", TempMin);
	
	return 0;
}
