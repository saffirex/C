// To perform addition, subtraction, multiplication and division acc to user's choice

#include<stdio.h>

void main()
{

    int a,b,c;
    printf("The choices are: \n 1. Add  \n 2.Subtract \n 3. Multiply \n 4. Divide \n");
    printf("Enter the values for a and b: ");
    scanf(" %d %d", &a,&b);
    printf("\n Enter your choice: ");
    scanf("%d",&c);

    switch(c)
    {
    case 1:
        printf("the sum of two numbers is: %d", a+b);
        break;
    case 2:
        printf("the differnece of two numbers is: %d", a-b);
        break;
    case 3:
        printf("The product of two numbers is: %d", a*b);
        break;
    case 4:
        printf("the quotient is: %d", a/b);
        break;
    default:
        printf("Please enter a valid value: ");
        break;
    }



}
