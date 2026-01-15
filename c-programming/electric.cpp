<<<<<<< HEAD
#include<stdio.h>
#include<conio.h>
int main()
{
int units,countnum;
float charges;
printf("Enter customer number:");
scanf("%d", &countnum);
printf("Enter Units consumed:");
scanf("%d",&units);
if(units<=200)
{
	charges=0.5*units;
}
else if(units<=600)
{
	charges=390+(units-600);
}
printf("\n\nCustomer No:%d\nCharges=%.2f\n"
,countnum,charges);
return 0;
}
=======
#include<stdio.h>
#include<conio.h>
int main()
{
int units,countnum;
float charges;
printf("Enter customer number:");
scanf("%d", &countnum);
printf("Enter Units consumed:");
scanf("%d",&units);
if(units<=200)
{
	charges=0.5*units;
}
else if(units<=600)
{
	charges=390+(units-600);
}
printf("\n\nCustomer No:%d\nCharges=%.2f\n"
,countnum,charges);
return 0;
}
>>>>>>> 18eab0e4d506445091916fd87bb0bbb624841542
