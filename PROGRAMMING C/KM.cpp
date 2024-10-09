#include<stdio.h>

int main()
{
	int i,a,n,fact=1,sum=0,rem=0;
	
	printf("Enter the number: \n");
	scanf("%d",&n);
	a=n;
	
	while(a>0)
	{
		rem=a%10;
		for(i=1;i<=rem;i++)
		{
			fact=fact*i;
		}
		sum=fact+sum;
		fact=1;
		a=a/10;
		
		
	}
	if(sum==n)
		printf("the number is krishnamurthy");
	else
		printf("the number is not krishnamurthy");	

	return 0;
}












