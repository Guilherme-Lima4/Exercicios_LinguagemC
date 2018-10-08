#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float Ba,H,Ar,Result;
	
	printf("\n Digite a base do triangulo : ");
	scanf("%f", &Ba);
	
	system("CLS");
	
	printf("\n Digite a altura do triangulo : ");
	scanf("%f", &H);
	
	system("CLS");
	
	Ar = Ba * H;
	Result = Ar / 2;
	
	printf("\n A area do Triangulo e : %f \n ", Result);
	
	system("PAUSE");
	return 0;
}
