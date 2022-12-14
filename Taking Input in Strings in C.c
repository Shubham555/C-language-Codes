// Taking Input in Strings in C 
#include <stdio.h>

int main()
{
   char s[34];
   printf("enter any string or your name:");  
   scanf("%s",s); //We can also write" &s[0] "for storing address of first element:) 
   //s--> means it automatically stored the address of first element,like &s[0] :)
   printf("your entered string/name is  :%s",s);
    return 0; 
}



