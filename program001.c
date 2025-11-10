#include <stdio.h>
int main() {
       char name[50];
       int age;
       float marks;

       printf("enter your name:");
       scanf("%s" ,name);
       printf("enter your age:");
       scanf("%d",&age);
       printf("enter your marks:");
       scanf("%f",&marks);
       printf("\nName:%s\nAge:&d\nMarks:%.2f\n",name,age,marks);
       return 0;
}
