#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char sexo[10];
	float altura, pesoideal;
	
	do {
		printf("digite se voce e homem ou mulher (H/M)?");
	    scanf(" %s", &sexo);
	    
	    while (getchar() != '\n');
	    
	    if ((strlen(sexo) !=1) ||
		(sexo[0] != 'h' && sexo[0] != 'H' && sexo[0] != 'm' && sexo[0] != 'M')) {
	    	printf("opcao invalida! por favor escreva (m/M) para mulher ou (h/H) para homem:\n");
		}
	} while ((strlen(sexo) !=1) ||
	 (sexo[0] != 'h' && sexo[0] != 'H' && sexo[0] != 'm' && sexo[0] != 'M'));
	
	printf("por favor, digite a sua altura em metros:");
	scanf("%f", &altura);
	
	if (sexo[0] == 'h' || sexo[0] == 'H'){
		pesoideal =  (72.7 * altura) - 58;
		printf("seu peso ideal e:%.2f kg\n", pesoideal);
	} else {
		pesoideal = (62.1 * altura) - 44.7;
		printf("seu peso ideal e:%.2f\n", pesoideal);
	} 
	
   return 0;
}
