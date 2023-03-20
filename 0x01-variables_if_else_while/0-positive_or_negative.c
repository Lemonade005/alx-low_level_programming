#include<stdio.h>
#include<time.h>
int main(void)
{
	int n;
	Srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf(" is positive\n");
	}
	else if (n == 0)
	{
		printf(" is zero \n");
	}
	else
	{
		printf (" is negative\n");
	}
	return (0);
}

