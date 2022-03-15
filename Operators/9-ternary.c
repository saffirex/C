// enter any two numbers, if the first is greater then multiply else divide

#include<stdio.h>

void main()
{

    float x,y;
    float value;
    printf("enter the values for x and y separated by spaces: ");
    scanf("%f %f",&x,&y);

    value= (x>y)? x*y:x/y;

    printf("the final value after operation is: %f", value);
}
