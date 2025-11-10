#include<stdio.h>
int main(){
 int a,b;
 printf("enter two numbers:");
 scanf("%d %d",&a,&b);
 if(a>b)
    printf("%d is the largest\n",a);
 else if(b>a)
    printf("%d is the largest\n",b);
 else
    printf("both are equal\n");
  return 0;
  }
