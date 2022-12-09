//Sum function
#include <stdio.h>
// here, sum is a function which takes a and b as input(in this particular code a and b are  integer type  input ) and returns an integer as an output
int sum(int a, int b); //function prototype decleration 
int main()
{
    int c;
    c= sum(2,15); //function call 
    printf("the value of c is %d \n",c);

    return 0;
}
int sum (int a,int b) {
    int c;
    c=a+b;
    return c;
}




