/* to print all the prime numbers in a range given by the user */
#include<stdio.h>
int main()
{
    int i,j,a,b,count;
    printf("enter the values for a and b such that b>a: ");
    scanf("%d %d",&a,&b);
    //to bring the lower limit to 2
    while (a<2)
    {
        a++;
    }
    for (i=a;i<=b;i++)
    {
        count=0;
        for (j=2;j<= (i/2);j++)
                if (i%j==0)
                {
                    count=1;
                    break;
                }     
        if (count==0)
        {
            printf("\t %d",i);
        }
    }
return 0;
}

