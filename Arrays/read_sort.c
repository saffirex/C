/* read an array, assign and then sort */
#include<stdio.h>
int display(int d[5]);

int sort(int s[5]) //sorting
{
    int i,j, temp;
    for(i=0;i<4;i++) 
    {
        for (j=0;j<4-i;j++)
        {
        if (s[j] > s[j+1] )
        {
            //swap                          
            temp= s[j+1];
            s[j+1]=s[j];
            s[j]=temp;
        }

        }
        
    }
    display(s);

}

int display(int d[5])
{
    int i;
    printf("\nthe sorted array is: ");
    for (i=0;i<5;i++)
{
    printf(" %d \t",d[i]);
}

}


int main() //reading
{
    
int x[5],i;
printf("\nEnter any five values to store in array: ");
for (i=0;i<5;i++)
{
    scanf(" %d",&x[i]);
}
sort(x);

return 0;
}