#include<stdio.h>
int main()
{
	int n,q,rem,fact=1,i,result=0,a;
	
	for(n=1;n<=700;n++)
	{	
	q=n;
	while(q!=0)
	{
		rem=q%10;
		for(i=1;i<=rem;i++)
		{
			fact=fact*i;
		}
		result+=fact;
		fact=1;
		q=q/10;
	}
	
	if(result == n)
		printf("%d is a strong number",n);
	else
		printf("%d is not a strong number",n);
    }
		return 0;
}
