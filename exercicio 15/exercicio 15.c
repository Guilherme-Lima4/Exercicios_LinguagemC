#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float RA,H,AR;
	
	printf("\n Digite o raio do cilindro : ");
	scanf("%f", &RA);
	
	system("CLS");
	
	printf("\n Digite a altura do cilindro : ");
	scanf("%f", &H);
	
	AR = 2 * 3.14 * RA * (RA + H);
	
	printf("\n A area externa do cilindro e : %f \n ", AR);
	
	system("PAUSE");
	return 0;
}
