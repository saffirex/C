//to find all the possible roots of a quadratic eqn

#include<stdio.h>
#include<math.h>

void  main()
{
    float a,b,c,root1,root2,img,real,check;

    printf("enter the values for a, b and c separated by commas: ");
    scanf("%f %f %f",&a,&b,&c);

    check= ((b*b)-(4*a*c));  //(b^2-4ac)

    if (check==0)
    {
        printf("\nthe roots are real and equal");
        root1=((-b)/(2*a));
        printf("\nthe roots are: %f", root1);

    }

    else if (check>0)
    {
        printf("\nthe roots are real and unequal");
        root1=((-b-pow(check,0.5))/(2*a));
        root2=((-b+pow(check,0.5))/(2*a));
        printf("\nthe roots are: Root1= %f \n Root2= %f", root1,root2);

    }

    //imaginary part lai

    else if (check<0)
    {


    real=(-b/2*a);
    img= (pow(-check,0.5)/2*a);
    printf("\nThe roots are imaginary and unequal");
    printf("\nthe roots are: \n root1= %.3f + %.3fi \n and \n root2= %.3f - %.3fi",real,img,real,img);
    }



}

