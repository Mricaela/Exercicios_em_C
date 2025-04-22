#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int numb1,numb2, result1;
	float Rnumb,result2, result3;
	
	printf("Por favor, digite um numero inteiro:");
	scanf("%d", &numb1);
	
	printf("Por favor, digite outro numero inteiro:");
	scanf("%d", &numb2);
	
	printf("Por favor, agora digite um numero real:");
	scanf("%f", &Rnumb);
	
	result1 = (2 * numb1) * (numb2 / 2);
	
	result2 = (3 * numb1) + Rnumb;
	
	result3 = pow(Rnumb, 3);
	
	printf("aqui esta o resultado:%d\n", result1);
	printf("aqui esta o resulto da soma do triplo do primeiro com o terceiro:%.2f\n", result2);
	printf("aqui esta o resultado do numero real elevado ao cubo:%.2f\n", result3);
		
	return 0;
}
