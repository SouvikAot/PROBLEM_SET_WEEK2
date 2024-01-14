//4. C program to display the sequence ABA, BCB, CDC, DED, ……………….
#include<stdio.h>
int main()
{
	char i='A' ,j='B', k='A';
	int n;
	printf("ENTER SEQUENCE LENTH");
	scanf("%d",&n);
	for(int l=0; l<n; l++)
	{
		printf("%c%c%c\t",i,j,k);
		i=i+1;
		j=j+1;
		k=k+1;
	}
}
