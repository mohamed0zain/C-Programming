#include<stdio.h>
int main()
{
    int i=1,j=1;
    while(i<6)
    {
        printf("   \n");
        //i++;
        j=1;
        while(j<=i)
        {
            printf(" *");
            j++;
        }
        i++;
    }
    return 0;
}
