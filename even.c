#include<stdio.h>

int main()
{
int a1;
    printf("enter the number \n");
    scanf("%d",&a1);
    int rem=a1%2;
    int check=rem==0;
    printf("%d is a Even value is %d",a1, check);
}