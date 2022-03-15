//Addition of two numbers given by the user

#include<stdio.h>

void main(){

    int x,y,sum;
    printf("enter any two numbers: ");
    scanf("%d %d",&x,&y);

    sum=x+y;
    printf("the sum of  %d and %d is: %d", x,y,sum);
}
