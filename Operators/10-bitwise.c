// demonstration of bitwise and(&) or(|) and xor(^)

#include<stdio.h>

void main()
{
    int x,y,band,bor,bxor;
    printf("enter the values for x and y: ");
    scanf("%d %d", &x, &y);

    //bitwise &: 5&4= 101&100=  100 = 4
    band= x&y;
    //bitwise |: 5|4=101|100=  101= 5
    bor= x|y;
    //bitwise ^: 5^4= 101^100= 001= 1
    bxor=x^y;

    printf("\nbitwise and: %d",band);
    printf("\nbitwise or: %d",bor);
    printf("\nbitwise xor: %d",bxor);
}

