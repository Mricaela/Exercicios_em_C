#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float n1,n2, M;
	
	printf("por favor, digite a nota 1:");
	scanf("%f", &n1);
	
	printf("por favor, digite a nota 2:");
	scanf(" %f", &n2);
	
	M = (n1 + n2 ) / 2;
	
	if(M == 10){
		printf("aprovado.\n", M);
	} else if(M >= 7) {
		printf("aprovado.\n", M);
	} else{
		printf("reprovado.\n", M);
	}
	
	return 0;
}
