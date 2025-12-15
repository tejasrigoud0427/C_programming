#include<stdio.h>

int main()
{
 int option;
 printf("the food items available are:\n");
 printf("1 Pani puri");
 printf("2 cotton candy");
 printf("3 chicken biryani");
 printf("4 bitter gaurd biryani");
 printf("please enter the option to select the food item");
 scanf("%d",& option);
 switch (option)
 {
  case 1:
  {
   printf("pani puri is ordered");
  }break;
  case 2:
  {
   printf("cotton candy is ordered");
  }break;
  case 3:
  {
   printf("chicken biryani is ordered");
  }break;
  case 4:
  {
   printf("bitter gaurd biryani is ordered"); 
  } break;
  default:
  {
   printf("please select the valid option");
  }
 }  
}