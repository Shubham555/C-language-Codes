//Finding occurance of Character in String
#include <stdio.h>
int occurance(char st[],char c){
    char *ptr= st;
    int count =0;
    while(*ptr!='\0'){
        if(*ptr==c){
            count++;
        }
        ptr++;
    } 
    return count;
}

int main(){
    char st[] = "harry";
    int count = occurance(st,'r');
    printf("occurances= %d",count);

    return 0;
}

