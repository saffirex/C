// calculation of cosine series cosx=1-x^2/2!+x^4/4!-x^6/6!... ...

#include<stdio.h>
#include<math.h>
#define PI 3.1415926

void main()
{
    int i,n,sign=-1,f=1;
    float x,rad, sum=1;

    printf("enter the value for x in degrees: ");
    scanf("%f",&x);
    printf("enter the value of n for precision: ");
    scanf("%d",&n);

    rad=(x*PI)/180;

    for (i=1;i<=n; i++){


        f=f*i;
        if (i%2==0)
        {
            sum=sum+(sign*((pow(rad,i))/f));
            sign=sign*(-1);
        }
    }

    printf("the value of cos(%f) is: %.5f ",x,sum);



}
