#include <stdio.h>

int main ()
{
	int arr[]={4,5,3};
	int *ap, *a2;
	ap=arr;

	int i;
	for(i=0; i<3; i++){
		printf("%d %d\n",i,*(ap+i));
	}
	printf("\n");
	return 0;
}
