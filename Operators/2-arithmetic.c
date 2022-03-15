//To ask for a number and check whether it is even or odd

#include<stdio.h>

void main()
{

    int x;
    printf("enter any number: ");
    scanf("%d",&x);

    if (x%2==0)
    {
        printf("the number %d is even.", x);
    }
    else
    {
        printf("the number %d is odd.",x);
    }
}
