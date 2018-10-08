#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float Cem,Dec,Met,Mili;
	
	printf("\n Digite o numero(cm)");
	scanf("%f", &Cem);
	
	system("CLS");
	
	Dec = Cem / 10;
	
	printf("\n O numero mencionado, em decimetros e : %f \n", Dec);
	
	Met = Cem / 100;
	
	printf("\n O numero mencionado, em metros e : %f \n", Met);
	
	Mili = Cem * 10;
	
	printf("\n O numero mencionado, em milimetros e : %f \n", Mili);
	
	system("PAUSE");
	return 0;
}
