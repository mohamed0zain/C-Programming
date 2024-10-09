#include<iostream>
using namespace std;
 
int main()
{
    int a[5] = {11, 15, 6, 8, 9} , n ,temp;
 
 	cout<< "Enter the number you want to discard: "<<endl;
 	cin>>n;
    for (int i=0; i<5; i++){
    	for (int j=i+1; j<5; j++){
    		if(a[i]==n){
    			temp=a[i];
    			a[i]=a[j];
			}
		}
	}
	
	
    for (int i=0; i<4; i++){
    	cout<<a[i]<<endl;
	}
 
    return 0;
}
