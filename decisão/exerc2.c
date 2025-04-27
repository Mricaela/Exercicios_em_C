#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float valor, N, P;
	
	printf("por favor, digite qualquer valor:");
    scanf("%f", &valor);
    
    if (valor > 0){
    	printf("aqui esta o valor positivo:%.2f\n", valor); 
	} else {
		printf("esse valor e negativo:%.2f\n", valor);
	}
	
	return 0;
}
