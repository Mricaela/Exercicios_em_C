#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int numb1, numb2, result;
	
	printf("por favor digite um numero:");
	scanf("%d", &numb1);
	
	printf("por favor digite outro numero:");
	scanf("%d", &numb2);
	
	result = numb1 + numb2;
	
	printf("o resultado e: %d", result);
	
	return 0;
}
