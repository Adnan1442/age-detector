#include<stdio.h>
int main()
{
    int h,y,m,d,x,min;
    printf("Total Days:-");
    scanf("%d",&h);
    y=h/365;
    printf("Years:-%d\n",y);
    x=h%365;
    m=x/30;
    printf("Months:-%d\n",m);
    d=x%30;
    printf("Days:-%d\n",d);

    return 0;

}
