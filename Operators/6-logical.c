// to identify whether the entered character is small, big, digit or special symbol

#include<stdio.h>

void main()
{

    char ch;
    printf("enter anything from your keyboard: ");
    scanf("%ch",&ch);

    if (ch>=48 && ch<=57)
    {
        printf("\nthe character is a digit");
    }
    else if (ch>=65 && ch<=90)
    {
        printf("\n the character is a capital letter");

    }
    else if (ch>=97 && ch<=122)
    {
        printf("\n the character is a small letter");

    }
    else
    {
        printf("\nthe character is a special symbol");
    }
}
