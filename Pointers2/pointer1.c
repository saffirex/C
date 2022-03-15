/* printing the addresses and values */
#include<stdio.h>


int main()
{
    int i,*p,n;
    printf("Enter the number of items: ");
    scanf("%d",&n);

    int arr[n];

    //reading from the user
    printf("Enter %d values: \n", n);
    for(i=0;i<n;i++)
    {
        printf("\n %d: ",i+1);
        scanf(" %d",&arr[i]);
    }

    //Normal Method:
    printf("Normal method: \n\n\n");
    for(i=0;i<n;i++)
    {
        printf("\n %d. %p: ", i+1, &arr[i]);
        printf("%d",arr[i]);
    }

     //Using String name as pointer:
    printf("Using String name as pointer: \n\n\n");
    for(i=0;i<n;i++)
    {
        printf("\n %d. %p: ", i+1, arr+i);
        printf("%d",*(arr+i));
    }

    p=&arr[0];
     //Pointer Method:
    printf("Pointer Method: \n\n\n");
    for(i=0;i<n;i++)
    {
        printf("\n %d. %p: ", i+1, p+i);
        printf("%d", *(p+i));
    }


return 0;
}