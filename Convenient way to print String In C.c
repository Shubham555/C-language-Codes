// Convenient way to print String In C
#include <stdio.h>

int main(){
      
    char * c = "Harry";   /*--> declearing string using pointers also
    sting declacered using this format means by pointers ,then it can be reinitialized,like c= "Shubham";  */
 // c="Shubham"; 
    
   /* char c[]= "Harry";  /*--> and this is offficial way of string declearing
sting declacered using this format means by Simple Way(non-pointer),then it cannot be reinitialized,like c= "Shubham";*/
    
    printf("%s",c);
    return 0;
}




