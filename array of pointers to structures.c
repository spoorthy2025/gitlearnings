#include<stdio.h>
#include<string.h>
struct book{
int id;
char title[50];
char author[50];
};
int main(){
struct book b1={101,"c programming","dennis ritchie"};
struct book b2={102,"data structures "," mark weiss"};
struct book b3={103,"operating system","silberschatz"};
struct book *book[3]={&b1,&b2,&b3};
 int searchID,i,found=0;
printf("Enter Book ID to scarch: ");
scanf("%d", &searchID);
for(i=0;i<3;i++){
if(books[i]->id == searchID)
{printf("\nBook Found:in");
printf("ID:%d\n", book[i]->id):
printf("Title: %\sn", books[i]->title);
printf("Author:9%sin", books[i]->author);
found =1;
break;}
