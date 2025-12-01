#include<stdio.h>
struct date
{
int date;
int month;
int year;

};
struct student{
int id;
char name[20];
struct date dob;
};
int main(){
struct student s1={101,"kiran",{15,8,2000}};
printf("name:%s\n",s1.name);
printf("date of birth:%02d/%02d%d\n",s1.dob.date,s1.dob.month,s1.dob.year);
return 0;
}
