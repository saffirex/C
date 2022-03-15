//finding the roots of quadratic equation

#include<stdio.h>  //printf sacnf
#include<math.h>  //pow()

void main()
{

    float a,b,c,k,r1,r2,real,img;
    printf("enter the values for a, b and c separated by spaces: \n");
    scanf("%f %f %f",&a,&b,&c);

    k= ((b*b)-(4*a*c));

    if (k==0)
    {

        printf("\nthe values of roots are real and equal: ");
        r1= ((-b)/(2*a));
        printf("\n the values of roots are:");
        printf("root1= root2 = %.3f",r1);
    }

    if(k>0)
    {

        printf("\n The values of roots are real and unequal:");
        r1= (((-b)+pow(k,0.5))/(2*a));
        r2= (((-b)-pow(k,0.5))/(2*a));
        printf("\nthe values of roots are:");
        printf("\n Root1=%.3f",r1);
        printf("\n Root2=%.3f",r2);
    }

    if (k<0)
    {
        printf("\nThe values of roots are imaginary: ");
        real= ((-b)/(2*a));
        img= (pow(-k,0.5)/(2*a));
        printf("\nthe values of roots are:");
        printf("\n Root1= %.3f + %.3f i", real, img);
        printf("\n Root2= %.3f - %.3f i",real,img);
    }

}
