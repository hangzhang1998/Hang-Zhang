#include <stdio.h>
#include <stdio.h>

int second, minute, hour;

void Update(int second);
void Display();
void Delay();

int main ()
{
	int i;
    hour = minute = second = 0;
	for ( i = 0 ; i <= 100000000; i++)
	{
		second++;
		Update(second);
		Display();
		Delay();
	}
	return 0;
}

void Update(int second)
{
	if ( second == 60 )
	{
		second = 0;
		minute++;
	}
	if ( minute == 60 )
	{
		minute = 0;
		hour++;
	}
	if ( hour == 24 )
	{
		hour = 0;
	}
}

void Display()
{
	printf("hour == %d,minute == %d,second == %d\n",hour,minute,second);
}

void Delay()
{
    int t;
	for ( t = 0 ;t <= 1000000000; t++ );
}








