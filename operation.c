#include<stdio.h>
void main()
{
int a,b,sum,sub,p;
float div,avg=0.0;
printf("Enter 2 numbers");
scanf("%d%d",&a,&b);
sum=a+b;
printf("Sum of the numbers is:%d",sum);
sub=a-b;
printf("Subtraction of the numbers is:%d",sub);
p=a*b;
printf("Multiplication of 2 numbers is:%d",p);
div=a/b;
printf("Division of 2 numbers is:%f",div);
avg=(a+b)/2;
printf("Average of two numbers is:%f",avg);
}
