//8. C program to find the sum of natural numbers using recursion.
#include<stdio.h>
int natural_num(int n)
	{
		if(n!=0)
		{
			return n+ natural_num(n-1);
		}
		else
		{
			return n;
		}
	}
int main()
{
	int n;
	printf("ENTER A NUMBER UPTO");
	scanf("%d",&n);
	int res=natural_num(n);
	printf("%d\n",res);
}
