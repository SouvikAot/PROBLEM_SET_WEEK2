// C Program to make a simple calculator using switch...case
#include<stdio.h>
int main()
{
	int n1,n2;
	int i;
	printf("ENTER TWO NUMBER TO CALCULATE ADD SUB DIV MUL");
	scanf("%d%d",&n1,&n2);
	while(1)
	{
	printf("WHAT OPERATION YOU NEED TO PERFORM 1 FOR ADD, 2 FOR SUB , 3 FOR MUL, 4 FOR DIV");
	scanf("%d",&i);
	
	switch(i)
	{
		case 1:
			printf("ADDITION RESULT IS %d\n",n1+n2);
			break;
		case 2:
			printf("SUBSTRACTION RESULT IS %d\n",n1-n2);
			break;
		case 3:
			printf("MULTIPLICATION RESULT IS %d\n",n1*n2);
			break;
		case 4:
			printf("DIVISON RESULT IS %f\n",n1/(float)n2);
			break;
		default:
			printf("INVALID OPERATION\n");
	}
	}
}
