#include <stdio.h>

unsigned long Fact (unsigned int n);

int main (void)
{
	int n, i=1;
	int ret;
	do{
	printf("Input n(n>0):");
	ret = scanf ("%d",&n);
	}while (ret != 1 && n<=0);

	for ( ;i<=n;i++)
	{
		printf("%d! == %lu.\n",i,Fact(i));
	}
    return 0;
}

unsigned long Fact (unsigned int n)
{
	static unsigned int i;
	unsigned long result = 1;
	for (i = 2; i <= n; i++)
		result *= i;
	return result;
}
