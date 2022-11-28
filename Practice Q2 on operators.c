 
//write a program to determine whether the number is divisible by 97 or not 
#include <stdio.h>

int main()
{
   int num;
   printf("Enter the number\n");
   scanf("%d",&num);
   
   printf("Divisibility test returns: %d \n",num%97);
   
   /* Easy way to represent After if topic completion..
   if ((num%97)==0){
       printf("The number %d is Divisible by 97\n",num);
       
   }
   else {
       printf("The number %d is not divisible by 97\n",num);
   }*/

    return 0;
}





