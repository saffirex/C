// illustration of use of shift operators >> <<

#include<stdio.h>

void  main()
{
    int x,y,ls,rs;
    printf("enter the values for x and shift: ");
    scanf("%d %d", &x, &y);

    rs=x>>y; //rightshift
    ls=x<<y; //leftshift

    printf("right shift : %d", rs);
    printf("\nleft shift : %d",ls);
}
