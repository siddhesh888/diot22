#include<stdio.h>

void domywork(int a,int b,int *sum,int *prod,int *avg);

int main()
{
    int a=3,b=7;
    int sum,prod,avg;

    domywork(a,b,&sum,&prod,&avg);
    printf("sum is=%d,prod is=%d,avg=%d\n",sum,prod,avg);
    return 0;



}

void domywork(int a,int b,int *sum,int *prod,int *avg)
{
    *sum = a+b;
    *prod = a*b;
    *avg = (a+b)/2;
}
