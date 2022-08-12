#include<stdio.h>

// void printaddress(int n);

// int main(){
//     int n;
//     printaddress(n);
//     printf("address of n:%p\n",&n);
//     return 0;
// }

//     void printaddress(int n){
        
//         printf("%p\n",&n);

//     }

void printaddress(int *n);

int main(){
    int n;
    printaddress(&n);
    printf("address of n is :%u\n",&n);
    return 0;
}

    void printaddress(int *n){
        
    printf("address of n is :%u\n",n);

    }