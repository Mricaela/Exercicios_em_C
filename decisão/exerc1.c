#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float numb1,numb2, maior;
	
	printf("por favor, digite um numero:");
	scanf("%f", &numb1);
	
	printf("por favor, digite outro numero:");
	scanf("%f", &numb2);
	
	if( numb1 > numb2){
		printf("aqui esta o maior numero:%.2f\n", numb1);
	} else {
		printf("esse e o maior numero:%.2f\n", numb2);
	}
	
	
	return 0;
}
