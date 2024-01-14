//. C program to display Armstrong number between two intervals.
#include<stdio.h>
#include<math.h>
int main()
{
	int n1, n2;
	printf("ENTER RANGE");
	scanf("%d%d", &n1,&n2);
	for(int i=n1; i<n2;i++)
	{
		int flag=0;
		int num=i,remainder=0,result=0,count=0;
		while(num!=0)
		{
			count++;
			num=num/10;
		}
		int orgnum=i;
		while(orgnum!=0)
		{
			remainder=orgnum%10;
			result+=pow(remainder,count);
			orgnum=orgnum/10;
		}
		if(i==result)
		{
			flag=1;
			printf("AMSTRONG NUMBER ARE \n %d\n",i);
		}
	}
}
