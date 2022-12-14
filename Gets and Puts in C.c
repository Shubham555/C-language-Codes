//Gets and Puts in C

#include <stdio.h>

int main()
{
   char s[34];
   printf("enter any string or your name:");  
   gets(s);   // scanf("%s",s);             //s--> means it automatically stored the address of first element, like &s[0]
   puts(s);  // printf("your entered string/name is  :%s",s);
    return 0; 
}





