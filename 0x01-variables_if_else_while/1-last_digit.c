#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int main(void)
{
       int x;
     srand(time(0));
int n = rand() /* - RAND_MAX \ 2; */
x = n % 10;
/* printf ("last digit of" , n , "is" , x);*/
if (x > 5)
{
printf (" and is greater than 5");
}
else if (x == 0)
{
printf ("and is equal to 0");
{
else if (x < 6)
{
printf ("and is less than 6 and not 0");
}
return (0);
}

