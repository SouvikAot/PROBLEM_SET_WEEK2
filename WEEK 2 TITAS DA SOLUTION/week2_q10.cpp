//Read a number from STDIN, then display the sequence given below:
//Input: 52934
//Output: A5, B2, C9, D3, E4
#include<stdio.h>
	int reverse(int n)
	{
		int rev=0;
		while(n>0)
		{
			rev=rev*10+n%10;
			n=n/10;
		}
		return rev;
	}
int main()
{
	int n;
	printf("ENTER A NUMBER");
	scanf("%d",&n);
	int rev=reverse(n);
	char ch='A';
	while(rev>0)
	{
		printf("%c%d\t",ch,rev%10);
		ch++;
		rev=rev/10;
	}
	

}
