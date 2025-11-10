#include<stdio.h>
int main()
{
    float length,breadth,area,perimeter;
    printf("enter the length and breadth:");
    scanf("%f %f",&length,&breadth);
    area=length*breadth;
    perimeter=2*(length+breadth);
    printf("area=%.2f\nperimeter=%perimeter=%.2f\n",area,perimeter);
    return 0;
}
