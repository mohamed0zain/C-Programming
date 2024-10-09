#include<stdio.h>
int main()
{
	int i,n,a=0,b=1,result;
	
	printf("Enter the number of terms : ");
	scanf("%d",&n);
	printf("Fibonacci series: ");
	
	for(i=1;i<=n;i++)
	{
		printf("%d ",a);
		result= a + b;
		a = b;
		b = result;
	}
	return 0;
}
