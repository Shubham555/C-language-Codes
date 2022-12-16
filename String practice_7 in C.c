// Finding presence of String
#include <stdio.h>
void presence(char st[],char c){
    char *ptr= st;
    
    while(*ptr!='\0'){
        if(*ptr==c){       //--> main thing according to the condition, right logic apply
            printf("present\n");
        } else{
            printf("not present\n");
        }
        ptr++;
    } 
    
}

int main(){
    char st[] = "harry";
    presence(st,'r');

    return 0;
}

