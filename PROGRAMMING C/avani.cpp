#include<stdio.h>

int main()
{
	int i,j,tempNumber,sum=0,rem=0,n;
	printf("enter a vlaue ");
	scanf("%d",&i);
	printf("enter a vlaue ");
	scanf("%d",&j);
	
	for(n=((i<j)?i:j);n<=((i>j)?i:j);n++);
	{
		tempNumber=n;	
	while(tempNumber!=0);
	{
		rem = tempNumber % 10;
		sum = sum + (rem * rem * rem);
		tempNumber /= 10;
	}

	if(sum==n)
	{
	
		printf("the number is armstrong number",n);
		
    }
    sum=0;
}
	return 0;				
}
