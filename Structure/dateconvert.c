/*  2078-04-23 BS
    2021-08-7 AD
   ------------- 
       56 -8-16

(year-56) (month-8) (day-16)
    */

#include<stdio.h>
struct date
{
    int year;
    int month;
    int day;
};

struct date converter( struct date bs);

int main()
{
 struct date bs, ad;
 printf("Enter the values for yyyy/mm/dd: ");
 scanf("%d %d %d", &bs.year, &bs.month, &bs.day ) ;
printf("\nIn BS: %d-%d-%d", bs.year, bs.month, bs.day);
ad = converter(bs);

printf("\nIn AD: %d-%d-%d", ad.year,ad.month, ad.day);


return 0;
}

struct date converter(struct date bs)
{
    if (bs.month <=8)
    {
        bs.year-=1;
        bs.month+=12;
    }

    if (bs.day <=16)
    {
        bs.month-=1;
        bs.day+=30;
    }
    bs.year-=56;
    bs.month-=8;
    bs.day-=16;

    return bs;
}