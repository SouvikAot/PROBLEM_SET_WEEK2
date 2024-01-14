// C program to check whether a number is prime or not.
#include<stdio.h>
int main()
{
	int num, i, j;
	int flag=0;
	printf("ENTER A NUM TO CHECK PRIME NUMBER");
	scanf("%d", &num);
	
	if(num==1&& num==0)
	{
		return 0;
	}
	else
	{
		for(i=2;i<num;i++)
		{
			if(num%i==0)
			{
				flag=1;
				break;
			}
		}
	}
	if(flag==0)
	{
		printf("NUMBER IS PRIME");
	}
	else
	{
		printf("NUMBER IS NOT PRIME");
	}
}
