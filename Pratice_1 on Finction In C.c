
//write a program using function to find average of three numbers.
#include <stdio.h>
float average(int a ,int b, int c);

int main()
{  int a,b,c;
      // a=5,b=15,c=10;
   printf("Enter the value of a\n");
   scanf("%d",&a);
   printf("Enter the value of b\n");
   scanf("%d",&b);
   printf("Enter the value of c\n");
   scanf("%d",&c);
   
   printf("The Average of Given three numbers %f\n",average(a,b,c));
  
    return 0;
}

float average(int a, int b,int c ){
    float result;
    
    result= (float)(a+b+c)/3;
    return result;
    
}




