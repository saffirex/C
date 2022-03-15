/* 2d array */
#include<stdio.h>


int main()
{
     /*

    00 01 02 03 04
    10 11 12 13 14
    20 21 22 23 24

    */
   int i,j, *p,m,n;
   printf("\n Enter the number of rows: ");
    scanf("%d",&n);
   printf("\n Enter the number of columns: ");
   scanf("%d",&m);
    //input of data
   int a[n][m];
   for (i=0;i<n;i++)
   {
       for (j=0;j<m;j++)
       {
           printf("[%d,%d] : ",i,j);
           scanf("%d",&a[i][j]);
       }
   }


    //Normal Method:
    printf("Using Normal Method: \n");
   for (i=0;i<n;i++)
   {
       for (j=0;j<m;j++)
       {
           printf(" [%d,%d] : ",i,j);
           printf("%d : %p \n",a[i][j], &a[i][j]);
       }
   }

    p=&a[0][0];
    //Using pointer
    printf("\nUsing pointer: \n");

    for(i=0;i<m*n;i++)
    {
           printf("%d: %p \n", *(p+i), (p+i));
        
    }



return 0;
}