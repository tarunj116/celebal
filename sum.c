//1.)  Write a program to print sum of the following series:1 3 5 7 9 11......up to n numbers taking only an integer n as input.
#include <stdio.h>
void main()
{
int i,n,sum=0;
printf("enter the value of n : ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum+=2*i-1;
}
printf("The Sum of odd Natural Number upto %d terms : %d \n",n,sum);
}

