//noon neveroddoreven

/* palindrome check for string */
#include<stdio.h>


int main()
{
    int i=0,len=0,j, flag=1;
    char text[100];
    printf("Enter the string: ");
    gets(text);
                                                       // terminal => t e r m i n a l \0 y t u 8 
    while (text[i]!='\0')
    {   
        len++;
        i++;
    }
    j=len-1;

    for (i=0;i<=len/2;i++)
    {
            if (text[j] != text[i])
            {
                    flag=0;
                    break;
            }
            j--;
    }

    if (flag==1)
    {
        printf("Palindrome: ");
    }
    else{
        printf("not a palindrome: ");
    }








return 0;
}