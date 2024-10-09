#include<stdio.h>

int main()
{
	int i,j,a[10];
	printf("enter a  value:");
	scanf("%d",&i);
		for(j=0;i>0;j++)
		{
			a[j]=i%2;
			i=i/2;
		
		}
		printf("the binary number is:");
		for(j=j-1;j>=0;j--)
		{
			printf("%d",a[j]);
		}
			
		return 0;
}
