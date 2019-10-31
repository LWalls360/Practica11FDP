#include <stdio.h>

int main ()
{
	int arr[]={4,5,3};
	int *ap, *a2;
	ap=arr;

	int x = *ap;
	printf("%d\n",x);

	x=*(ap+1);
	printf("%d\n",x);
	x=*(ap+2);
	printf("%d\n",x);

	a2 = arr+1;
	x= *(a2-1);
	printf("%d\n", x);
	return 0;
}
