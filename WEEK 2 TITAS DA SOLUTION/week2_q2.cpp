//. Write a C program to check whether a number is perfect or not.
#include<stdio.h>
int main()
{
	int i ,j, k,num;
	int sum=0;
	printf("ENTER A NUMBER TO CHECK PRIME ");
	scanf("%d",&num);
	
	for(i=1;i<=num/2;i++)
	{
		if(num%i==0)
		{
			sum=sum+i;
		}
	}
	if(num==sum)
	{
		printf("%d IS PRIME NUMBER",num);
	}
	else
	{
		printf("%d IS NOT PRIME NUMBER",num);
	}
}
