// a program to find the larger among two numbers

#include<stdio.h>

void main()
{
    int x,y;
    printf("enter any two numbers separated by space: ");
    scanf("%d %d", &x, &y);

    if (x>y)
    {
        printf("the number %d is greater than %d.",x,y);
    }
    else{
        printf("the number %d is greater than %d.",y,x);
    }
}
