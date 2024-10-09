#include<stdio.h>
int main()
{
int i,j;
char op;
printf("you entered :");
scanf("%d %d",&i,&j);
scanf(" %c",&op);
	switch(op)
	{
		case '+':
			printf("the addition of number is: %d \n",i+j);
		break;
		case'-':
			printf("the subtraction of number is: %d \n",i-j);
		break;
		case'*':
			printf("the multiplicatin of number is: %d %d %d \n",i*j);
		break;
		case'/':
			printf("the division of number is: %d %d %d \n",i/j);
		break;
		default:
			printf("invalid entry");			
	}
}
