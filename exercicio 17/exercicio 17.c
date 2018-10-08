#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float PERI,A,V,DIAG,lado,lado2,lado3,RESULT;
	
	printf("\n digite o valor do primeiro lado do paralelepipedo : ");
	scanf("%f", &lado);
	
	system("CLS");
	
	printf("\n digite o valor do segundo lado do paralelepipedo : ");
	scanf("%f", &lado2);
	
	system("CLS");
	
	printf("\n digite o valor do terceiro lado do paralelepipedo : ");
	scanf("%f", &lado3);
	
	PERI = 4 * (lado+ lado2 + lado3);
	
	A = 2 * (lado * lado2 + lado * lado3 + lado2 * lado3);
	
	V = lado * lado2 * lado3;
	
	DIAG = pow(lado,2) + pow(lado2,2) + pow(lado3,2);
	RESULT = pow(DIAG,0.5);
	
	printf("\n o valor do perimetro do paralelepipedo e : %f \n ", PERI);
	printf("\n o valor da area do paralelepipedo e : %f \n ", A);
	printf("\n o valor do volume do paralelepipedo e : %f \n", V);
	printf("\n o valor da diagonal do paralelepipedo e : %f \n", RESULT);
		
	system("PAUSE");
	return 0;
}
