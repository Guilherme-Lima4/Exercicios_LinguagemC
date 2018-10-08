#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float H,Seg,Min;
	
	printf("\n Digite um valor em segundos : ");
	scanf("%f", &Seg);
	
	system("CLS");
	
	Min = Seg / 60;
	
	printf("\n O valor mencionado em segundos, equivale em minutos a : %f \n", Min);
	
	H = Seg / 3600;
	
	printf("\n O valor mencionado em segundos, equivale em horas a : %f \n", H);
	

	system("PAUSE");
	return 0;
}
