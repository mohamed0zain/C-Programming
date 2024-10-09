#include<stdio.h>

int main()
{
int a[5][2]={ {0,0},{1,2},{2,4},{3,6},{4,0}};
 
 for(int i=0;i<5;i++)
 {
 	
 		printf("a[%d][%d]=%d\n",i,0,a[i][0]);
 		printf("a[%d][%d]=%d\n",i,2,a[i][2]);
 		
	 
 }
 return 0;
}
