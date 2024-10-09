#include<stdio.h>
#include<string.h>

int main()
{
	char str1[12]=" Hello";
	char str2[12]="  world";
	char str3[12];
	int len;
	
	strcpy(str3,str1);
	printf("strcpy ( str3, str1): %s\n",str3);
	
	strcpy(str1,str2);
	printf("strcpy ( str1, str2): %c\n",str1[0]);

	
	return 0;
}
