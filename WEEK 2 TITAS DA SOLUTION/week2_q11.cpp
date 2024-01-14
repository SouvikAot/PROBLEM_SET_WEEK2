//11. C program to find GCD and LCM of two numbers.
#include<stdio.h>

int gcdres(int a,int b)
{
	if(b==0)
	return a;
	
	else
	return gcdres(b,a%b);
}
int main()
{
	int num1, num2;
	printf("ENTER TWO NUMBER TO CALCULATE GCD AND LCM");
	scanf("%d%d",&num1,&num2);
	int gcd=gcdres(num1,num2);
	printf("GCD IS %d\n",gcd);
	int lcm= num1*num2/gcd;
	printf("LCM IS %d",lcm);
}
