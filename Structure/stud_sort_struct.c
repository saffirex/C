/* struct for 5 students name, roll, marks
sort alphabetically */
#include<stdio.h>
#include<string.h>

struct student
{
    char name[50];
    int roll;
    float marks;
};

void sort( struct student *stu);
int main()
{
    struct student std[5];
    struct student *stu;
    stu=&std[0];
    printf("Enter the details: \n");
    for (int i=0;i<5;i++)
    {

    printf("\n %d. ",i+1);
    printf("\nName: ");
    scanf("%s", std[i].name );
    printf("Roll: ");
    scanf("%d", &std[i].roll);
    printf("Marks: ");
    scanf("%f", &std[i].marks);
    printf("\n\n");
    }

    sort(stu);


    printf("After sorting: \n");

for (int i=0;i<5;i++)
    {

    printf("\n %d. ",i+1);
    printf("\n Name: %s", std[i].name);    
    printf("\n Roll: %d", std[i].roll);
    printf("\nMarks: %f", std[i].marks);
    printf("\n\n");
    }

return 0;
}

void sort( struct student *stu)
{
    struct student temp;
    for (int i=0;i<5-1;i++)
    {
        for (int j=0;j< 5-1-i;j++)
        {
            if (strcmp( ((stu+j)->name), ((stu+j+1)->name) )>0)    
                {
                temp= *(stu+j);
                *(stu+j)= *(stu+j+1);
                *(stu+j+1)= temp;
            }
        }
    }

}