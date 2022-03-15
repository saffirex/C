/* To ask for 3x3 matrix from the user
User defined function maa find the minimum value
replacament of diagonals with min element
using pointers display in main function
 */
#include<stdio.h>
int min_int( int *pa);
int main()
{   
    int mat[3][3], i,j;
    int *pa;
    pa= &mat[0][0];

    printf("\nEnter the values for matrix (3x3): ");
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            printf("[%d,%d]: \t ", i+1, j+1);
            scanf("%d", pa+3*i+j );
        }
        printf("\n");
    }
    int min = min_int( pa);
    printf("\nThe minimum value in the matrix is: %d", min);
    printf("\n\nAfter replacement: ");
    for (i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            printf("[%d,%d]. %d \t", i+j,j+j,*(pa+3*i+j));
        }
        printf("\n");
    }


    

return 0;
}

int min_int( int *pa)
{
    int min = *pa;  //assumption
    int temp; //current value
     for (int i=0;i<3;i++)  //simply prints what's in the matrix
    {
        for (int j=0;j<3;j++)
        {
            printf("[%d,%d]. %d \t", i,j,*(pa+3*i+j)); 
        }
        printf("\n");
    }

    for (int i=0;i<3;i++) //minimum value find
    {
        for (int j=0;j<3;j++)
        {
            temp= *(pa+3*i+j); //current value store
            if (min> temp)
                min=temp;
        }
        printf("\n");
    }

    for (int i=0;i<3;i++)  //replacement with minimum value
    {
        for (int j=0;j<3;j++)
        {
            if (i==j || i+j ==2)
            *(pa+3*i+j) = min;
        }
    }

    return min;

}