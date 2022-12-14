// Strlen Function In C
#include<stdio.h>
#include <string.h> //--> this header file is used while declearing strings varioius funtions

int main(){
    char *st = "Harry";
 // char  st[]="Harry";
    st="shubhamgite"; // String can be overwrited bcoz we declared it using Pointers:)
    int variable_length = strlen(st);
    printf("The length of string st is %d", variable_length);
    return 0;
}




