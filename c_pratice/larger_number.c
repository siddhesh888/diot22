#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two number:\n");
    scanf("%d%d",&a,&b);
    if(a>b)
        printf("greater number:%d\n",a);
    else
        printf("Greater Number=%d\n",b);
    return 0;
}