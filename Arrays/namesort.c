
#include<stdio.h>
#include<string.h>
void sort(char x[][30],int  numb);

int main()
{
    int i,j,numb;
    printf("enter the number of students. ");
    scanf("%d",&numb);
    char x[numb][30];
    for (i=0;i<numb;i++)
    {
        printf("\n %d",i);
        scanf(" %[^\n]",&x[i]);  
        printf("\n check: %s", x[i]);
    }
    sort(x, numb);

return 0;
}

void sort(char x[][30], int  numb)
{
    int i,j;
    char temp[30];
    //sorting algorithm
    for (i=0;i<numb;i++) 
    {
        for (j=0;j<=numb-i-1;j++)                                     
        {
            if (strcmp(x[j],x[j+1]) > 0)
            {  
                strcpy(temp,x[j+1]);
                strcpy(x[j+1],x[j]);
                strcpy(x[j],temp);

            }
        }
    }
    printf("\n after sorting: ");
    for (i=0;i<numb;i++)
    {
        puts(x[i]);
    }
}

