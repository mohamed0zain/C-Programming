#include<stdio.h>
int main()
{
	int i,rem,sum=0,temNumber;
	 printf("Enter the number:");
	 scanf("%d",&i);
	 temNumber=i;
	 while(temNumber!=0)
	 {
	 	rem=temNumber%10;
	 	sum=(sum*10)+rem;
	 	temNumber=temNumber/10;	
	 }
	 if(sum==i)
		printf("the number is palindrone");
	else
		printf("the number is not palindrone");	
}
