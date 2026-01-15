<<<<<<< HEAD
#include<stdio.h>
#include<conio.h>
void fact(int num){
	int i, p=1;
	for(i=1;i<=num;i++)
	{
		p=p*i;
	}
	printf("\n\nFactorial of entered number=%d ",p);
}
int main()
{
	int num;
	printf("Enter any number:-");
	scanf("%d",&num);
	fact(num);
	return 0;
}
=======
#include<stdio.h>
#include<conio.h>
void fact(int num){
	int i, p=1;
	for(i=1;i<=num;i++)
	{
		p=p*i;
	}
	printf("\n\nFactorial of entered number=%d ",p);
}
int main()
{
	int num;
	printf("Enter any number:-");
	scanf("%d",&num);
	fact(num);
	return 0;
}
>>>>>>> 18eab0e4d506445091916fd87bb0bbb624841542
