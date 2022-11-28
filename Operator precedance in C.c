#include <stdio.h>

int main()
{
    int x=2;
    int y=3;
    printf("The value of x*3 - y*8 is %d \n",x*3 -y*8);
    
    // operator associativity that --> follows left to right  operations when *,/ comes together 
    printf("The value of y*8 / x*3 is %d \n", y*8 /x*3); //answer normally expected is 24/6 = 4,but by OPe. Asso. it is  36
    return 0;
}


