#include <stdio.h>
int main ()
{
	int m[3][3] ={{1,2,3},{4,5,6},{7,8,9}};
	int *a, cont;
	int i ,j;
	a=m;

	for(i=0;i<9;i++){
		if (cont ==3){	
			printf("\n");
			cont=0;
		}
		printf("%d\t", *(a+i));
		cont ++;
	}
	printf("\n");
	return 0;
}
