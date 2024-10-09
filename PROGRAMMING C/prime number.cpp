#include <stdio.h>

int main(void) 
{
    int i,j,t=0;
    printf("You entered the value:");
    scanf("%d",&i);
     
     for(j=2;j<i;j++)
     {
        if(i%j==0)
        	t=1; 
     }
     if(t==1)
        printf("it is not a prime number");
    else
        printf("it is  a prime number");
	return 0;
}
