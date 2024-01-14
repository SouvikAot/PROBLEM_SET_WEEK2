//. C program to check Armstrong number.
#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,count=0;
	int remainder=0,result=0;
	printf("ENTER A NUMBER TO CHECK AMSTRONG NUMBER");
	scanf("%d",&n);
	
	int num=n;
	while(num!=0)
	{
		count++;
		num=num/10;
	}
	printf("%d\n",count);
	
	int orgnum=n;
	while(orgnum!=0)
	{
		remainder=orgnum%10;
		result+=pow(remainder,count);
		orgnum=orgnum/10;
	}
	if(n==result)
	printf("AMSTRONG NUMBER");
	else
	printf("NOT AMSTRONG NUMBER");
}
