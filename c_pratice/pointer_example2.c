#include<stdio.h>
int main()
{
    // int x=5;
    // int *ptr=&x;


    int x;
    int *ptr; 
    ptr = &x;
    *ptr = 5;

    printf("x is:%d\n",x);
    printf("*ptr is:%d\n",*ptr);

    *ptr+=12;
    printf("*ptr is:%d\n",*ptr);





    return 0;
}