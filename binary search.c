#include<stdio.h>
int main(){
int arr[6]={15,12,18,25,32,401};
int low=0,high=5,mid,key;
printf("enter element to search:");
scanf("%d",&key);
while(low<=high){
mid=(low+high)/2;
if (arr[mid]==key){
printf("element %d found at position %d\n",key,mid+1);
return 0;
}
}
}
