#include<stdio.h>
 
void square(int n);
void _square(int* n);


int main(){
    int number = 3 ;
    square(number);
    printf("Enter a number is:%d\n",number);

    _square(&number);
    printf("Enter a number is:%d\n",number);

    return 0;
}

void square(int n){
 
    n = n*n;
    printf("Square of a number :%d\n",n);
}

void _square(int* n){

    *n = (*n) * (*n);
    printf("sqaure of a number is: %d\n",*n);

}
