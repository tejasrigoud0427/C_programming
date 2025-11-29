#include<stdio.h>

int main()
{
int a;
printf("enter the number");
scanf("%d",&a);
int sum=0;
while (a!=0)
{
 int digit=a%10;
 sum=sum+digit;
 a=a/10;
 }
 printf("the sum of digit is %d",sum);
}