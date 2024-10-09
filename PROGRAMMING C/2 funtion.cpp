#include<stdio.h>
 int main()
 {
 	loop:
 	int a=10,b;
 	do
	 {
	 	if(a<16)
	 	{
	 		b++;
	 		if(b<4)
	 		{
	 			
	 			goto loop;
			 }
			 else
			 	break;
			 }
		 printf("the value of a :%d \n",a );
		 a++;
	}
		while(a<20);	
		 return 0;
}
  
