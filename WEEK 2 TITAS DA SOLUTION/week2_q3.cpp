//C program to display the sequence AMM, COO, EQQ,……….
#include<stdio.h>
int main()
{
	char i='A' ,j='M', k='M';
	int n;
	printf("ENTER SEQUENCE LENTH");
	scanf("%d",&n);
	for(int l=0; l<n; l++)
	{
		printf("%c%c%c\t",i,j,k);
		i=i+2;
		j=j+2;
		k=k+2;
	}
}
