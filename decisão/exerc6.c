#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float n1,n2,n3;
	
	printf("por favor, digite um numero :");
	scanf(" %f", &n1);
	
	printf("por favor, digite outro numero:");
	scanf("%f", &n2);
	
	printf("por favor, digite mais um numero:");
	scanf("%f", &n3);
	
	if(n1 > n2 && n1 > n3){
		printf(" esse numero e o maior:%.2f\n", n1);
	} else if(n2 > n1 && n2 > n3 ){
		printf("esse numero e o maior:%.2f\n", n2);
	}else {
		printf("esse numero e o maior:%.2f\n", n3);
	}
	
	return 0;
}
