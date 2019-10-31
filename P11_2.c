#include<stdio.h>
#define TAM 5
int main()
{
	int lista[TAM]={10, 8, 5, 8, 7};

	int i=0;

	printf("\tLista\n");
	for(i=0;i<5;i++)
	{
		printf("\nCalificación del alumno %d es %d",i, lista[i]);
	}
	printf("\n");
	return 0;
}
