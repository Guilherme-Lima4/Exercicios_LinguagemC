#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int A,B,C;
	
	printf("\n Digite um valor para A : ");
	scanf("%d", &A);
	
	system("CLS");
	
	printf("\n Digite um valor para B : ");
	scanf("%d", &B);
	
	system("CLS");
	
	C = A;
	A = B;
	B = C;
	
	printf("\n O valor de A e : %d \n ", A);
	
	printf("\n O valor de B e : %d \n ", B);
	
	system("PAUSE");
	return 0;
}
