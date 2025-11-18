#include<stdio.h>
int main(){
int arr[]={10,20,30,40,50};
int cout=sizeof(arr)/sizeof(arr[0]);
printf("total number of elements in the array =%d\n",cout);
return 0;
}
