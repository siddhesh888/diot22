#include<stdio.h>

int main()
{
    int age;
    int *ptr = &age;
    printf("ptr = %u",ptr);
    ptr++;
    printf("ptr = %u",ptr);
    return 0;
}