#include<stdio.h>
int main()
{
	for(int i=1;i<=5;i++)
	{
		for(int j=4;j>=i;j--)
		{
			printf("  ");	
		}
		for(int k=1;k<=i;k++)
		{
			printf("%d ",i);
		}
		for(int l=2;l<=i;l++)
		{
			printf("%d ",i);
			
		}
		printf(" \n");
	}
}
