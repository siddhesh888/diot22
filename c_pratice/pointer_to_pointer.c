#include<stdio.h>
int main()

{

    int i=7;
    int *ptr=&i;
    int **pptr=&ptr;

    printf("i is:%d\n",i);
    printf("*ptr is:%d\n",*ptr);
    printf("**ptr is:%d\n",**pptr);
    
    
    return 0;


}