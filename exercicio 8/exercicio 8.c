#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float Xval,Nval,Resultadofinal,Resultadofinal2;
	
	printf("\n Digite um numero : ");
	scanf("%f", &Xval);
	
	system("CLS");
	
	printf("\n Digite um outro numero : ");
	scanf("%f", &Nval);
	
	system("CLS");
	
	Resultadofinal = Xval * Nval;
	Resultadofinal2 = Resultadofinal * Resultadofinal;
	
	printf("\n O numero final e : %f \n", Resultadofinal2);
	
	system("PAUSE");
	return 0;
}
