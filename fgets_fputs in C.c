// fgets_fputs in C
#include<stdio.h>

int main(){
    FILE *ptr;
    // fgetc demo for reading a file
 //--->  // ptr = fopen("getcdemo.txt", "r"); //here i have to create one file in pc "getcdemo.txt" of some content
 //--->  // char c = fgetc(ptr);
    // printf("The value of my character is %c\n", fgetc(ptr));
    // printf("The value of my character is %c\n", fgetc(ptr));
    // printf("The value of my character is %c\n", fgetc(ptr));
    // printf("The value of my character is %c\n", fgetc(ptr));
    // printf("The value of my character is %c\n", fgetc(ptr));

    ptr = fopen("putcdemo.txt", "w");
    fputc('c', ptr);
    fputc('o', ptr);      // Also only putc is working without f in starting
    fputc('c', ptr);
    fclose(ptr);
    return 0;
}
