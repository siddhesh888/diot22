#include<stdio.h>
int main()


{
    FILE *file = fopen("data.txt","w+");
    char name[50];
    if(file == NULL){
        printf("empty");
    }
    else{
        printf("Enter your name: ");
        scanf("%s",name);
        fprintf(file,"%s\n",name);
        
    }
}