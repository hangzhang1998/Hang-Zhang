#include <stdio.h>

int Lcm (int a, int b);

int main (void)
{
	int a, b, x;
	printf("Input a,b:");
	scanf("%d,%d",&a,&b);
	if ( Lcm (a,b) != -1)
		printf("Least Common Multiple of %d and %d is %d.\n",a,b,Lcm(a,b));
	else 
		printf("Input error!\n");
	return 0;
}

int Lcm (int a, int b)
{
	static int i;
	if (a <= 0 || b <= 0)  return -1;
	for (i = 1; i < b; i++)
	{
		if (i*a % b == 0)  return i*a;
	}
	return a*b;
}