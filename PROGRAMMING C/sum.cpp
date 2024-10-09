#include <stdio.h>
int main()
{
 float t=0,units=0,bill=0;
 printf("Enter the amount of units: ");
 scanf("%f",&units);
 printf("Enter the time in seconds: ");
 scanf("%f",&t);
 if(t>0)
 {
 if((t>=1)&&(t<60))
 {
 bill=t*0.25*units;
 }
 else if((t>=60)&&(t<180))
 {
 bill=(59*0.25*units)+((t-59)*0.5*units);
 }
 else if((t>=180)&&(t<240))
 {
 bill=(59*0.25*units)+(120*0.5*units)+((t-179)*1*units);
 }
 else if((t>=240)&&(t<300))
 {
 bill=(59*0.25*units)+(120*0.5*units)+(60*1*units)+((t-239)*2*units);
 }
 else if(t>=300)
 {
 bill=(59*0.25*units)+(120*0.5*units)+(60*1*units)+(60*2*units)+((t299)*3*units);
 }
 }
 else
 {
 printf("Enter valid time");
 }
 printf("Units: %0.2f\n",units);
 printf("Time: %0.2f\n",t);
 printf("Total Amount: %0.2f paisa \n",bill);
 return 0;
}

