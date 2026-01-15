<<<<<<< HEAD
#include<stdio.h>
#include<conio.h>
int main()
{
	int num,r,k,sum=0;
	printf("Enter a number:\n");
	scanf("%d",&num);
	k=num;
	while(num!=0)
	{
		r=num%10;
		sum=sum*10+r;
		num=num/10;
		
	}
	if(sum==k)
	{
		printf("Palindrom");
	}
	else{
		printf("Not palindrom");
	}
	return 0;
}
=======
#include<stdio.h>
#include<conio.h>
int main()
{
	int num,r,k,sum=0;
	printf("Enter a number:\n");
	scanf("%d",&num);
	k=num;
	while(num!=0)
	{
		r=num%10;
		sum=sum*10+r;
		num=num/10;
		
	}
	if(sum==k)
	{
		printf("Palindrom");
	}
	else{
		printf("Not palindrom");
	}
	return 0;
}
>>>>>>> 18eab0e4d506445091916fd87bb0bbb624841542
