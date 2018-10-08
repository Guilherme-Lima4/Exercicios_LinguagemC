#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float Dep,Sl,Vb,Vh,Htm;
	
	printf("\n Digite o numero de dependentes : ");
	scanf("%f", &Dep);
	
	system("CLS");
	
	printf("\n Digite o valor recebido por hora : ");
	scanf("%f", &Vh);
	
	system("CLS");
	
	printf("\n Digite as horas trabalhadas por mes : ");
	scanf("%f", &Htm);
	
	system("CLS");
	
	Vb = Vh * Htm;
	
	printf("\n Seu valor bruto e : %f \n ", Vb);
	
	Sl = Dep * 300 + Vb;
	
	printf("\n Seu valor de seu salario liquido e : %f \n ", Sl);
	
	system("PAUSE");
	return 0;
}
