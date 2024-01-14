//C program to find the sum of first n prime numbers.
#include<stdio.h>
int main()
{
	int num, i, j,isprime;
	int sum=0;
	printf(" CHECK PRIME NUMBER UPTO ");
	scanf("%d", &num);
	
	for(i=2;i<=num;i++)
	{
		isprime=1;
		for(j=2;j<=i/2;j++)
		{
				if(i%j==0)
				{
					isprime=0;
					break;
				}
		}
	if(isprime==1)
	{
		sum=sum+i;
	}
	}
	printf("SUM OF ALL PRIME NUMBER IS %d",sum);	
}

