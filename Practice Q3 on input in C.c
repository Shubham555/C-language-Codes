// To convert Censius temperature to Fahrenheit...

#include <stdio.h>

int main()
{  
   float celsius=37;
   //printf("Enter the value of Celsius\t"); //input from user
   //scanf("%f", &celsius);
   
   float far = (celsius*9/5)+32;
   printf("The value of this Celsius temperature in Fahrenheit is %f",far);

    return 0;
}


