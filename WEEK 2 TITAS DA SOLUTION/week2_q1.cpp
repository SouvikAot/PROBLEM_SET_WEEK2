//1. Write a C program to find the sum of digit of a number
#include<stdio.h>
int main()
{
	int num , i ,j,k;
	printf("ENTER NUMBER TO CALCULATE sUM OD DIGIT");
	scanf("%d", &num);
	
	i=num/100;
	j= (num/10)%10;
	k=num%10;
	
	printf("SUM OF DIGIT IS %d",i+j+k);
}
