// Array Structures 
#include <stdio.h>
#include <string.h>

struct employee{
    int code;
    float salary;
    char name[10];
};


int main(){
    struct employee facebook[100];
    
    facebook[0].code=100;
    facebook[0].salary=100.45;
    strcpy(facebook[0].name,"harry");
    
    facebook[1].code=101;
    facebook[1].salary=100.65;
    strcpy(facebook[1].name,"shubham");
    
    facebook[2].code=102;
    facebook[2].salary=100.60;
    strcpy(facebook[2].name,"omprasad");
    
    printf("done");
    return 0;
}


