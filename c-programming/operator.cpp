<<<<<<< HEAD
//arithmetic operators(+ - * / %)
//
//#include<stdio.h>
//int main(){
//	int num1 = 21;
//	int num2=10;
//	int result;
//	result=num1+num2;
//	printf("SUM=%d\n",result);
//	result=num1-num2;
//	printf("DIFFERENCE=%d\n",result);
//	result=num1*num2;
//	printf("MULTIPLY=%d\n",result);
//	result=num1/num2;
//	printf("DIVIDE=%d\n",result);
//	result=num1%num2;
//	printf("MODULUS=%d\n",result);
//}

//Relational operator(== != > < >= <=)
#include<stdio.h>
int main()
{
		int num1= 21;
	int num2=20;
	int result;
	if(num1==num2){
		printf("num1 is equal to num2\n");
	}
	else{
		printf("num1 is not equal to num2\n");
	}
		if(num1<num2){
		printf("num1 is less than num2\n");
	}
	else{
		printf("num1 is not less than num2\n");
	}
		if(num1>num2){
		printf("num1 is greater than num2\n");
	}
	else{
		printf("num1 is not greater than num2\n");
	}
	num1=5; num2=20;
	if(num1<=num2){
		printf("num1 is either less than or equal to num2\n");
	}
	else{
		printf("num1 is either greater than or equal to num2 \n");
	}
}


//Logical or Boolean Operator(&& || !)
//#include<stdio.h>
//int main(){
//	int a=5;
//	int b=20;
//	int c;
//	if(a&&b){
//		printf("Condition is true\n");
//	}
//	if(a||b){
//		printf("Condition is true\n");
//	}
//	a=0;b=10;if(a&&b){
//		printf("Condition is true\n");
//	}
//	else{
//		printf("Condition is not true\n");
//	}
//	if(!(a&&b) ){
//		printf("Condition is true\n");
//	}
//}

//Assignment Operator(= += -= *= /= %= >>= &= ^ |=)
//#include<stdio.h>
//int main(){
//	int a=21;
//	int c;
//	c=a;
//	printf("c=%d\n",c);
//	c+=a;
//		printf("c=%d\n",c);
//	c+=a;
//		printf("c=%d\n",c);
//	c-=a;
//		printf("c=%d\n",c);
//	c*=a;	printf("c=%d\n",c);
//	c+=a;
//		printf("c=%d\n",c);
//	c/=a;
//		printf("c=%d\n",c);
//		c=200;
//	c<<=a;
//		printf("c=%d\n",c);
//	c>>=2;
//		printf("c=%d\n",c);
//	c&=2;
//		printf("c=%d\n",c);
//	c^=2;
//		printf("c=%d\n",c);
//	c|=2;
//		printf("c=%d\n",c);
//}

//ternary operator (Condition_expression?statement_if_true:statment_if_false;)
//#include<stdio.h>
//int main(){
//	int i=3,j=6,k=8,l;
//	l=(i>j)?(i>k?j:k):(j>k?j:k);
//	printf("Largest=%d",l);
//	return 0;
//}

//Bitwise operator(& | ^ ~ << >>
//#include<stdio.h>
//void main(){
//	unsigned int a= 60;
//	unsigned int b=13;
//	int c=0;
//	c=a&b;
//	printf("C=%d\n",c);
//	c=a|b;
//	printf("C=%d\n",c);
//	c=a^b;
//	printf("C=%d\n",c);
//	c=~a
//	printf("C=%d\n",c);
//	c=a<<b;
//	printf("C=%d\n",c);
//	c=a>>b;
//	printf("C=%d\n",c);
//	
//}

//increment or decrement operator(++x --x)

//#include<stdio.h>
//int main(){
//	int x=12,y=1;
//	printf("Initial value of x = %d\n", x);
//		printf("Initial value of y = %d\n", y);
//		y=++x;
//		printf("After increamenting by 1:x=%d\n",x);
//		printf("y=%d\n\n",y);
//      y=--x;
//			printf("After decreamenting by 1:x=%d\n",x);
//		printf("y=%d\n\n",y);
//		return 0;
//}

//increment or decrement operator(x++ x--)
//#include<stdio.h>
//int main(){
//	int x=12,y=1;
//	printf("Initial value of x = %d\n", x);
//		printf("Initial value of y = %d\n", y);
//		y=x++;
//		printf("After increamenting by 1:x=%d\n",x);
//		printf("y=%d\n\n",y);
//		y=x--;
//			printf("After decreamenting by 1:x=%d\n",x);
//		printf("y=%d\n\n",y);
//		return 0;
//}

//special operator
//#include<stdio.h>
//int main(){
//	printf("%lu\n",sizeof(char));
//	printf("%lu\n",sizeof(int));
//	printf("%lu\n",sizeof(float));
//	printf("%lu\n",sizeof(double));
//	return 0;
//}


//Create a simple calculator using c.
//#include<stdio.h>
//#include<conio.h>
//int add(int x, int y)
//{
//	int a,b,c;
//	c=a+b;
//	return (c);
//}
//int subtract(int x, int y)
//{
//	int a,b,c;
//	c=a-b;
//	return (c);
//}
//int multiply(int x, int y)
//{
//	int a,b,c;
//	c=a*b;
//	return (c);
//}
//int divide(int x, int y)
//{
//	int a,b,c;
//	c=a/b;
//	return (c);
//}
//int main(){
//	printf("Press 1 for addition.\n");
//	printf("Press 2 for subtraction.\n");
//	printf("Press 3 for multiplication.\n");
//	int choice;
//	printf("\n Enter the choice number=");
//	scanf("%d",&choice);
//	switch(choice){
//	case 1:{
//	int a,b;
//	printf("Enter the value for a=");
//	scanf("%d",&a);
//	printf("\n Enter the value for b=");
//	scanf("%d",&b);
//	printf("\n\nSUM=%d",add(a,b));
//	break;
//}
//case 2 :{
//	int c,d;
//	printf("Enter the value for a=");
//	scanf("%d",&c);
//	printf("Enter the value for b=");
//	scanf("%d",&d);
//    printf("\n\nDifference=%d",subtract(c,d));
//
//	break;
//}
//case 3:{
//	int e,f;
//	printf("Enter the value for a=");
//	scanf("%d",&e);
//	printf("Enter the value for b=");
//	scanf("%d",&f);
//    printf("\n\nProduct=%d",multiply(e,f));
//
//	break;
//}
//case 4:{
//	break;
//}
//default:{
//	printf("Wrong Choice");
//	break;
//}}
//getch();
//}
//	

=======
//arithmetic operators(+ - * / %)
//
//#include<stdio.h>
//int main(){
//	int num1 = 21;
//	int num2=10;
//	int result;
//	result=num1+num2;
//	printf("SUM=%d\n",result);
//	result=num1-num2;
//	printf("DIFFERENCE=%d\n",result);
//	result=num1*num2;
//	printf("MULTIPLY=%d\n",result);
//	result=num1/num2;
//	printf("DIVIDE=%d\n",result);
//	result=num1%num2;
//	printf("MODULUS=%d\n",result);
//}

//Relational operator(== != > < >= <=)
#include<stdio.h>
int main()
{
		int num1= 21;
	int num2=20;
	int result;
	if(num1==num2){
		printf("num1 is equal to num2\n");
	}
	else{
		printf("num1 is not equal to num2\n");
	}
		if(num1<num2){
		printf("num1 is less than num2\n");
	}
	else{
		printf("num1 is not less than num2\n");
	}
		if(num1>num2){
		printf("num1 is greater than num2\n");
	}
	else{
		printf("num1 is not greater than num2\n");
	}
	num1=5; num2=20;
	if(num1<=num2){
		printf("num1 is either less than or equal to num2\n");
	}
	else{
		printf("num1 is either greater than or equal to num2 \n");
	}
}


//Logical or Boolean Operator(&& || !)
//#include<stdio.h>
//int main(){
//	int a=5;
//	int b=20;
//	int c;
//	if(a&&b){
//		printf("Condition is true\n");
//	}
//	if(a||b){
//		printf("Condition is true\n");
//	}
//	a=0;b=10;if(a&&b){
//		printf("Condition is true\n");
//	}
//	else{
//		printf("Condition is not true\n");
//	}
//	if(!(a&&b) ){
//		printf("Condition is true\n");
//	}
//}

//Assignment Operator(= += -= *= /= %= >>= &= ^ |=)
//#include<stdio.h>
//int main(){
//	int a=21;
//	int c;
//	c=a;
//	printf("c=%d\n",c);
//	c+=a;
//		printf("c=%d\n",c);
//	c+=a;
//		printf("c=%d\n",c);
//	c-=a;
//		printf("c=%d\n",c);
//	c*=a;	printf("c=%d\n",c);
//	c+=a;
//		printf("c=%d\n",c);
//	c/=a;
//		printf("c=%d\n",c);
//		c=200;
//	c<<=a;
//		printf("c=%d\n",c);
//	c>>=2;
//		printf("c=%d\n",c);
//	c&=2;
//		printf("c=%d\n",c);
//	c^=2;
//		printf("c=%d\n",c);
//	c|=2;
//		printf("c=%d\n",c);
//}

//ternary operator (Condition_expression?statement_if_true:statment_if_false;)
//#include<stdio.h>
//int main(){
//	int i=3,j=6,k=8,l;
//	l=(i>j)?(i>k?j:k):(j>k?j:k);
//	printf("Largest=%d",l);
//	return 0;
//}

//Bitwise operator(& | ^ ~ << >>
//#include<stdio.h>
//void main(){
//	unsigned int a= 60;
//	unsigned int b=13;
//	int c=0;
//	c=a&b;
//	printf("C=%d\n",c);
//	c=a|b;
//	printf("C=%d\n",c);
//	c=a^b;
//	printf("C=%d\n",c);
//	c=~a
//	printf("C=%d\n",c);
//	c=a<<b;
//	printf("C=%d\n",c);
//	c=a>>b;
//	printf("C=%d\n",c);
//	
//}

//increment or decrement operator(++x --x)

//#include<stdio.h>
//int main(){
//	int x=12,y=1;
//	printf("Initial value of x = %d\n", x);
//		printf("Initial value of y = %d\n", y);
//		y=++x;
//		printf("After increamenting by 1:x=%d\n",x);
//		printf("y=%d\n\n",y);
//      y=--x;
//			printf("After decreamenting by 1:x=%d\n",x);
//		printf("y=%d\n\n",y);
//		return 0;
//}

//increment or decrement operator(x++ x--)
//#include<stdio.h>
//int main(){
//	int x=12,y=1;
//	printf("Initial value of x = %d\n", x);
//		printf("Initial value of y = %d\n", y);
//		y=x++;
//		printf("After increamenting by 1:x=%d\n",x);
//		printf("y=%d\n\n",y);
//		y=x--;
//			printf("After decreamenting by 1:x=%d\n",x);
//		printf("y=%d\n\n",y);
//		return 0;
//}

//special operator
//#include<stdio.h>
//int main(){
//	printf("%lu\n",sizeof(char));
//	printf("%lu\n",sizeof(int));
//	printf("%lu\n",sizeof(float));
//	printf("%lu\n",sizeof(double));
//	return 0;
//}


//Create a simple calculator using c.
//#include<stdio.h>
//#include<conio.h>
//int add(int x, int y)
//{
//	int a,b,c;
//	c=a+b;
//	return (c);
//}
//int subtract(int x, int y)
//{
//	int a,b,c;
//	c=a-b;
//	return (c);
//}
//int multiply(int x, int y)
//{
//	int a,b,c;
//	c=a*b;
//	return (c);
//}
//int divide(int x, int y)
//{
//	int a,b,c;
//	c=a/b;
//	return (c);
//}
//int main(){
//	printf("Press 1 for addition.\n");
//	printf("Press 2 for subtraction.\n");
//	printf("Press 3 for multiplication.\n");
//	int choice;
//	printf("\n Enter the choice number=");
//	scanf("%d",&choice);
//	switch(choice){
//	case 1:{
//	int a,b;
//	printf("Enter the value for a=");
//	scanf("%d",&a);
//	printf("\n Enter the value for b=");
//	scanf("%d",&b);
//	printf("\n\nSUM=%d",add(a,b));
//	break;
//}
//case 2 :{
//	int c,d;
//	printf("Enter the value for a=");
//	scanf("%d",&c);
//	printf("Enter the value for b=");
//	scanf("%d",&d);
//    printf("\n\nDifference=%d",subtract(c,d));
//
//	break;
//}
//case 3:{
//	int e,f;
//	printf("Enter the value for a=");
//	scanf("%d",&e);
//	printf("Enter the value for b=");
//	scanf("%d",&f);
//    printf("\n\nProduct=%d",multiply(e,f));
//
//	break;
//}
//case 4:{
//	break;
//}
//default:{
//	printf("Wrong Choice");
//	break;
//}}
//getch();
//}
//	

>>>>>>> 18eab0e4d506445091916fd87bb0bbb624841542
