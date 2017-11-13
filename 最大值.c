#include <stdio.h>

int MAX (int a, int b);

int main (void)
{
	int a, b;
	printf("Input a, b:");
	scanf("%d,%d",&a,&b);
	printf("MAX == %d \n",MAX(a,b));
	return 0;
}

int MAX (int a, int b)
{
	return a > b ? a : b;
}