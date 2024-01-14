//15. C program to display factors of a number
#include<stdio.h>
int main()
{
	int i, n;
	printf("ENTER A NUMBER");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("%d\t ",i);
		}
	}
}
