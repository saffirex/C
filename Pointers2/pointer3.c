/* swapping values using pointers */
#include<stdio.h>
 void swap( int *pa, int *pb);

int main()
{
    int a,b;
    int *pa,*pb;
    pa=&a;
    pb=&b;

    printf("Enter the values for a and b: ");
    scanf("%d %d", pa, pb);
    printf("In the function main: a= %p: %d \t b= %p: %d",pa,*pa,pb,*pb);

    swap(pa,pb);

return 0;
}

void swap( int *pa, int *pb)
{
    int temp;
    printf("\n Initial values: \n");
     printf("\nIn the function swap: a= %p: %d \t b= %p: %d",pa,*pa,pb,*pb);

    temp= *pa;
    *pa= *pb;
    *pb= temp;
    printf("\nAfter swapping:\n" );
     printf("In the function main: a= %p: %d \t b= %p: %d",pa,*pa,pb,*pb);

}