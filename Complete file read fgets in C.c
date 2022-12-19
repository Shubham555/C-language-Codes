// Complete file read fgets in C
#include <stdio.h>

int main(){
       FILE *ptr;
       ptr= fopen("getcdemo.txt","r");  //--> i have to creat file "getcdemo.txt" in pc
       char c = fgetc(ptr);
       while(c!=EOF){
           printf("%c",c);
           c=fgetc(ptr);
       }
    return 0;
}

