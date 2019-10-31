#include <stdio.h>
#include <string.h>

int main ()
{
	char word[30];
	int i=0;

	printf("Ingresa una palabra\n");
	scanf("%s", word);
	printf("La palabra es: %s\n", word);
	for(i=0; i<strlen(word); i++)
		printf("%c\n", word[i]);
	return 0;
}
