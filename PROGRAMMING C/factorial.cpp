#include<stdio.h>
int main()

{
	int i,n,fact=1;
	
	printf("Enter a number: ");
	scanf("%d",&n);
	
	for(i=n;i>=1;i--)
	{
		fact=fact*i;
	}
	printf("Fatorial of %d is: %d",n,fact);
	
	return 0;
	
}
