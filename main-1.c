#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main(int argc, char *argv[]) 
{
	int a[SIZE]={2,8,6,3,25,22,30,36,40,12};
	int i;
	printf("original order:\n");
	for(i=0;i<SIZE;i++)
	{
		printf("%4d",a[i]);
	}
		printf("\n");
	
	bubblesort(a,SIZE);
	printf("final order:\n");
	for(i=0;i<SIZE;i++)
	{
		printf("%4d",a[i]);
	}
	return 0;
}
