#include <stdio.h>
 //97-122 = a-z ; ASCII Values.
int main()
{
    char ch;
    printf("Enter the Character\n");
    scanf("%c",&ch);
    
    if(ch<=122&&ch>=97){
        printf("it is lowercase");
    }
    else {
        printf("it is not lowercase");
    }
    return 0;
}

