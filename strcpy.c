#include<stdio.h>
#include<string.h>
void main()
{
char s1[5]="Magic";
char s2[5]="Logic";
printf("s2=%s\n",s2);
strcpy(s2,s1);
printf("s2=%s\n",s2);
}