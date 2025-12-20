#include<stdio.h>

int main()
{
char name[100];
printf("Enter the name: \n");
scanf("%[^\n]s",name);
printf("the user name is : %s \n",name);
}