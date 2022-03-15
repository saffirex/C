/* passing 2d array */
#include<stdio.h>
int high (int *x)
{
    int i,j,highest;

    highest= *x;
    for (i=0;i<3;i++)
{
    for (j=0;j<3;j++)
    {
        if (highest< *(x+ 3*i + j))
        {
            highest= *(x+ 3*i + j);
        }
    }

}
return highest;

}



int main()
{
    /*
|j=  |  0     1     2
|----|--------------------
|i=0 |  00   01   02
|i=1 |  10   11   12
|i=2 |  20   21   22
*/

int i,j,h,x[3][3];
int *pa;
pa=&x[0][0];
printf("Enter the values for matrix: [3x3] :");
for (i=0;i<3;i++)
{
    for (j=0;j<3;j++)
    {
        scanf("%d", (pa+ 3*i + j) );
    }
}

h= high(pa);
printf("\n the highest value is: %d ", h);
    

return 0;
}