//enter three numbers and display the largest number

#include<stdio.h>

void main()
{

    int x,y,z;
    printf("enter any three numbers separated by spaces: ");
    scanf("%d %d %d",&x,&y,&z);

    if (x>y && x>z)
    {
        printf("the number %d is the greatest",x);
    }
    else if (y>x && y>z)
    {
        printf("the number %d is the greatest",y);

    }
    else
    {
        printf("the number %d is the greatest",z);
    }
}

