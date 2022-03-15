//to find the area of circle using symbolic constant

#include<stdio.h>
#define PI 3.1415

void main()
{
    float r,area;
    printf("enter the value for radius: ");
    scanf("%f",&r);

    area=PI*r*r;
    printf("the area of the circle is %f",area);
}
