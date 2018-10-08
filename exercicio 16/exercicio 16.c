#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int Num1,An,Su;
	
	printf("\n Digite um numero inteiro : ");
	scanf("%d", &Num1);
	
	An = Num1 - 1;
	
	Su = Num1 + 1;
	
	printf("\n O antecessor desse numero e : %d \n ", An);
	printf("\n O sucessor desse numero e : %d \n ", Su);
	
	system("PAUSE");
	return 0;
}
