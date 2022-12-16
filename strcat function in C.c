#include<stdio.h>
#include <string.h>

int main(){
    char st1[40] = "Hello"; //isme he pura string aane wala hai/concatenate hoga,so array ko size suitable deni hogi. 
    char st2[] = " Harry";
    
    strcat(st1, st2);
    printf("Now the st1 is %s", st1);
    return 0;
}


