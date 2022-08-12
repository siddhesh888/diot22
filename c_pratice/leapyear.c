#include<stdio.h>
int main()
{
    int year;
    printf("Enter year:\n");
    scanf("%d",&year);
    if(year%100 !=0)
    {
        if(year%4 == 0)
           printf("Leap year:\n");
        else
            printf("NOt leap\n");

    }   
    else
    {
        if(year%400 == 0){
            printf("Leap year\n");
        }
        else
        {
            printf("not leap year\n");
        }
    }
}