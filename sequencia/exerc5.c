#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float metro,cent;
	
	printf("digite quantos metros voce quer converter:");
	scanf("%f", &metro);
	
	cent = metro * 100;
	
	printf("aqui esta, o valor em centimetros:%.2f\n", cent);
	
	return 0;
}
