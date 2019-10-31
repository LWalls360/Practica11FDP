#include <stdio.h>

int main(){
	char *ap, c= 'a';
	ap = &c;
	printf("Caracter: %c\n",*ap);
	printf("Código ASCII: %d\n",*ap);
	printf("Dirección de memoria: %p\n",ap);
	return 0;
}
