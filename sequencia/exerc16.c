#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float tamanhoM,area, litrosN, latas, valorT;
	float coberturaT = 3.0;
	float precoL = 80.00;
	float litrosPL = 18.00;
	
	printf("por favor, me informe o tamanho em metros quadrados da area:");
	scanf("%f", &area);
	
	litrosN = area /coberturaT;
	
	latas = ceil(litrosN / litrosPL);
	
	valorT = latas * precoL;
	
	printf("quantidade de litros necessarios:%.2f\n", litrosN);
	printf("quantidades de latas de tintas necessarias:%.2f\n", latas);
	printf("preco total:%.2f\n", valorT);
	
	return 0;
}
