#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float Ba,H,Ar;
	
	printf("\n Digite a base do retangulo : ");
	scanf("%f", &Ba);
	
	system("CLS");
	
	printf("\n Digite a altura do retangulo : ");
	scanf("%f", &H);
	
	system("CLS");
	
	Ar = Ba * H;
	
	printf("\n A area do rentangulo e : %f \n ", Ar);
	
	system("PAUSE");
	return 0;
}
