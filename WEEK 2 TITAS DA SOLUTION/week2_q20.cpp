//Write a C program to find total number of natural numbers between 101 and 999 divisible by
//both of 2 and 5 (Without using any loop).
#include<stdio.h>
int checkNat(int num, int count)
{
	if(num>999)
	{
		return count;
	}
	else if(num<=999 && num>=101)
	{
		if(num%2==0 && num%5==0)
		{
			count++;
			return checkNat(num+1,count);
		}
		else
		{
			return checkNat(num+1,count);
		}
	}
}
int main()
{
	int count=0, n=101;
	int res=checkNat(n,count);
	printf("NUMBER OF DIGIT IS %d WHO ARE DIVISIBLE BY 2 AND 5",res);
}
