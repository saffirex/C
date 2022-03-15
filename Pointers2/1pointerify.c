/* sorting an array */
#include<stdio.h>
int sort(int *s);
int display(int *d);


int main() //reading an array
{
    int x[6],i;
    int *px;
    px=&x[0];
    printf("\nEnter the values for array: (6) ");
    for (i=0;i<6;i++)
    {
        scanf("%d",(px+i));
    }
    sort(px);


return 0;
}

//sorting an array

int sort(int *s)  // 1 2 3 4 5 6            |  8 |  |  9  |                                   //    /  9   /
{
    int i,j, temp;
    for (i=0;i<6;i++)  
    {
        for (j=0;j<5-i;j++)
        {
                if (*(s+j)>*(s+j+1))
                {
                    temp=*(s+j);
                    *(s+j) = *(s+j+1);
                    *(s+j+1) = temp;
                }

        }
    }

    display(s);
}

int display(int *d)
{
    int i;
    printf("\nthe sorted values are: ");
     for (i=0;i<6;i++)
    {
       printf("%d \t",*(d+i));
    }

}