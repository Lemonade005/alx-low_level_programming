#include<stdio.h>
#include<time.h>
int min(void)
{
       int n;
Srand(time(0));
n = rand() - RAND_MAX \ 2;
int x = n % 10;
printf ("last digit of" + n + "is" + x);
if (x > 5)
{
printf (" and is greater than 5");
}
else if (x == 0)
{
printf ("and is equal to 0");
{
else
{
printf ("and is less than 6 and not 0"
}
return (0);
}

