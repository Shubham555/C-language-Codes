 
#include <stdio.h>

int main()
{  
   float celsius;
   //input from user
   printf("enter the celsius value: \n");
   scanf("%f",&celsius);
   //formula for finding farahenhite
    float far = (celsius*9/5)+32;
    printf("the farehenite value is %f",far);

    return 0;
}
