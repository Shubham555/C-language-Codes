// file I/O basics
#include<stdio.h>

int main(){
    FILE *ptr;
    // ptr = fopen("sample2.txt", "r"); //--> for reading the file
    //ptr = fopen("sample2.txt", "w"); //--> for writing to a file
    return 0;
}

//--> extra:

/*#include <stdio.h>

int main(){
     int a ;
     int b=56;
     FILE *ptr;
     
     ptr= fopen("sample.txt","r"); //-->for reading the file
     fscanf(ptr,"%d",&a);
     printf("the number is %d",a);
     
    // ptr= fopen("sample.txt","w"); //-->for writing the file
    // fprintf(ptr,"%d",b);
    // fprintf(ptr,"shubham");
    return 0;
}*/
