//enter any two numbers and check whether they are exactly equal or not


#include<stdio.h>

void main()
{
    int x,y;
    printf("enter the numbers separated by space: ");
    scanf("%d %d",&x, &y);

    if (x==y)
    {
        printf("the two numbers you entered are exactly equal.");
    }
    else
    {
        printf("the numbers you entered aren't equal.");
    }
}
