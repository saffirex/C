/* (a+ib)* (c+id)= (ac+ad.i+bc.i+i^2.bd) = (ac-bd) + (ad+bc) */
#include<stdio.h>
struct complex
{
    int real;
    int img;
};
struct complex mul( struct complex complex1, struct complex complex2);

int main()
{
    struct complex complex1, complex2, complex3;
    printf("First Complex: \n");
    printf("Real: ");
    scanf("%d", &complex1.real);
    printf("Imaginary: ");
    scanf("%d", &complex1.img);
printf("\n\n");
    printf("Second Complex: \n");
    printf("Real: ");
    scanf("%d", &complex2.real);
    printf("Imaginary: ");
    scanf("%d", &complex2.img);

    complex3= mul(complex1, complex2);

    printf("\n Their product: ");
    printf(" %d   +  %d i", complex3.real, complex3.img);



return 0;
}

struct complex mul( struct complex complex1, struct complex complex2)
{
    struct complex complex3;
    /* (a+ib)* (c+id)= (ac+ad.i+bc.i+i^2.bd) = (ac-bd) + (ad+bc) */
    complex3.real=  complex1.real*complex2.real - complex1.img*complex2.img;
    complex3.img = complex1.real*complex2.img + complex2.real*complex1.img;

    return complex3;

}