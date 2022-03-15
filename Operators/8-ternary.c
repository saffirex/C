// to enter any two numbers and find the greater one using ternary operator

#include<stdio.h>

void main()
{
    int x,y,great;
    printf("enter the value of x and y separated by spaces");
    scanf("%d %d",&x,&y);

    great= (x>y)? x:y ;

    printf("the greater number is: %d", great);

}
