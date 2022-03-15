/* to add individual digits of a entered number until the sum is a single digit */
#include<stdio.h>


int main()
{
    int n,sum=0,rem;
    printf("Enter the value for n:  ");
    scanf("%d",&n);

    printf("\t Number:  %d\n",n);

while(n>=10)
{
        sum=0;
        printf("\nadd= ");
    while (n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
        printf("\t + %d",rem);
    }
    printf("\nSum= %d",sum);
    n=sum;
}

return 0;
}