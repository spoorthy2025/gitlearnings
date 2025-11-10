#include<stdio.h>
int main() {
   int num;
   printf("enter a number:");
   scanf("%d",&num);

  if(num>0)
    printf("positive number\n");
 else if (num<0)
    printf("negative numbers\n");
 else
    printf("zero\n");
return 0;

}
