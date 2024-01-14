//5.C program to count number of digits in an integer.
#include<stdio.h>
int main()
{
	int n, i ,count=0;
	printf("ENTER A NUMBER \t");
	scanf("%d",&n);
	while(n!=0)
	{
		count++;
		n=n/10;
	}
	printf("NUMBER OF DIGIT IS %d",count);
}
