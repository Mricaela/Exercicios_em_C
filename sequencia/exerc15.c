#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float salarioH,horasT, salarioB,imposR,Inss,Sindicato, salarioliq;
	
	printf("Por favor, informe quanto voce ganha por hora:");
	scanf("%f", &salarioH);
	
	printf("por favor, digite o total de horas trabalhadas no mes:");
	scanf("%f", &horasT);
	
	salarioB = salarioH * horasT;
	imposR = salarioB * 0.11;
	Inss = salarioB * 0.08;
	Sindicato =  salarioB * 0.05;
	salarioliq = salarioB - Inss - imposR - Sindicato;
	
	printf("aqui esta o seu salario liquido:%.2f \n", salarioliq);
	
	return 0;
}
