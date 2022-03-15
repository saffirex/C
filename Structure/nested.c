/* student info nested */
#include<stdio.h>

struct date{
    int dd;
    int mm;
    int yyyy;
};

struct student{
    char name[30];
    int roll;
    struct date dob;
};

int main()
{
    struct student std[5];
    for (int i=0;i<5;i++)
    {
        printf("\n%d:\n",i+1);
        printf(" Name: ");
        scanf("%s", &std[i].name);
        printf(" Roll: ");
        scanf("%d", &std[i].roll);
        printf(" DOB (yyyy mm dd): " );
        scanf( "%d %d %d", &std[i].dob.yyyy, &std[i].dob.mm, &std[i].dob.dd);
    }
    //displaying
    for (int i=0; i<5;i++)
    {
        printf("\n%d:\n ",i+1);
        printf(" Name: %s", std[i].name);
        printf(" Roll:%d ", std[i].roll);
        printf(" DOB (yyyy mm dd): %d", std[i].dob.yyyy, std[i].dob.mm, std[i].dob.dd);
    
    }


return 0;
}