#include<stdio.h>
#include<string.h>

int main()
{
	char str1[12]=" Hello";
	char str2[12]="  world";
	char str3[12];
	int len;
	
	str1[12];
	printf("%s \n",str1);
	
	
	strcpy(str3,str1);
	printf("strcpy ( str3, str1): %s\n",str3);
	
	strcat(str2,str1);
	printf("strcpy( str2, str1):  %s\n",str2);
	
	len=strlen(str1);
	printf("strlen(str1): %d\n",len);
	
	return 0;
}
