//C program to reverse a number.
#include<stdio.h>
int main()
{
	int num, rev=0, rem=0;
	printf("ENTER A NUMBER\n");
	scanf("%d", &num);
	
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	printf("REMAINDER IS %d", rev);
}
