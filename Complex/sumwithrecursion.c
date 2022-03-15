/* To take 5 digit number as input from the user and display the sum of each digits */
#include<stdio.h>
int func( int num);

int main()
{
    int num,sum;
    printf("Enter the number: ");
    scanf("%d",&num);
    sum = func(num);
    printf("The sum is: %d", sum);


return 0;
}

int func( int num)
{
    int rem, sum=0;
    if (num==0)
    {
        return 0;
    }
    else 
    {
    rem=num%10;   //54321
    sum= rem+ func(num/10);
    }
    
    return sum;
}