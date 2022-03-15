/* Struct name, age and salary for 5 employees
Sorting: Based on salary
Display: Sorted from main function */
#include <stdio.h>
struct details
{
    char name[30];
    int age;
    float salary;

};

struct details employee[5];
void sort( struct details *ps);

int main()
{
    struct details *ptr;
    ptr = &employee[0];
    printf("Enter the details for employees: \n");
    for (int i=0;i<5;i++)
    {
        printf("%d. \t", i+1);
        printf("Name:");
        scanf(" %s", ((ptr+i)->name)) ;    // ((ptr+i)->name) =~ employee[i].name
        printf("\tAge: ");
        scanf("%d", &employee[i].age);     // &((ptr+i))->age) =~ &employee[i].age
        printf("\tSalary: ");
        scanf("%f", &employee[i].salary);
        printf("\n");
    }

    sort(ptr);

    for (int i=0;i<5;i++)
    {
        printf("%d. ", i+1);
        printf("\t Name: %s", employee[i].name);  
        printf("\t Age: %d", ((ptr+i)->age));   // ((ptr+i)->age) =~ employee[i].age
        printf("\t Salary: %f", employee[i].salary);
        printf("\n");
    }

    return 0;
}

/*
    emp0    emp1    emp2    emp3    emp4   temp
    suman   sam     ram     hari    jen     ---
    5       45      13      67      12      ---
    980     987     90      189     122     ---
*/
void sort( struct details *ps)
{
    struct details temp;
    for (int i=0;i<5-1;i++)
    {
        for (int j=0;j<5-1-i;j++)
        {
            if (  ((ps+j)->salary) > ((ps+j+1)->salary) )   //swap
                {
                    temp= *(ps+j);
                    *(ps+j)=*(ps+j+1);
                    *(ps+j+1)= temp;
                }

        }
    }

}