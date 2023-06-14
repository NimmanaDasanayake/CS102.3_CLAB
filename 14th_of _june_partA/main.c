#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num1;
  printf("enter num1:");
  scanf("%d",&num1);
  if(num1%2==0){
    printf("\n %d is even \n",num1);
  }else
    printf("\n %d is odd \n",num1);

    return 0;
}
