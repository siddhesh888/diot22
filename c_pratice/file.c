//Write a program to write your name into the file

#include <stdio.h>

int main() {
    FILE* file = fopen("data.txt", "w+");
    char name[50];
    if(file == NULL) {
        printf("Nahi mila be!");
    }
    else {
        printf("Enter you name: ");
        scanf("%s", name);
        fprintf(file, "%s\n", name);
        //fseek(fp, 0, SEEK_END);   //To move the cursor to the end of the document
    }
}