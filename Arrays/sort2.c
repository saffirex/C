/* sorting an array */
#include<stdio.h>
int sort(int s[], int n);
int display(int d[], int n);


int main() //reading an array
{
    int n;
    printf("how many members in the array?");
    scanf("%d",&n);
    int x[n],i;
    printf("\nEnter the values for array: (%d) ", n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    sort(x,n);
return 0;
}

//sorting an array

int sort(int s[], int n)  // 1 2 3 4 5 6            |  8 |  |  9  |                                   //    /  9   /
{
    int i,j, temp;
    for (i=0;i<n-1;i++)  //n-1
    {
        for (j=0;j<n-1;j++)
        {
                if (s[j]>s[j+1])
                {
                    temp=s[j];
                    s[j] = s[j+1];
                    s[j+1] = temp;
                }

        }
    }

    display(s,n);
    return 0;
}

int display(int d[],int n)
{
    int i;
    printf("\nthe sorted values are: ");
     for (i=0;i<n;i++)
    {
       printf("%d \t",d[i]);
    }
    return 0;

}