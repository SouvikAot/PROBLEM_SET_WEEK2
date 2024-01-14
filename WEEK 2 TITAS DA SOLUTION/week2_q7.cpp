// C program to check whether a number is palindrome or not.
#include<stdio.h>
int main()
{
	int i, j, num, rem=0,rev=0;
	printf("ENTER A NUMBER\n");
	scanf("%d", &num);
	int n=num;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(rev==num)
	{
		printf("%d IS PALINDROME\n", num);
	}
	else
	{
		printf("%d IS NOT PALINDROME\n", num);
	}
}
