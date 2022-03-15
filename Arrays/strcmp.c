#include <stdio.h>
int main() {

char se[100];
int age;
char ay[20];

printf("Enter your name:");
scanf(" %[^\n]", &se);
printf("Enter your age:");
scanf("%d", &age);
printf("Enter your address: ");
scanf(" %[^\n]", &ay);

printf("my name is %s",se);
printf("\nYour age is %d ",age);
printf("Your address is %s ",ay);



return 0;
}