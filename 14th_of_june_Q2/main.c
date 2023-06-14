#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num1 ;
   printf("enter num1:");
   scanf("%d",&num1);
   switch(num1%2){
  case 0:
    printf("%d is even number\n",num1);
    break;
  case 1:
    case-1:
    printf("%d is odd number\n",num1);
    break;
   }
    return 0;
}
