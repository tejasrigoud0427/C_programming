#include<stdio.h>
void swap(int *m,int *n);
int main()
{
 int a;
 int b;
 printf("enter the value in a \n");
 scanf("%d",&a);
 printf("enter the value in b \n");
 scanf("%d",&b);
 printf("before swap a=%d \t b=%d \n",a,b);
 swap(&a,&b);
 printf("after swap a=%d \t b=%d\n",a,b);
}
void swap(int *m,int *n)
{
 int c=*m;
 *m=*n;
 *n=c;
} 