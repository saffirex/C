/* To keep on asking for numbers until user enters zero
then display the count of total positive and negative numbers */
#include<stdio.h>


int main()
{
    int num=1, pos=0,neg=0;
    while (num!=0)
    {
        printf("Enter a number: ");
        scanf("%d", &num);
        if (num>0)
        {
            pos++;
        }
        else if(num<0)
        {
            neg++;
        }

    }
    printf("\nPositive: %d",pos);
    printf("\nNegative: %d", neg);



return 0;
}