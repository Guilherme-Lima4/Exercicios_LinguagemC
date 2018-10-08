#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float RA,V;
	
	printf("\n Digite o valor do raio : ");
	scanf("%f", &RA);
	
	V = 4 * 3.14 * pow(RA,2) / 3;
	
	printf("\n O volume da esfera e : %f \n ", V);
	
	system("PAUSE");
	return 0;
}
