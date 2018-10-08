#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int Datnas,Result,Result2;
	
	printf("\n Digite o ano de seu nascimento : ");
	scanf("%d", &Datnas);
	
	system("CLS");
	
	Result = 2050 - Datnas;
	
	printf("\n A sua idade em 2050 e : %d \n ", Result);
	
	Result2 = 2018 - Datnas;
	
	printf("\n A sua idade atual e : %d \n ", Result2);
	
	system("PAUSE");
	return 0;
}
