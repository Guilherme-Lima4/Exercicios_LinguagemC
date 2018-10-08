#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char Nome[9];
	float Not1,Not2,Not3,Not4,Result,Result2;
	
	printf("\n Digite seu nome : ");
	scanf("%s", &Nome);
	
	system("CLS");
	
	printf("\n Digite sua primeira nota : ");
	scanf("%f", &Not1);
	
	system("CLS");
	
	printf("\n Digite sua segunda nota : ");
	scanf("%f", &Not2);
	
	system("CLS");
	
	printf("\n Digite sua terceira nota : ");
	scanf("%f", &Not3);
	
	system("CLS");
	
	printf("\n Digite sua quarta nota : ");
	scanf("%f", &Not4);
	
	Result = Not1 + Not2 + Not3 + Not4;
	Result2 = Result / 4;
	
	printf("\n A media do aluno %s e: %f \n", Nome, Result2 );
	
	system("PAUSE");
	return 0;
}
